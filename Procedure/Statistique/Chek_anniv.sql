USE [Projet_POO]
GO
/****** Object:  StoredProcedure [dbo].[Chek_anniv]    Script Date: 11/12/2023 20:09:28 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

CREATE PROC Chek_anniv
AS
DECLARE @DateActuelle DATE = GETDATE();

-- Utilisez la clause SET pour attribuer une valeur à une variable
DECLARE @id_cli INT;
SET @id_cli = (
    SELECT TOP 1 Client.Id_Cli
    FROM Individu
    JOIN Client ON Individu.Id_Ind = Client.Id_Ind
    JOIN Commande ON Client.Id_Cli = Commande.Id_Cli
    WHERE MONTH(CONVERT(DATE, Individu.Date_Naissance_Ind)) = MONTH(@DateActuelle)
      AND DAY(CONVERT(DATE, Individu.Date_Naissance_Ind)) = DAY(@DateActuelle)
);

-- Assurez-vous que la sous-requête ne renvoie qu'une seule valeur avec TOP(1)
DECLARE @id_commande INT;
SET @id_commande = (
    SELECT TOP 1 Id_Com
    FROM Commande
    WHERE Id_Cli = @id_cli
);

-- Sélectionnez les clients dont l'anniversaire est aujourd'hui
SELECT Nom_Ind, Prenom_Ind, Mail_Ind, Date_Naissance_Ind
FROM Individu
WHERE MONTH(CONVERT(DATE, Individu.Date_Naissance_Ind)) = MONTH(@DateActuelle)
  AND DAY(CONVERT(DATE, Individu.Date_Naissance_Ind)) = DAY(@DateActuelle);

-- Mettez à jour la commande avec la remise de 10%
UPDATE Commande
SET Total_TTC_Com = Total_TTC_Com * 0.9
WHERE Id_Com = @id_commande;

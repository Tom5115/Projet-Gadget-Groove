USE [Projet_POO]
GO
/****** Object:  StoredProcedure [dbo].[Ref_Commande]    Script Date: 11/12/2023 20:24:21 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

CREATE PROC Ref_Commande
@Id_Client INT,
@Ref_Com VARCHAR(50) OUTPUT
AS
BEGIN
    DECLARE @val INT;

    -- Sélectionnez l'ID de la commande précédente
    SELECT TOP 1 @val = Id_Com
    FROM Commande
    WHERE Id_Cli = @Id_Client
    ORDER BY Date_Emission_Com DESC;

    -- Sélectionnez les informations nécessaires pour construire la référence de commande
    SELECT
        @Ref_Com = LEFT(Nom_Ind, 2) +
                   LEFT(Prenom_Ind, 2) +
                   CAST(DATEPART(YEAR, Date_Emission_Com) AS VARCHAR) +
                   LEFT(Ville_Adr, 3) +
                   CAST(@val + 1 AS VARCHAR)
    FROM
        Individu
        JOIN Adresse ON Individu.Id_Adr = Adresse.Id_Adr
        JOIN Client ON Individu.Id_Ind = Client.Id_Ind
        JOIN Commande ON Client.Id_Cli = Commande.Id_Cli
    WHERE
        Client.Id_Cli = @Id_Client;
END

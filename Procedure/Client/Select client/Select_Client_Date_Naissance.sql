use[Projet_POO]
GO

CREATE PROC Select_Client_Date_Naissance
@valeur date 
AS
SELECT * 
FROM Individu 
JOIN Adresse ON Individu.Id_Adr = Adresse.ID_Adr
JOIN Client ON Individu.Id_Ind = Client.Id_Ind
WHERE Individu.Date_Naissance_Ind = @valeur
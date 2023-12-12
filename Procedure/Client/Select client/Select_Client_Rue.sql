use[Projet_POO]
GO

CREATE PROC Select_Client_Rue
@valeur char(40) 
AS
SELECT * 
FROM Individu 
JOIN Adresse ON Individu.Id_Adr = Adresse.ID_Adr
JOIN Client ON Individu.Id_Ind = Client.Id_Ind
WHERE Adresse.Rue_Adr = @valeur
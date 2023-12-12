use[Projet_POO]
GO

CREATE PROC Select_Client_Nom_Batiment
@valeur char(40) 
AS
SELECT * 
FROM Individu 
JOIN Adresse ON Individu.Id_Adr = Adresse.ID_Adr
JOIN Client ON Individu.Id_Ind = Client.Id_Ind
WHERE Adresse.Nom_Batiment_Adr = @valeur
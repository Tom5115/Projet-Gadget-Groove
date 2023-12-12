use[Projet_POO]
GO

CREATE PROC Select_Personel_Ville
@Valeur char(40)
AS
SELECT * 
FROM Individu 
JOIN Adresse ON Individu.Id_Adr = Adresse.ID_Adr
JOIN Personel ON Individu.Id_Ind = Personel.Id_Ind
WHERE Adresse.Ville_Adr = @Valeur
use[Projet_POO]
GO

CREATE PROC Select_Personel_Etage
@Valeur int
AS
SELECT * 
FROM Individu 
JOIN Adresse ON Individu.Id_Adr = Adresse.ID_Adr
JOIN Personel ON Individu.Id_Ind = Personel.Id_Ind
WHERE Adresse.Etage_Adr = @Valeur
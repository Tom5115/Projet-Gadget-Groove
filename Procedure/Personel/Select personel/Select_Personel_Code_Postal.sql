use[Projet_POO]
GO

CREATE PROC Select_Personel_Code_Postal
@Valeur char(40)
AS
SELECT * 
FROM Individu 
JOIN Adresse ON Individu.Id_Adr = Adresse.ID_Adr
JOIN Personel ON Individu.Id_Ind = Personel.Id_Ind
WHERE Adresse.Code_Postal_Adr = @Valeur
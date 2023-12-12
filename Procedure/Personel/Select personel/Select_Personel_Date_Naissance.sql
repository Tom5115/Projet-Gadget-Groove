use[Projet_POO]
GO

CREATE PROC Select_Personel_Date_Naissance
@Valeur date
AS
SELECT * 
FROM Individu 
JOIN Adresse ON Individu.Id_Adr = Adresse.ID_Adr
JOIN Personel ON Individu.Id_Ind = Personel.Id_Ind
WHERE Individu.Date_Naissance_Ind = @Valeur
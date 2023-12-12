USE [Projet_POO]
GO

CREATE PROC Produits_Reapprovisionnement
AS
Select Id_Art, Nom_Art
FROM Article 
WHERE Stock_Art<10
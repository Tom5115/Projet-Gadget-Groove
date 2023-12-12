USE [Projet_POO]
GO

CREATE PROC Articles_Plus_Vendus
AS
SELECT TOP 10 Article.Id_Art, Nom_Art, SUM(Quantite_Article) AS TotalQuantiteVendue
FROM Article
JOIN Contient ON Article.Id_Art = Contient.Id_Art
GROUP BY Article.Id_Art, Nom_Art
ORDER BY TotalQuantiteVendue DESC;
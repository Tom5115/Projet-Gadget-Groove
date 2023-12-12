USE [Projet_POO]
GO
CREATE PROC Valeur_Commerciale 
AS
SELECT SUM(Prix_Art * Stock_Art) AS Valeur_Commerciale 
FROM Article
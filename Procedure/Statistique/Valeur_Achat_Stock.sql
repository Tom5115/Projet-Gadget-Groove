USE [Projet_POO]
GO
CREATE PROC Valeur_Achat_Stock 
AS
SELECT SUM((Prix_Art * Stock_Art)*(Taux_TVA_Art/100)) + SUM(Prix_Art * Stock_Art) AS Valeur_Achat
FROM Article
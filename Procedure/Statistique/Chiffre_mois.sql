USE [Projet_POO]
GO

CREATE PROC Chiffre_mois
@date int

AS

SELECT SUM(Total_TTC_Com) AS 'Somme des ventes'
FROM Commande
WHERE (SELECT DATEPART(MONTH, Date_Emission_Com)) = @date


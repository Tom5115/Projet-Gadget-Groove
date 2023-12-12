use[Projet_POO]
GO

CREATE PROC Calcul_Panier_Moyen 

AS
SELECT SUM(Total_TTC_Com)/COUNT(Id_Com) AS Panier_Moyen
FROM Commande

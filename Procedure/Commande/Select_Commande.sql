use[Projet_POO]
GO


CREATE PROC Afficher_Commande

AS
	Select * From Commande JOIN Possede ON Commande.Id_Com = Possede.Id_Com

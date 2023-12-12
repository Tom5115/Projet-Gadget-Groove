use[Projet_POO]
GO


CREATE PROC Afficher_Commande_Cond

@Id_Com int

AS
	Select * From Commande JOIN Possede ON Commande.Id_Com = Possede.Id_Com 
	WHERE Commande.Id_Com = @Id_Com
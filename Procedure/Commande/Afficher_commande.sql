use[Projet_POO]
GO


CREATE PROC Afficher_Commande

@Id_Com int

AS
	Select * From Commande 
	JOIN Possede ON Commande.Id_Com = Possede.Id_Com 
	JOIN Contient ON Commande.Id_Com = Contient.Id_Com
	WHERE Commande.Id_Com = @Id_Com
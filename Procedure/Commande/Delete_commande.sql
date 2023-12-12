use[Projet_POO]
GO


CREATE PROC Supprimer_Commande ThDa2023Rou1

@Ref_Com varchar

AS
	DELETE FROM Possede WHERE Id_Com = (SELECT Id_Com FROM Commande WHERE Ref_Com = @Ref_Com)
	DELETE FROM Commande WHERE Ref_Com = @Ref_Com
	DELETE FROM Contient WHERE Id_Com = (SELECT Id_Com FROM Commande WHERE Ref_Com = @Ref_Com)
use[Projet_POO]
GO


CREATE PROC Afficher_Commande_Id

@Id_Com int

AS
	Select Ref_Com, Date_Livraison_Com, Date_Emission_Com, Moyen_Paiment_Com, Total_HT_Com, Total_TVA_Com, Total_TTC_Com 
	From Commande 
	JOIN Possede ON Commande.Id_Com = Possede.Id_Com 
	JOIN Contient ON Commande.Id_Com = Contient.Id_Com
	WHERE Commande.Id_Com = @Id_Com
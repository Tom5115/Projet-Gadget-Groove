use[Projet_POO]
GO


CREATE PROC Modifier_Commande

@Ref_Com varchar(50),
@Date_Livraison_Com date,
@Date_Emission_Com date,
@Total_HT_Com float,
@Total_TTC_Com float,
@Total_TVA_Com float,
@Moyen_Paiment_Com char(40),
@Id_Cli int,
@Adresse_Livraison int,
@Adresse_Factuartion int

AS

	UPDATE Commande
	SET	Date_Livraison_Com = @Date_Livraison_Com ,
	Date_Emission_Com = @Date_Emission_Com ,
	Total_HT_Com = @Total_HT_Com,
	Total_TTC_Com = @Total_TTC_Com,
	Total_TVA_Com = @Total_TVA_Com,
	Moyen_Paiment_Com = @Moyen_Paiment_Com,
	Id_Cli = @Id_Cli 
	WHERE Ref_Com = @Ref_Com

	UPDATE Possede 
	SET Adresse_Livraison = @Adresse_Livraison,
	Adresse_Facturation = @Adresse_Factuartion
	WHERE Id_Com = (SELECT Id_Com FROM Commande WHERE Ref_Com = @Ref_Com)




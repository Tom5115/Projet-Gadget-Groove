use[Projet_POO]
GO


CREATE PROC Creer_Commande 
@Date_Livraison_Com date,
@Total_HT_Com float,
@Total_TTC_Com float,
@Total_TVA_Com float,
@Moyen_Paiment_Com char(40),
@Id_Cli int,
@Adresse_Livraison int

AS
	DECLARE @Adresse_Factuartion int;
	DECLARE @Ref_Com VARCHAR(255);
	EXECUTE Ref_Commande @Id_Cli, @Ref_Com OUTPUT;

	SELECT @Adresse_Factuartion = Adresse.Id_Adr
	

	FROM Client
	JOIN Individu ON Client.Id_Ind = Individu.Id_Ind
	JOIN Adresse ON Individu.Id_Adr = Adresse.Id_Adr
	JOIN Commande ON Client.Id_Cli = Commande.Id_Cli
	WHERE Client.Id_Cli = @Id_Cli;



	INSERT INTO Commande(Ref_Com, Date_Livraison_Com, Date_Emission_Com, Total_HT_Com, Total_TTC_Com,Total_TVA_Com, Moyen_Paiment_Com, Id_Cli)
	VALUES
	(@Ref_Com, @Date_Livraison_Com, GETDATE(), @Total_HT_Com, @Total_TTC_Com, @Total_TVA_Com, @Moyen_Paiment_Com, @Id_Cli)




	INSERT INTO Possede (Id_Com, Adresse_Facturation, Adresse_Livraison)
    VALUES
    ((SELECT TOP(1)Id_Com FROM Commande ORDER BY Id_Com DESC),@Adresse_Factuartion,@Adresse_Livraison)
    



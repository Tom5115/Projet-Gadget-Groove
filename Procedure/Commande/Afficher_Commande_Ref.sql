USE [Projet_POO]
GO
/****** Object:  StoredProcedure [dbo].[Afficher_Commande_Ref]    Script Date: 11/12/2023 20:02:45 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO


CREATE PROC Afficher_Commande_Ref

@Ref_Com varchar(50)

AS
	Select Ref_Com, Date_Livraison_Com, Date_Emission_Com, Moyen_Paiment_Com, Total_HT_Com, Total_TVA_Com, Total_TTC_Com 
	From Commande 
	JOIN Possede ON Commande.Id_Com = Possede.Id_Com 
	JOIN Contient ON Commande.Id_Com = Contient.Id_Com
	WHERE Commande.Ref_Com = @Ref_Com
USE [Projet_POO]
GO
/****** Object:  StoredProcedure [dbo].[Supprimer_Commande]    Script Date: 11/12/2023 20:27:35 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO


CREATE PROC Supprimer_Commande

@Ref_Com varchar (50)

AS
	DELETE FROM Possede WHERE Id_Com = (SELECT Id_Com FROM Commande WHERE Ref_Com = @Ref_Com)
	DELETE FROM Commande WHERE Ref_Com = @Ref_Com
	DELETE FROM Contient WHERE Id_Com = (SELECT Id_Com FROM Commande WHERE Ref_Com = @Ref_Com)
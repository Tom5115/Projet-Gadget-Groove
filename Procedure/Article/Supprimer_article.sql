USE [Projet_POO]
GO
/****** Object:  StoredProcedure [dbo].[Supprimer_Article]    Script Date: 11/12/2023 20:27:04 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

CREATE PROC Supprimer_Article
@Id_Art int 

AS
	DELETE FROM Article WHERE Id_Art = @Id_Art
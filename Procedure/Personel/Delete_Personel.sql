USE [Projet_POO]
GO
/****** Object:  StoredProcedure [dbo].[Delete_Personel]    Script Date: 11/12/2023 20:15:12 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

CREATE PROC Delete_Personel
@Id_Per int
AS 
	delete from Personel where Id_Per = @Id_Per
	delete from Individu where (SELECT Id_Ind FROM Personel WHERE Id_Per = @Id_Per) = Id_Ind
	

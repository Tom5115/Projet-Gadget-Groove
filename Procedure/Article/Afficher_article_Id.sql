use[Projet_POO]
GO

CREATE PROC Afficher_Article_Id
@Id_Art int 

AS
	SELECT * FROM Article WHERE Id_Art = @Id_Art
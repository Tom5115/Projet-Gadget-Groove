use[Projet_POO]
GO


CREATE PROC Creer_Article

@Prix_Art float,
@Nom_Art char(40),
@Couleur_Art char(40),
@Stock_Art int,
@Taux_TVA_Art float

AS
	INSERT INTO Article(Prix_Art,Nom_Art,Couleur_Art,Stock_Art,Taux_TVA_Art) VALUES
	(@Prix_Art,@Nom_Art,@Couleur_Art,@Stock_Art,@Taux_TVA_Art)

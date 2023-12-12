USE [Projet_POO]
GO


CREATE PROCEDURE Variations_Valeurs_Commerciales_Valeur

@TVA float, 
@MargeCommerciale float, 
@RemiseCommerciale float, 
@DemarqueInconnue float 
AS

SELECT Id_Art, Nom_Art, Prix_Art, Stock_Art,
(Prix_Art * Stock_Art) * (@TVA/100) AS ValeurTVA,
(Prix_Art * Stock_Art) * (@MargeCommerciale/100) AS ValeurMargeCommerciale,
(Prix_Art * Stock_Art) * (@RemiseCommerciale/100) AS ValeurRemiseCommerciale,
(Prix_Art * Stock_Art) * (@DemarqueInconnue/100) AS ValeurDemarqueInconnue
FROM Article ;


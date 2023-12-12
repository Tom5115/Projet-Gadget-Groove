USE [Projet_POO]
GO

CREATE PROC Variations_Valeurs_Commerciales 
AS
SELECT Id_Art, Nom_Art, Prix_Art, Stock_Art,

    (Prix_Art * Stock_Art) AS ValeurInitiale,

    (Prix_Art * Stock_Art * 1.01) AS TVA1,
    (Prix_Art * Stock_Art * 1.02) AS TVA2,
    (Prix_Art * Stock_Art * 1.03) AS TVA3,
    
    (Prix_Art * Stock_Art * 1.05) AS MargeCommerciale5,
    (Prix_Art * Stock_Art * 1.10) AS MargeCommerciale10,
    (Prix_Art * Stock_Art * 1.15) AS MargeCommerciale15,
    
    (Prix_Art * Stock_Art * 0.95) AS RemiseCommerciale5,
    (Prix_Art * Stock_Art * 0.94) AS RemiseCommerciale6,
    
    (Prix_Art * Stock_Art * 0.98) AS DemarqueInconnue2,
    (Prix_Art * Stock_Art * 0.97) AS DemarqueInconnue3,
    (Prix_Art * Stock_Art * 0.95) AS DemarqueInconnue5
FROM Article;

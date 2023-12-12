USE [Projet_POO]
GO


Create PROC Select_Client
AS
SELECT Id_Cli, Nom_Ind, Prenom_Ind, Date_Naissance_Ind, Mail_Ind, Adresse.Id_Adr, Ville_Adr, Rue_Adr, Code_Postal_Adr, Nom_Batiment_Adr, Etage_Adr FROM Individu 
JOIN Adresse ON Individu.Id_Adr = Adresse.ID_Adr
JOIN Client ON Individu.Id_Ind = Client.Id_Ind
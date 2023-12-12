USE [Projet_POO]
GO

DROP TABLE Personel;
DROP TABLE Possede;
DROP TABLE Contient;
DROP TABLE Commande;
DROP TABLE Client;
DROP TABLE Article;
DROP TABLE Individu;
DROP TABLE Adresse;


/*------------------------------------------------------------
        Script MySQL.
------------------------------------------------------------

------------------------------------------------------------
 Table: Adresse
*/------------------------------------------------------------

CREATE TABLE Adresse(
        Id_Adr           Int  IDENTITY(1,1) NOT NULL ,
        Ville_Adr        Varchar (50) NULL ,
        Rue_Adr          Varchar (50) NULL ,
        Code_Postal_Adr  Varchar (20) NULL ,
        Nom_Batiment_Adr Varchar (50) NULL ,
        Etage_Adr        Int NULL
	,CONSTRAINT Adresse_PK PRIMARY KEY (Id_Adr)
);


/*------------------------------------------------------------
# Table: Individu
*/------------------------------------------------------------

CREATE TABLE Individu(
        Id_Ind             Int  IDENTITY(1,1) NOT NULL ,
        Nom_Ind            Varchar (50) NULL ,
        Prenom_Ind         Varchar (50) NULL ,
        Date_Naissance_Ind Date NULL ,
		Mail_Ind		   Varchar (50) NULL,
        Id_Adr             Int NULL
	,CONSTRAINT Individu_PK PRIMARY KEY (Id_Ind)

	,CONSTRAINT Individu_Adresse_FK FOREIGN KEY (Id_Adr) REFERENCES Adresse(Id_Adr)
	,CONSTRAINT Individu_Adresse_AK UNIQUE (Id_Adr)
);


/*------------------------------------------------------------
# Table: Personel
*/------------------------------------------------------------

CREATE TABLE Personel(
        Id_Per            Int  IDENTITY(1,1) NOT NULL ,
        Date_Embauche_Per Date NULL ,
		Role_Per	      Varchar (50) NULL,
        Id_Superieur_Per  Int NULL ,
        Id_Ind            Int NULL
	,CONSTRAINT Personnel_PK PRIMARY KEY (Id_Per)

	,CONSTRAINT Personnel_Individu_FK FOREIGN KEY (Id_Ind) REFERENCES Individu(Id_Ind)
	,CONSTRAINT Personnel_Individu_AK UNIQUE (Id_Ind)
);


/*------------------------------------------------------------
# Table: Client
*/------------------------------------------------------------

CREATE TABLE Client(
        Id_Cli Int  IDENTITY(1,1) NOT NULL ,
        Id_Ind Int NULL
	,CONSTRAINT Client_PK PRIMARY KEY (Id_Cli)

	,CONSTRAINT Client_Individu_FK FOREIGN KEY (Id_Ind) REFERENCES Individu(Id_Ind)
	,CONSTRAINT Client_Individu_AK UNIQUE (Id_Ind)
);


/*------------------------------------------------------------
# Table: Commande
*/------------------------------------------------------------

CREATE TABLE Commande(
        Id_Com             Int  IDENTITY(1,1) NOT NULL ,
		Ref_Com            Varchar(50) NULL,
        Date_Livraison_Com Date NULL ,
        Date_Emission_Com  Date NULL ,
        Total_HT_Com       Float NULL ,
        Total_TTC_Com      Float NULL ,
        Total_TVA_Com      Float NULL ,
        Moyen_Paiment_Com  Varchar (50) NULL,
		Id_Cli             Int NOT NULL
	,CONSTRAINT Commande_PK PRIMARY KEY (Id_Com)
	,CONSTRAINT Commande_Client_FK FOREIGN KEY (Id_Cli) REFERENCES Client(Id_Cli)
);


/*------------------------------------------------------------
# Table: Article
*/------------------------------------------------------------

CREATE TABLE Article(
        Id_Art      Int  IDENTITY(1,1) NOT NULL ,
        Prix_Art    Float NULL ,
        Nom_Art     Varchar (50) NULL ,
        Couleur_Art Varchar (50) NULL ,
		Stock_Art Int NULL,
		Taux_TVA_Art Float NOT NULL
	,CONSTRAINT Article_PK PRIMARY KEY (Id_Art)
);


/*------------------------------------------------------------
# Table: Contient
*/------------------------------------------------------------

CREATE TABLE Contient(
        Id_Art           Int NOT NULL ,
        Id_Com           Int NOT NULL ,
        Quantite_Article Int NULL
	,CONSTRAINT Contient_PK PRIMARY KEY (Id_Art,Id_Com)

	,CONSTRAINT Contient_Article_FK FOREIGN KEY (Id_Art) REFERENCES Article(Id_Art)
	,CONSTRAINT Contient_Commande0_FK FOREIGN KEY (Id_Com) REFERENCES Commande(Id_Com)
);


/*------------------------------------------------------------
# Table: Possède
*/------------------------------------------------------------

CREATE TABLE Possede(
        Id_Com            Int NOT NULL ,
        Adresse_Facturation  Int NOT NULL ,
        Adresse_Livraison INT NOT NULL 
    
	,CONSTRAINT Possede_PK PRIMARY KEY (Id_Com,Adresse_Facturation)

	,CONSTRAINT Possede_Commande_FK FOREIGN KEY (Id_Com) REFERENCES Commande(Id_Com)
	,CONSTRAINT Possede_Adresse0_FK FOREIGN KEY (Adresse_Facturation) REFERENCES Adresse(Id_Adr)
);
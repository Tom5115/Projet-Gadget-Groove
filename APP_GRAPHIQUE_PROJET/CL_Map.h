//CL_Map.H*********************************************************************************
#pragma once

namespace NS_Comp_Mappage
{
	ref class CL_Map_Client {
	private:
		System::String^ sSql;
		int Id;
		System::String^ Nom;
		System::String^ Prenom;
		System::DateTime^ Date_N;
		System::String^ Mail;

		System::String^ Ville;
		System::String^ Rue;
		System::String^ Code_Postal;
		System::String^ Nom_Bat;
		int Etage;


	public:
		CL_Map_Client();
		void setId(int);
		void setNom(System::String^);	
		void setPrenom(System::String^);
		void setDate_N(System::DateTime^);
		void setMail(System::String^);

		void setVille(System::String^);
		void setRue(System::String^);
		void setCode_Postal(System::String^);
		void setNom_Bat(System::String^);
		void setEtage(int);

		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::DateTime^ getDate_N(void);
		System::String^ getMail(void);

		System::String^ getVille(void);
		System::String^ getRue(void);
		System::String^ getCode_Postal(void);
		System::String^ getNom_Bat(void);
		int getEtage(void);


		System::String^ Select_Client_Id(void);
		System::String^ Select_Client_Nom(void);
		System::String^ Select_Client_Prenom(void);
		System::String^ Select_Client_Date_N(void);
		System::String^ Select_Client_Mail(void);

		System::String^ Select_Client_Ville(void);
		System::String^ Select_Client_Rue(void);
		System::String^ Select_Client_Code_Postal(void);
		System::String^ Select_Client_Nom_Bat(void);
		System::String^ Select_Client_Etage(void);

		System::String^ Select_Client(void);
		System::String^ Insert_Client(void);
		System::String^ Delete_Client(void);
		System::String^ Update_Client(void);
	};

	ref class CL_Map_Personel {
	private:
		int Id;
		System::String^ Nom;
		System::String^ Prenom;
		System::DateTime^ Date_N;
		System::String^ Mail;

		System::String^ Ville;
		System::String^ Rue;
		System::String^ Code_Postal;
		System::String^ Nom_Bat;
		int Etage;

		System::DateTime^ Date_E;
		int Sup_Id;
		System::String^ Role;

	public:
		CL_Map_Personel();
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDate_N(System::DateTime^);
		void setMail(System::String^);

		void setVille(System::String^);
		void setRue(System::String^);
		void setCode_Postal(System::String^);
		void setNom_Bat(System::String^);
		void setEtage(int);

		void setSup_Id(int);
		void setRole(System::String^);
		void setDate_E(System::DateTime^);


		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::DateTime^ getDate_N(void);
		System::String^ getMail(void);

		System::String^ getVille(void);
		System::String^ getRue(void);
		System::String^ getCode_Postal(void);
		System::String^ getNom_Bat(void);
		int getEtage(void);

		int getSup_Id(void);
		System::String^ getRole(void);
		System::DateTime^ getDate_E(void);



		System::String^ Select_Personel_Id(void);
		System::String^ Select_Personel_Nom(void);
		System::String^ Select_Personel_Prenom(void);
		System::String^ Select_Personel_Date_N(void);
		System::String^ Select_Personel_Mail(void);

		System::String^ Select_Personel_Ville(void);
		System::String^ Select_Personel_Rue(void);
		System::String^ Select_Personel_Code_Postal(void);
		System::String^ Select_Personel_Nom_Bat(void);
		System::String^ Select_Personel_Etage(void);

		System::String^ Select_Personel_Sup_Id(void);
		System::String^ Select_Personel_Role(void);
		System::String^ Select_Personel_Date_E(void);

		System::String^ Select_Personel(void);
		System::String^ Insert_Personel(void);
		System::String^ Delete_Personel(void);
		System::String^ Update_Personel(void);
	};

	ref class CL_Map_Article {
	private:
		int Id;
		float Prix;
		System::String^ Nom;
		System::String^ Couleur;
		int Stock;
		float Taux_TVA;

	public:
		CL_Map_Article();
		void setId(int);
		void setPrix(float);
		void setNom(System::String^);
		void setCouleur(System::String^);
		void setStock(int);
		void setTaux_TVA(float);

		System::String^ Select_Article_Id(void);
		System::String^ Select_Article(void);
		System::String^ Insert_Article(void);
		System::String^ Delete_Article(void);
		System::String^ Update_Article(void);
	};

	ref class CL_Map_Commande {
	private:
		System::String^ Id;
		int Id_Cli;
		System::String^ Nom;
		System::String^ Prenom;
		System::DateTime^ Date_Liv;
		System::DateTime^ Date_Emi;
		float Total_HT;
		float Total_TTC;
		float Total_TVA;
		System::String^ Moyen_Paiment;
		int Adresse_Liv;
		int Adresse_Fac;

	public:
		CL_Map_Commande();
		void setId(System::String^);
		void setId_Cli(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDate_Liv(System::DateTime^);
		void setDate_Emi(System::DateTime^);
		void setTotal_HT(float);
		void setTotal_TTC(float);
		void setTotal_TVA(float);
		void setMoyen_Paiment(System::String^);
		void setAdresse_Liv(int);
		void setAdresse_Fac(int);

		System::String^ Select_Commande(void);
		System::String^ Select_Commande_Id(void);
		System::String^ Insert_Commande(void);
		System::String^ Delete_Commande(void);
		System::String^ Update_Commande(void);
		System::String^ Update_Total_Commande(void);
	};
	ref class CL_Map_Contient {
	private:
		int Id_Art;
		System::String^ Id_Com;
		int Quantite_Article;
	public:
		CL_Map_Contient();
		void setId_Art(int);
		void setId_Com(System::String^);
		void setQuantite_Article(int);

		System::String^ Insert_Contient(void);
		System::String^ Delete_Contient(void);
		System::String^ Update_Contient(void);
	};

	ref class CL_Map_Stat
	{
	private:
		System::String^ sSql;
		System::DateTime^ Date_Fac;
		float Total;
		int Id_Client;
		int Id_Art;
		int Stock_Art;
		int Mois;

		float TVA;
		float MargeCommerciale;
		float RemiseCommerciale;
		float DemarqueInconnue;

	public:
		CL_Map_Stat();
		void setTotal(float);
		void setId_Client(int);
		void setId_Art(int);
		void setDate_Fac(System::DateTime^);
		void setStock_Art(int);
		void setMois(int);

		void setTVA(float);
		void setMargeCommerciale(float);
		void setRemiseCommerciale(float);
		void setDemarqueInconnue(float);


		System::String^ Calcul_Panier_Moyen(void);
		System::String^ Calcul_Chiffre_Affaire_Mois(void);
		System::String^ Produit_Reaprovisionnement(void);
		System::String^ Total_Achat_Client(void);
		System::String^ Article_Plus_Vendu(void);
		System::String^ Article_Moins_Vendu(void);
		System::String^ Valeur_Commercial_Stock(void);
		System::String^ Valeur_Achat_Stock(void);

		System::String^ Variations_Valeurs_Commerciales(void);
		System::String^ Variations_Valeurs_Commerciales_Valeur(void);

		System::String^ Chek_anniv(void);
		System::String^ Chek_anniv_15(void);
	};
}


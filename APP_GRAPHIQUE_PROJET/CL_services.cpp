//CL_service.CPP***************************************************************************************

#include "CL_services.h"

//--------------------------------------------------Service Client------------------------------------------


NS_Comp_Svc::CLservices_Client::CLservices_Client(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapp_Client = gcnew NS_Comp_Mappage::CL_Map_Client();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionner_Client(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp_Client->Select_Client();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionner_Client_Ind(System::String^ dataTableName, int Id)
{
	System::String^ sql;
	this->oMapp_Client->setId(Id);
	sql = this->oMapp_Client->Select_Client_Id();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionner_Client_Nom(System::String^ dataTableName, System::String^ Nom)
{
	System::String^ sql;
	this->oMapp_Client->setNom(Nom);
	sql = this->oMapp_Client->Select_Client_Nom();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionner_Client_Prenom(System::String^ dataTableName, System::String^ Prenom)
{
	System::String^ sql;
	this->oMapp_Client->setPrenom(Prenom);
	sql = this->oMapp_Client->Select_Client_Prenom();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionner_Client_Date_N(System::String^ dataTableName, System::DateTime^ Date_N)
{
	System::String^ sql;
	this->oMapp_Client->setDate_N(Date_N);
	sql = this->oMapp_Client->Select_Client_Date_N();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionner_Client_Mail(System::String^ dataTableName, System::String^ Mail)
{
	System::String^ sql;
	this->oMapp_Client->setMail(Mail);
	sql = this->oMapp_Client->Select_Client_Mail();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionner_Client_Ville(System::String^ dataTableName, System::String^ Ville)
{
	System::String^ sql;
	this->oMapp_Client->setVille(Ville);
	sql = this->oMapp_Client->Select_Client_Ville();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionner_Client_Rue(System::String^ dataTableName, System::String^ Rue)
{
	System::String^ sql;
	this->oMapp_Client->setRue(Rue);
	sql = this->oMapp_Client->Select_Client_Rue();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionner_Client_Code_Postal(System::String^ dataTableName, System::String^ Code_Postal)
{
	System::String^ sql;
	this->oMapp_Client->setCode_Postal(Code_Postal);
	sql = this->oMapp_Client->Select_Client_Code_Postal();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionner_Client_Nom_Bat(System::String^ dataTableName, System::String^ Nom_Bat)
{
	System::String^ sql;
	this->oMapp_Client->setNom_Bat(Nom_Bat);
	sql = this->oMapp_Client->Select_Client_Nom_Bat();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionner_Client_Etage(System::String^ dataTableName, int Etage)
{
	System::String^ sql;
	this->oMapp_Client->setEtage(Etage);
	sql = this->oMapp_Client->Select_Client_Etage();
	return this->oCad->getRows(sql, dataTableName);

}


void NS_Comp_Svc::CLservices_Client::ajouter_Client(System::String^ Nom, System::String^ Prenom, System::String^ Mail, System::DateTime^ Date_N, System::String^ Ville, System::String^ Rue, System::String^ Code_Postal, System::String^ Nom_Bat, int Etage) {

	System::String^ sql;

	this->oMapp_Client->setNom(Nom);
	this->oMapp_Client->setPrenom(Prenom);
	this->oMapp_Client->setMail(Mail);
	this->oMapp_Client->setDate_N(Date_N);
	this->oMapp_Client->setVille(Ville);
	this->oMapp_Client->setRue(Rue);
	this->oMapp_Client->setCode_Postal(Code_Postal);
	this->oMapp_Client->setNom_Bat(Nom_Bat);
	this->oMapp_Client->setEtage(Etage);

	sql = this->oMapp_Client->Insert_Client();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Client::supprimer_Client(int Id) {

	System::String^ sql;

	this->oMapp_Client->setId(Id);
	sql = this->oMapp_Client->Delete_Client();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Client::modifier_Client(int Id, System::String^ Nom, System::String^ Prenom, System::String^ Mail, System::DateTime^ Date_N, System::String^ Ville, System::String^ Rue, System::String^ Code_Postal, System::String^ Nom_Bat, int Etage) {

	System::String^ sql;
	this->oMapp_Client->setId(Id);
	this->oMapp_Client->setNom(Nom);
	this->oMapp_Client->setPrenom(Prenom);
	this->oMapp_Client->setMail(Mail);
	this->oMapp_Client->setDate_N(Date_N);
	this->oMapp_Client->setVille(Ville);
	this->oMapp_Client->setRue(Rue);
	this->oMapp_Client->setCode_Postal(Code_Postal);
	this->oMapp_Client->setNom_Bat(Nom_Bat);
	this->oMapp_Client->setEtage(Etage);

	sql = this->oMapp_Client->Update_Client();
	this->oCad->actionRows(sql);
}



//--------------------------------------------------Service Personel------------------------------------------

NS_Comp_Svc::CLservices_Personel::CLservices_Personel(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapp_Personel = gcnew NS_Comp_Mappage::CL_Map_Personel();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp_Personel->Select_Personel();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Ind(System::String^ dataTableName, int Id)
{
	System::String^ sql;
	this->oMapp_Personel->setId(Id);
	sql = this->oMapp_Personel->Select_Personel_Id();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Nom(System::String^ dataTableName, System::String^ Nom)
{
	System::String^ sql;
	this->oMapp_Personel->setNom(Nom);
	sql = this->oMapp_Personel->Select_Personel_Nom();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Prenom(System::String^ dataTableName, System::String^ Prenom)
{
	System::String^ sql;
	this->oMapp_Personel->setPrenom(Prenom);
	sql = this->oMapp_Personel->Select_Personel_Prenom();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Date_N(System::String^ dataTableName, System::DateTime^ Date_N)
{
	System::String^ sql;
	this->oMapp_Personel->setDate_N(Date_N);
	sql = this->oMapp_Personel->Select_Personel_Date_N();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Mail(System::String^ dataTableName, System::String^ Mail)
{
	System::String^ sql;
	this->oMapp_Personel->setMail(Mail);
	sql = this->oMapp_Personel->Select_Personel_Mail();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Ville(System::String^ dataTableName, System::String^ Ville)
{
	System::String^ sql;
	this->oMapp_Personel->setVille(Ville);
	sql = this->oMapp_Personel->Select_Personel_Ville();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Rue(System::String^ dataTableName, System::String^ Rue)
{
	System::String^ sql;
	this->oMapp_Personel->setRue(Rue);
	sql = this->oMapp_Personel->Select_Personel_Rue();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Code_Postal(System::String^ dataTableName, System::String^ Code_Postal)
{
	System::String^ sql;
	this->oMapp_Personel->setCode_Postal(Code_Postal);
	sql = this->oMapp_Personel->Select_Personel_Code_Postal();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Nom_Bat(System::String^ dataTableName, System::String^ Nom_Bat)
{
	System::String^ sql;
	this->oMapp_Personel->setNom_Bat(Nom_Bat);
	sql = this->oMapp_Personel->Select_Personel_Nom_Bat();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Etage(System::String^ dataTableName, int Etage)
{
	System::String^ sql;
	this->oMapp_Personel->setEtage(Etage);
	sql = this->oMapp_Personel->Select_Personel_Etage();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Date_E(System::String^ dataTableName, System::DateTime^ Date_E)
{
	System::String^ sql;
	this->oMapp_Personel->setDate_E(Date_E);
	sql = this->oMapp_Personel->Select_Personel_Date_E();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Role(System::String^ dataTableName, System::String^ Role)
{
	System::String^ sql;
	this->oMapp_Personel->setRole(Role);
	sql = this->oMapp_Personel->Select_Personel_Role();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personel::selectionner_Personel_Sup_Id(System::String^ dataTableName, int Sup_Id)
{
	System::String^ sql;
	this->oMapp_Personel->setSup_Id(Sup_Id);
	sql = this->oMapp_Personel->Select_Personel_Sup_Id();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices_Personel::ajouter_Personel(System::String^ Nom, System::String^ Prenom, System::String^ Mail, System::DateTime^ Date_N, System::String^ Ville, System::String^ Rue, System::String^ Code_Postal, System::String^ Nom_Bat, int Etage, System::DateTime^ Date_E, System::String^ Role, int Sup_Id) {

	System::String^ sql;

	this->oMapp_Personel->setNom(Nom);
	this->oMapp_Personel->setPrenom(Prenom);
	this->oMapp_Personel->setMail(Mail);
	this->oMapp_Personel->setDate_N(Date_N);
	this->oMapp_Personel->setVille(Ville);
	this->oMapp_Personel->setRue(Rue);
	this->oMapp_Personel->setCode_Postal(Code_Postal);
	this->oMapp_Personel->setNom_Bat(Nom_Bat);
	this->oMapp_Personel->setEtage(Etage);
	this->oMapp_Personel->setDate_E(Date_E);
	this->oMapp_Personel->setRole(Role);
	this->oMapp_Personel->setSup_Id(Sup_Id);
	sql = this->oMapp_Personel->Insert_Personel();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Personel::supprimer_Personel(int Id) {

	System::String^ sql;

	this->oMapp_Personel->setId(Id);
	sql = this->oMapp_Personel->Delete_Personel();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Personel::modifier_Personel(int Id, System::String^ Nom, System::String^ Prenom, System::String^ Mail, System::DateTime^ Date_N, System::String^ Ville, System::String^ Rue, System::String^ Code_Postal, System::String^ Nom_Bat, int Etage, System::DateTime^ Date_E, System::String^ Role, int Sup_Id) {

	System::String^ sql;
	this->oMapp_Personel->setId(Id);
	this->oMapp_Personel->setNom(Nom);
	this->oMapp_Personel->setPrenom(Prenom);
	this->oMapp_Personel->setMail(Mail);
	this->oMapp_Personel->setDate_N(Date_N);
	this->oMapp_Personel->setVille(Ville);
	this->oMapp_Personel->setRue(Rue);
	this->oMapp_Personel->setCode_Postal(Code_Postal);
	this->oMapp_Personel->setNom_Bat(Nom_Bat);
	this->oMapp_Personel->setEtage(Etage);
	this->oMapp_Personel->setSup_Id(Sup_Id);
	this->oMapp_Personel->setDate_E(Date_E);
	this->oMapp_Personel->setRole(Role);

	sql = this->oMapp_Personel->Update_Personel();
	this->oCad->actionRows(sql);
}

//--------------------------------------------------Service Article------------------------------------------

NS_Comp_Svc::CLservices_Article::CLservices_Article(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapp_Article = gcnew NS_Comp_Mappage::CL_Map_Article();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices_Article::selectionner_Article(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp_Article->Select_Article();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Article::selectionner_Article_Id(System::String^ dataTableName, int Id)
{
	System::String^ sql;
	this->oMapp_Article->setId(Id);
	sql = this->oMapp_Article->Select_Article_Id();
	return this->oCad->getRows(sql, dataTableName);
}


void NS_Comp_Svc::CLservices_Article::ajouter_Article(float Prix, System::String^ Nom, System::String^ Couleur, int Stock, float Taux_TVA) {

	System::String^ sql;
	this->oMapp_Article->setPrix(Prix);
	this->oMapp_Article->setNom(Nom);
	this->oMapp_Article->setCouleur(Couleur);
	this->oMapp_Article->setStock(Stock);
	this->oMapp_Article->setTaux_TVA(Taux_TVA);
	sql = this->oMapp_Article->Insert_Article();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Article::supprimer_Article(int Id) {

	System::String^ sql;
	this->oMapp_Article->setId(Id);
	sql = this->oMapp_Article->Delete_Article();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Article::modifier_Article(int Id, float Prix, System::String^ Nom, System::String^ Couleur, int Stock, float Taux_TVA) {

	System::String^ sql;
	this->oMapp_Article->setId(Id);
	this->oMapp_Article->setPrix(Prix);
	this->oMapp_Article->setNom(Nom);
	this->oMapp_Article->setCouleur(Couleur);
	this->oMapp_Article->setStock(Stock);
	this->oMapp_Article->setTaux_TVA(Taux_TVA);
	sql = this->oMapp_Article->Update_Article();
	this->oCad->actionRows(sql);
}


//--------------------------------------------------Service Commande------------------------------------------

NS_Comp_Svc::CLservices_Commande::CLservices_Commande(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapp_Commande = gcnew NS_Comp_Mappage::CL_Map_Commande();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices_Commande::selectionner_Commande(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp_Commande->Select_Commande();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Commande::selectionner_Commande_Id(System::String^ dataTableName, System::String^ Id)
{
	System::String^ sql;
	this->oMapp_Commande->setId(Id);
	sql = this->oMapp_Commande->Select_Commande_Id();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices_Commande::ajouter_Commande(System::DateTime^ Date_Liv, float Total_HT, float Total_TTC, float Total_TVA, System::String^ Moyen_Paiment, int Id_Cli, int Adresse_Liv, int Adresse_Fac) {

	System::String^ sql;
	this->oMapp_Commande->setDate_Liv(Date_Liv);
	this->oMapp_Commande->setTotal_HT(Total_HT);
	this->oMapp_Commande->setTotal_TTC(Total_TTC);
	this->oMapp_Commande->setTotal_TVA(Total_TVA);
	this->oMapp_Commande->setMoyen_Paiment(Moyen_Paiment);
	this->oMapp_Commande->setId_Cli(Id_Cli);
	this->oMapp_Commande->setAdresse_Liv(Adresse_Liv);
	this->oMapp_Commande->setAdresse_Fac(Adresse_Fac);
	sql = this->oMapp_Commande->Insert_Commande();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Commande::supprimer_Commande(System::String^ Id) {

	System::String^ sql;
	this->oMapp_Commande->setId(Id);
	sql = this->oMapp_Commande->Delete_Commande();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Commande::modifier_Commande(System::String^ Id, System::DateTime^ Date_Liv, System::DateTime^ Date_Emi, float Total_HT, float Total_TTC, float Total_TVA, System::String^ Moyen_Paiment, int Id_Cli, int Adresse_Liv, int Adresse_Fac) {

	System::String^ sql;
	this->oMapp_Commande->setId(Id);
	this->oMapp_Commande->setDate_Liv(Date_Liv);
	this->oMapp_Commande->setDate_Emi(Date_Emi);
	this->oMapp_Commande->setTotal_HT(Total_HT);
	this->oMapp_Commande->setTotal_TTC(Total_TTC);
	this->oMapp_Commande->setTotal_TVA(Total_TVA);
	this->oMapp_Commande->setMoyen_Paiment(Moyen_Paiment);
	this->oMapp_Commande->setId_Cli(Id_Cli);
	this->oMapp_Commande->setAdresse_Liv(Adresse_Liv);
	this->oMapp_Commande->setAdresse_Fac(Adresse_Fac);
	sql = this->oMapp_Commande->Update_Commande();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Commande::modifier_Total_Commande(System::String^ Id) {

	System::String^ sql;
	this->oMapp_Commande->setId(Id);
	sql = this->oMapp_Commande->Update_Total_Commande();
	this->oCad->actionRows(sql);
}

//--------------------------------------------------Service Contient------------------------------------------

NS_Comp_Svc::CLservices_Contient::CLservices_Contient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapp_Contient = gcnew NS_Comp_Mappage::CL_Map_Contient();
}

void NS_Comp_Svc::CLservices_Contient::ajouter_Contient(int Id_Art, System::String^ Id_Com, int Quantite_Article) {

	System::String^ sql;
	this->oMapp_Contient->setId_Art(Id_Art);
	this->oMapp_Contient->setId_Com(Id_Com);
	this->oMapp_Contient->setQuantite_Article(Quantite_Article);

	sql = this->oMapp_Contient->Insert_Contient();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Contient::supprimer_Contient(int Id_Art, System::String^ Id_Com) {

	System::String^ sql;
	this->oMapp_Contient->setId_Art(Id_Art);
	this->oMapp_Contient->setId_Com(Id_Com);

	sql = this->oMapp_Contient->Delete_Contient();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Contient::modifier_Contient(int Id_Art, System::String^ Id_Com, int Quantite_Article) {

	System::String^ sql;
	this->oMapp_Contient->setId_Art(Id_Art);
	this->oMapp_Contient->setId_Com(Id_Com);
	this->oMapp_Contient->setQuantite_Article(Quantite_Article);

	sql = this->oMapp_Contient->Update_Contient();
	this->oCad->actionRows(sql);
}

//--------------------------------------------------Service Statistique------------------------------------------

NS_Comp_Svc::CLservices_Stat::CLservices_Stat(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapp_Stat = gcnew NS_Comp_Mappage::CL_Map_Stat();
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Stat::Calcul_Panier_Moyen(System::String^ dataTableName) {

	System::String^ sql;

	sql = this->oMapp_Stat->Calcul_Panier_Moyen();
	this->oCad->actionRows(sql);
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Stat::Calcul_Chiffre_Affaire_Mois(System::String^ dataTableName, int Mois) {

	System::String^ sql;
	this->oMapp_Stat->setMois(Mois);

	sql = this->oMapp_Stat->Calcul_Chiffre_Affaire_Mois();
	this->oCad->actionRows(sql);
	return this->oCad->getRows(sql, dataTableName);
}
//---------------------------------------------------------------------------------------------------------------------
System::Data::DataSet^ NS_Comp_Svc::CLservices_Stat::Produit_Reaprovisionnement(System::String^ dataTableName) {

	System::String^ sql;

	sql = this->oMapp_Stat->Produit_Reaprovisionnement();
	this->oCad->actionRows(sql);
	return this->oCad->getRows(sql, dataTableName);

}
//---------------------------------------------------------------------------------------------------------------------

System::Data::DataSet^ NS_Comp_Svc::CLservices_Stat::Total_Achat_Client(System::String^ dataTableName, int Id_Client) {

	System::String^ sql;
	this->oMapp_Stat->setId_Client(Id_Client);

	sql = this->oMapp_Stat->Total_Achat_Client();
	this->oCad->actionRows(sql);
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Stat::Article_Plus_Vendu(System::String^ dataTableName) {

	System::String^ sql;

	sql = this->oMapp_Stat->Article_Plus_Vendu();
	this->oCad->actionRows(sql);
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Stat::Article_Moins_Vendu(System::String^ dataTableName) {

	System::String^ sql;

	sql = this->oMapp_Stat->Article_Moins_Vendu();
	this->oCad->actionRows(sql);
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Stat::Valeur_Commercial_Stock(System::String^ dataTableName) {

	System::String^ sql;

	sql = this->oMapp_Stat->Valeur_Commercial_Stock();
	this->oCad->actionRows(sql);
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Stat::Valeur_Achat_Stock(System::String^ dataTableName) {

	System::String^ sql;

	sql = this->oMapp_Stat->Valeur_Achat_Stock();
	this->oCad->actionRows(sql);
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Stat::Variations_Valeurs_Commerciales(System::String^ dataTableName) {

	System::String^ sql;

	sql = this->oMapp_Stat->Variations_Valeurs_Commerciales();
	this->oCad->actionRows(sql);
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Stat::Variations_Valeurs_Commerciales_Valeur(System::String^ dataTableName, float TVA, float MargeCommerciale, float RemiseCommerciale, float DemarqueInconnue) {

	System::String^ sql;
	this->oMapp_Stat->setTVA(TVA);
	this->oMapp_Stat->setMargeCommerciale(MargeCommerciale);
	this->oMapp_Stat->setRemiseCommerciale(RemiseCommerciale);
	this->oMapp_Stat->setDemarqueInconnue(DemarqueInconnue);

	sql = this->oMapp_Stat->Variations_Valeurs_Commerciales_Valeur();
	this->oCad->actionRows(sql);
	return this->oCad->getRows(sql, dataTableName);

}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Stat::Chek_anniv(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMapp_Stat->Chek_anniv();
	this->oCad->actionRows(sql);
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservices_Stat::Chek_anniv_15(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMapp_Stat->Chek_anniv_15();
	this->oCad->actionRows(sql);
	return this->oCad->getRows(sql, dataTableName);
}

//CL_Map.CPP*****************************************************************************************

#include "CL_Map.h"

//---------------------------------Mappage de la classe Client--------------------------------------------------------

NS_Comp_Mappage::CL_Map_Client::CL_Map_Client() {}
void NS_Comp_Mappage::CL_Map_Client::setId(int Id) { this->Id = Id; }
void NS_Comp_Mappage::CL_Map_Client::setNom(System::String^ Nom) { this->Nom = Nom; }
void NS_Comp_Mappage::CL_Map_Client::setPrenom(System::String^ Prenom) { this->Prenom = Prenom; }
void NS_Comp_Mappage::CL_Map_Client::setDate_N(System::DateTime^ Date_N) { this->Date_N = Date_N; }
void NS_Comp_Mappage::CL_Map_Client::setMail(System::String^ Mail) { this->Mail = Mail; }

void NS_Comp_Mappage::CL_Map_Client::setVille(System::String^ Ville) { this->Ville = Ville; }
void NS_Comp_Mappage::CL_Map_Client::setRue(System::String^ Rue) { this->Rue = Rue; }
void NS_Comp_Mappage::CL_Map_Client::setCode_Postal(System::String^ Code_Postal) { this->Code_Postal = Code_Postal; }
void NS_Comp_Mappage::CL_Map_Client::setNom_Bat(System::String^ Nom_Bat) { this->Nom_Bat = Nom_Bat; }
void NS_Comp_Mappage::CL_Map_Client::setEtage(int Etage) { this->Etage = Etage; }

int NS_Comp_Mappage::CL_Map_Client::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CL_Map_Client::getNom(void) { return this->Nom; }
System::String^ NS_Comp_Mappage::CL_Map_Client::getPrenom(void) { return this->Prenom; }
System::DateTime^ NS_Comp_Mappage::CL_Map_Client::getDate_N(void) { return this->Date_N; }
System::String^ NS_Comp_Mappage::CL_Map_Client::getMail(void) { return this->Mail; }

System::String^ NS_Comp_Mappage::CL_Map_Client::getVille(void) { return this->Ville; }
System::String^ NS_Comp_Mappage::CL_Map_Client::getRue(void) { return this->Rue; }
System::String^ NS_Comp_Mappage::CL_Map_Client::getCode_Postal(void) { return this->Code_Postal; }
System::String^ NS_Comp_Mappage::CL_Map_Client::getNom_Bat(void) { return this->Nom_Bat; }
int NS_Comp_Mappage::CL_Map_Client::getEtage(void) { return this->Etage; }



System::String^ NS_Comp_Mappage::CL_Map_Client::Select_Client_Id(void) { return "EXECUTE Select_Client_Ind " + this->Id + " ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Client::Select_Client_Nom(void) { return "EXECUTE Select_Client_Nom '" + this->Nom + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Client::Select_Client_Prenom(void) { return "EXECUTE Select_Client_Prenom '" + this->Prenom + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Client::Select_Client_Date_N(void) { return "EXECUTE Select_Client_Date_Naissance '" + this->Date_N + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Client::Select_Client_Mail(void) { return "EXECUTE Select_Client_Mail '" + this->Mail + "' ;"; }


System::String^ NS_Comp_Mappage::CL_Map_Client::Select_Client_Ville(void) { return "EXECUTE Select_Client_Ville '" + this->Ville + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Client::Select_Client_Rue(void) { return "EXECUTE Select_Client_Rue '" + this->Rue + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Client::Select_Client_Code_Postal(void) { return "EXECUTE Select_Client_Code_Postal '" + this->Code_Postal + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Client::Select_Client_Nom_Bat(void) { return "EXECUTE Select_Client_Nom_Batiment '" + this->Nom_Bat + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Client::Select_Client_Etage(void) { return "EXECUTE Select_Client_Etage " + this->Etage + " ;"; }

System::String^ NS_Comp_Mappage::CL_Map_Client::Select_Client(void) { return "EXECUTE Select_Client"; }

System::String^ NS_Comp_Mappage::CL_Map_Client::Insert_Client(void) { return "EXECUTE Creer_Client '" + this->Nom + "','" + this->Prenom + "','" + this->Mail + "','" + this->Date_N + "','" + this->Ville + "','" + this->Rue + "','" + this->Code_Postal + "','" + this->Nom_Bat + "'," + this->Etage + " ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Client::Delete_Client(void) { return "EXECUTE Delete_Client " + this->Id + " ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Client::Update_Client(void) { return "EXECUTE Update_Client " + this->Id + ",'" + this->Nom + "','" + this->Prenom + "','" + this->Mail + "','" + this->Date_N + "','" + this->Ville + "','" + this->Rue + "','" + this->Code_Postal + "','" + this->Nom_Bat + "'," + this->Etage + " ;"; }

//---------------------------------Mappage de la classe Personnel--------------------------------------------------------

NS_Comp_Mappage::CL_Map_Personel::CL_Map_Personel() {}
void NS_Comp_Mappage::CL_Map_Personel::setId(int Id) { this->Id = Id; }
void NS_Comp_Mappage::CL_Map_Personel::setNom(System::String^ Nom) { this->Nom = Nom; }
void NS_Comp_Mappage::CL_Map_Personel::setPrenom(System::String^ Prenom) { this->Prenom = Prenom; }
void NS_Comp_Mappage::CL_Map_Personel::setDate_N(System::DateTime^ Date_N) { this->Date_N = Date_N; }
void NS_Comp_Mappage::CL_Map_Personel::setMail(System::String^ Mail) { this->Mail = Mail; }

void NS_Comp_Mappage::CL_Map_Personel::setVille(System::String^ Ville) { this->Ville = Ville; }
void NS_Comp_Mappage::CL_Map_Personel::setRue(System::String^ Rue) { this->Rue = Rue; }
void NS_Comp_Mappage::CL_Map_Personel::setCode_Postal(System::String^ Code_Postal) { this->Code_Postal = Code_Postal; }
void NS_Comp_Mappage::CL_Map_Personel::setNom_Bat(System::String^ Nom_Bat) { this->Nom_Bat = Nom_Bat; }
void NS_Comp_Mappage::CL_Map_Personel::setEtage(int Etage) { this->Etage = Etage; }

void NS_Comp_Mappage::CL_Map_Personel::setDate_E(System::DateTime^ Date_E) { this->Date_E = Date_E; }
void NS_Comp_Mappage::CL_Map_Personel::setSup_Id(int Id) { this->Sup_Id = Sup_Id; }
void NS_Comp_Mappage::CL_Map_Personel::setRole(System::String^ Role) { this->Role = Role; }

System::DateTime^ NS_Comp_Mappage::CL_Map_Personel::getDate_E(void) { return this->Date_E; }
int NS_Comp_Mappage::CL_Map_Personel::getSup_Id(void) { return this->Sup_Id; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::getRole(void) { return this->Role; }

int NS_Comp_Mappage::CL_Map_Personel::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::getNom(void) { return this->Nom; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::getPrenom(void) { return this->Prenom; }
System::DateTime^ NS_Comp_Mappage::CL_Map_Personel::getDate_N(void) { return this->Date_N; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::getMail(void) { return this->Mail; }

System::String^ NS_Comp_Mappage::CL_Map_Personel::getVille(void) { return this->Ville; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::getRue(void) { return this->Rue; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::getCode_Postal(void) { return this->Code_Postal; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::getNom_Bat(void) { return this->Nom_Bat; }
int NS_Comp_Mappage::CL_Map_Personel::getEtage(void) { return this->Etage; }


System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Id(void) { return "EXECUTE Select_Personel_Ind " + this->Id + " ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Nom(void) { return "EXECUTE Select_Personel_Nom '" + this->Nom + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Prenom(void) { return "EXECUTE Select_Personel_Prenom '" + this->Prenom + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Date_N(void) { return "EXECUTE Select_Personel_Date_Naissance '" + this->Date_N + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Mail(void) { return "EXECUTE Select_Personel_Mail '" + this->Mail + "' ;"; }


System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Ville(void) { return "EXECUTE Select_Personel_Ville '" + this->Ville + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Rue(void) { return "EXECUTE Select_Personel_Rue '" + this->Rue + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Code_Postal(void) { return "EXECUTE Select_Personel_Code_Postal '" + this->Code_Postal + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Nom_Bat(void) { return "EXECUTE Select_Personel_Nom_Batiment '" + this->Nom_Bat + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Etage(void) { return "EXECUTE Select_Personel_Etage " + this->Etage + " ;"; }

System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Sup_Id(void) { return "EXECUTE Select_Personel_Id_Superieur " + this->Sup_Id + " ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Date_E(void) { return "EXECUTE Select_Personel_Date_Embauche '" + this->Date_E + "' ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel_Role(void) { return "EXECUTE Select_Personel_Role '" + this->Role + "' ;"; }

System::String^ NS_Comp_Mappage::CL_Map_Personel::Select_Personel(void) { return "EXECUTE Select_Personel ;"; }

System::String^ NS_Comp_Mappage::CL_Map_Personel::Insert_Personel(void) { return "EXECUTE Creer_Personel '" + this->Nom + "','" + this->Prenom + "','" + this->Mail + "','" + this->Date_N + "','" + this->Ville + "','" + this->Rue + "','" + this->Code_Postal + "','" + this->Nom_Bat + "'," + this->Etage + ",'" + this->Date_E + "','" + this->Role + "'," + this->Sup_Id + " ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::Delete_Personel(void) { return "EXECUTE Delete_Personel " + this->Id + " ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Personel::Update_Personel(void) { return "EXECUTE Update_Personel " + this->Id + ",'" + this->Nom + "','" + this->Prenom + "','" + this->Mail + "','" + this->Date_N + "','" + this->Ville + "','" + this->Rue + "','" + this->Code_Postal + "','" + this->Nom_Bat + "'," + this->Etage + ",'" + this->Date_E + "','" + this->Role + "'," + this->Sup_Id + " ;"; }


//---------------------------------Mappage de la classe Article--------------------------------------------------------

NS_Comp_Mappage::CL_Map_Article::CL_Map_Article() {}
void NS_Comp_Mappage::CL_Map_Article::setId(int Id) { this->Id = Id; }
void NS_Comp_Mappage::CL_Map_Article::setPrix(float Prix) { this->Prix = Prix; }
void NS_Comp_Mappage::CL_Map_Article::setNom(System::String^ Nom) { this->Nom = Nom; }
void NS_Comp_Mappage::CL_Map_Article::setCouleur(System::String^ Couleur) { this->Couleur = Couleur; }
void NS_Comp_Mappage::CL_Map_Article::setStock(int Stock) { this->Stock = Stock; }
void NS_Comp_Mappage::CL_Map_Article::setTaux_TVA(float Taux_TVA) { this->Taux_TVA = Taux_TVA; }

System::String^ NS_Comp_Mappage::CL_Map_Article::Select_Article(void) { return "EXECUTE Afficher_Article ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Article::Select_Article_Id(void) { return "EXECUTE Afficher_Article_Id " + this->Id + " ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Article::Insert_Article(void) { return "EXECUTE Creer_Article " + this->Prix + ",'" + this->Nom + "','" + this->Couleur + "'," + this->Stock + "," + this->Taux_TVA + ";"; }
System::String^ NS_Comp_Mappage::CL_Map_Article::Delete_Article(void) { return "EXECUTE Supprimer_Article " + this->Id + " ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Article::Update_Article(void) { return "EXECUTE Modifier_Article " + this->Id + "," + this->Prix + ",'" + this->Nom + "','" + this->Couleur + "'," + this->Stock + "," + this->Taux_TVA + ";"; }

//---------------------------------Mappage de la classe Commande--------------------------------------------------------

NS_Comp_Mappage::CL_Map_Commande::CL_Map_Commande() {}
void NS_Comp_Mappage::CL_Map_Commande::setId(System::String^ Id) { this->Id = Id; }
void NS_Comp_Mappage::CL_Map_Commande::setId_Cli(int Id_Cli) { this->Id_Cli = Id_Cli; }
void NS_Comp_Mappage::CL_Map_Commande::setNom(System::String^ Nom) { this->Nom = Nom; }
void NS_Comp_Mappage::CL_Map_Commande::setPrenom(System::String^ Prenom) { this->Prenom = Prenom; }
void NS_Comp_Mappage::CL_Map_Commande::setDate_Liv(System::DateTime^ Date_Liv) { this->Date_Liv = Date_Liv; }
void NS_Comp_Mappage::CL_Map_Commande::setDate_Emi(System::DateTime^ Date_Emi) { this->Date_Emi = Date_Emi; }
void NS_Comp_Mappage::CL_Map_Commande::setTotal_HT(float Total_HT) { this->Total_HT = Total_HT; }
void NS_Comp_Mappage::CL_Map_Commande::setTotal_TTC(float Total_TTC) { this->Total_TTC = Total_TTC; }
void NS_Comp_Mappage::CL_Map_Commande::setTotal_TVA(float Total_TVA) { this->Total_TVA = Total_TVA; }
void NS_Comp_Mappage::CL_Map_Commande::setMoyen_Paiment(System::String^ Moyen_Paiment) { this->Moyen_Paiment = Moyen_Paiment; }
void NS_Comp_Mappage::CL_Map_Commande::setAdresse_Liv(int Adresse_Liv) { this->Adresse_Liv = Adresse_Liv; }
void NS_Comp_Mappage::CL_Map_Commande::setAdresse_Fac(int Adresse_Fac) { this->Adresse_Fac = Adresse_Fac; }

System::String^ NS_Comp_Mappage::CL_Map_Commande::Select_Commande(void) { return "EXECUTE Afficher_Commande ; "; }
System::String^ NS_Comp_Mappage::CL_Map_Commande::Select_Commande_Id(void) { return "EXECUTE Afficher_Commande_Ref '" + this->Id + "'; "; }
System::String^ NS_Comp_Mappage::CL_Map_Commande::Insert_Commande(void) { 
	return "EXECUTE Creer_Commande '" + this->Date_Liv + "'," + this->Total_HT + "," + this->Total_TTC + "," + this->Total_TVA + ",'" + this->Moyen_Paiment + "'," + this->Id_Cli + "," + this->Adresse_Liv + "," + this->Adresse_Fac + "  ;"
		+ "EXECUTE Creer_Commande '" + this->Date_Liv + "'," + this->Total_HT + "," + this->Total_TTC + "," + this->Total_TVA + ",'" + this->Moyen_Paiment + "'," + this->Id_Cli + "," + this->Adresse_Liv + "," + this->Adresse_Fac + "  ;"
		+ "DELETE FROM Possede WHERE Id_Com = ((SELECT TOP(1)Id_Com FROM Commande ORDER BY Id_Com DESC)-1)"
		+ "DELETE FROM Commande WHERE Id_Com = ((SELECT TOP(1)Id_Com FROM Commande ORDER BY Id_Com DESC)-1)"
		+ "DELETE FROM Contient WHERE Id_Com = ((SELECT TOP(1)Id_Com FROM Commande ORDER BY Id_Com DESC)-1)";
}
System::String^ NS_Comp_Mappage::CL_Map_Commande::Delete_Commande(void) { return "EXECUTE Supprimer_Commande '" + this->Id + "';"; }
System::String^ NS_Comp_Mappage::CL_Map_Commande::Update_Commande(void) { return "EXECUTE Modifier_Commande '" + this->Id + "','" + this->Date_Liv + "','" + this->Date_Emi + "'," + this->Total_HT + "," + this->Total_TTC + "," + this->Total_TVA + ",'" + this->Moyen_Paiment + "'," + this->Id_Cli + "," + this->Adresse_Liv + "," + this->Adresse_Fac + " ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Commande::Update_Total_Commande(void) { return "EXECUTE Modifier_Total '" + this->Id + "'; "; }

//---------------------------------Mappage de la classe Contient--------------------------------------------------------

NS_Comp_Mappage::CL_Map_Contient::CL_Map_Contient() {}
void NS_Comp_Mappage::CL_Map_Contient::setId_Art(int Id_Art) { this->Id_Art = Id_Art; }
void NS_Comp_Mappage::CL_Map_Contient::setId_Com(System::String^ Id_Com) { this->Id_Com = Id_Com; }
void NS_Comp_Mappage::CL_Map_Contient::setQuantite_Article(int Quantite_Article) { this->Quantite_Article = Quantite_Article; }


System::String^ NS_Comp_Mappage::CL_Map_Contient::Insert_Contient(void) { return "EXECUTE Creer_Contient " + this->Id_Art + ",'" + this->Id_Com + "'," + this->Quantite_Article + "; "; }
System::String^ NS_Comp_Mappage::CL_Map_Contient::Delete_Contient(void) { return "EXECUTE Supprimer_Contient " + this->Id_Art + ",'" + this->Id_Com + "'; "; }
System::String^ NS_Comp_Mappage::CL_Map_Contient::Update_Contient(void) { return "EXECUTE Modifier_Contient " + this->Id_Art + ",'" + this->Id_Com + "' ," + this->Quantite_Article + "; "; }

//---------------------------------Mappage de la classe Statistique--------------------------------------------------------

NS_Comp_Mappage::CL_Map_Stat::CL_Map_Stat() {}

void NS_Comp_Mappage::CL_Map_Stat::setTotal(float Total) { this->Total = Total; }
void NS_Comp_Mappage::CL_Map_Stat::setId_Client(int Id_Client) { this->Id_Client = Id_Client; }
void NS_Comp_Mappage::CL_Map_Stat::setId_Art(int Id_Art) { this->Id_Art = Id_Art; }
void NS_Comp_Mappage::CL_Map_Stat::setDate_Fac(System::DateTime^ Date_Fac) { this->Date_Fac = Date_Fac; }
void NS_Comp_Mappage::CL_Map_Stat::setStock_Art(int Stock_Art) { this->Stock_Art = Stock_Art; }
void NS_Comp_Mappage::CL_Map_Stat::setMois(int Mois) { this->Mois = Mois; }
void NS_Comp_Mappage::CL_Map_Stat::setTVA(float) { this->TVA = TVA; }

void NS_Comp_Mappage::CL_Map_Stat::setMargeCommerciale(float MargeCommerciale) { this->MargeCommerciale = MargeCommerciale; }
void NS_Comp_Mappage::CL_Map_Stat::setRemiseCommerciale(float RemiseCommerciale) { this->RemiseCommerciale = RemiseCommerciale; }
void NS_Comp_Mappage::CL_Map_Stat::setDemarqueInconnue(float DemarqueInconnue) { this->DemarqueInconnue = DemarqueInconnue; }

System::String^ NS_Comp_Mappage::CL_Map_Stat::Calcul_Panier_Moyen(void) { return "EXECUTE Calcul_Panier_Moyen;"; }
System::String^ NS_Comp_Mappage::CL_Map_Stat::Calcul_Chiffre_Affaire_Mois(void) { return "EXECUTE Chiffre_mois " + this->Mois + "; "; }
System::String^ NS_Comp_Mappage::CL_Map_Stat::Produit_Reaprovisionnement(void) { return "EXECUTE Produits_Reapprovisionnement ; "; }
System::String^ NS_Comp_Mappage::CL_Map_Stat::Total_Achat_Client(void) { return "EXECUTE Calcul_montant_Tot_Client " + this->Id_Client + "; "; }
System::String^ NS_Comp_Mappage::CL_Map_Stat::Article_Plus_Vendu(void) { return "EXECUTE Articles_Plus_Vendus ; "; }
System::String^ NS_Comp_Mappage::CL_Map_Stat::Article_Moins_Vendu(void) { return "EXECUTE Articles_Moin_Vendus ; "; }
System::String^ NS_Comp_Mappage::CL_Map_Stat::Valeur_Commercial_Stock(void) { return "EXECUTE Valeur_Commerciale_Stock ; "; }
System::String^ NS_Comp_Mappage::CL_Map_Stat::Valeur_Achat_Stock(void) { return "EXECUTE Valeur_Achat_Stock ; "; }

System::String^ NS_Comp_Mappage::CL_Map_Stat::Variations_Valeurs_Commerciales(void) { return "EXECUTE Variations_Valeurs_Commerciales ; "; }
System::String^ NS_Comp_Mappage::CL_Map_Stat::Variations_Valeurs_Commerciales_Valeur(void) { return "EXECUTE Variations_Valeurs_Commerciales_Valeur " + this->TVA + "," + this->MargeCommerciale + "," + this->RemiseCommerciale + "," + this->DemarqueInconnue + " ; "; }

System::String^ NS_Comp_Mappage::CL_Map_Stat::Chek_anniv(void) { return "EXECUTE Chek_anniv ;"; }
System::String^ NS_Comp_Mappage::CL_Map_Stat::Chek_anniv_15(void) { return "EXECUTE Chek_anniv_15 ;"; }



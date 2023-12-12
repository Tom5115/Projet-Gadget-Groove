#include "GestionClient.h"
#include <iostream>
#include <stdexcept>
#include <Windows.h> 
#include <msclr/marshal_cppstd.h>
#include <regex>

#pragma comment(lib, "user32.lib")

using namespace std;
// 
// I) Pour checker les entr�es de l'interface Client
// 

//
// 1) M�thode pour checker les entr�es pour le id du client + �viter les injections SQL
//
bool APPGRAPHIQUEPROJET::GestionClient::check_client_ID_entry()
{
	String^ Client_ID = this->TXT_ID_CLIENT->Text;

	// V�rifier si l'entr�e est nulle ou non 
	if (String::IsNullOrEmpty(Client_ID)) {
		MessageBoxA(NULL, "Le champ ID client ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientIDString = msclr::interop::marshal_as<std::string>(Client_ID);

	// On v�rifie que le texte ne contient que des chiffres
	for (char c : clientIDString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ ID client ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : clientIDString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ ID client ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}



//
// 2) M�thode pour checker les entr�es pour le nom du client + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionClient::check_client_name_entry()
{
	String^ Client_Prenom = this->TXT_NOM_CLIENT->Text;

	// V�rifier si l'entr�e est nulle ou non 
	if (String::IsNullOrEmpty(Client_Prenom)) {
		MessageBoxA(NULL, "Le champ Nom client ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientNomStdString = msclr::interop::marshal_as<std::string>(Client_Prenom);

	// On v�rifie que le texte ne contient que des lettres
	for (char c : clientNomStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ nom client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : clientNomStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom client ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}




//
// 3) M�thode pour checker les entr�es pour le pr�nom du client + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionClient::check_client_surname_entry()
{
	String^ Client_Prenom = this->TXT_PRENOM_CLIENT->Text;

	// V�rifier si l'entr�e est nulle ou non 
	if (String::IsNullOrEmpty(Client_Prenom)) {
		MessageBoxA(NULL, "Le champ Prenom client ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientPrenomStdString = msclr::interop::marshal_as<std::string>(Client_Prenom);

	// On v�rifie que le texte ne contient que des lettres
	for (char c : clientPrenomStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ pr�nom client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : clientPrenomStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ pr�nom client ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}
//
// 4) M�thode pour checker l' entr�e pour la ville du client + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionClient::check_client_mail_entry()
{
	String^ Client_Mail = this->TXT_PRENOM_CLIENT->Text;

	// Convertir System::String^ en std::string
	std::string emailStdString = msclr::interop::marshal_as<std::string>(this->TXT_MAIL_CLIENT->Text);

	// Expression r�guli�re pour valider une adresse e-mail simple
	std::regex regexPattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");

	// V�rifier si la cha�ne correspond � l'expression r�guli�re
	if(std::regex_match(emailStdString, regexPattern) == FALSE ){
		MessageBoxA(NULL, "Mail invalide.", "Erreur", MB_OK | MB_ICONERROR);
		return FALSE;
	}
	
	return true;
	
}
//
// 6) M�thode pour checker l' entr�e pour la ville du client + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionClient::check_client_ville_entry()
{
	String^ Client_Ville = this->TXT_VILLE_CLIENT->Text;

	// V�rifier si l'entr�e est nulle ou non 
	if (String::IsNullOrEmpty(Client_Ville)) {
		MessageBoxA(NULL, "Le champ Ville client ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientVilleStdString = msclr::interop::marshal_as<std::string>(Client_Ville);

	// On v�rifie que le texte ne contient que des lettres
	for (char c : clientVilleStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ ville client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : clientVilleStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ ville client ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}
//
// 7) M�thode pour checker l' entr�e pour la rue du client + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionClient::check_client_rue_entry()
{
	String^ Client_Rue = this->TXT_RUE_CLIENT->Text;

	// V�rifier si l'entr�e est nulle ou non
	if (String::IsNullOrEmpty(Client_Rue)) {
		MessageBoxA(NULL, "Le champ Rue client ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientRuedString = msclr::interop::marshal_as<std::string>(Client_Rue);

	// On v�rifie que le texte ne contient que des lettres ou des espaces
	for (char c : clientRuedString) {
		if (!isalpha(c) && c != ' ') {
			MessageBoxA(NULL, "Le champ rue client ne doit contenir que des lettres ou des espaces.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : clientRuedString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ rue client ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

//
// 8) M�thode pour checker l' entr�e pour le code postal du client + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionClient::check_client_code_postal_entry()
{
	String^ Client_Code_Postal = this->TXT_CP_CLIENT->Text;

	// V�rifier si l'entr�e est nulle ou non 
	if (String::IsNullOrEmpty(Client_Code_Postal)) {
		MessageBoxA(NULL, "Le champ Code Postal client ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientCodePostaldString = msclr::interop::marshal_as<std::string>(Client_Code_Postal);

	// On v�rifie que le texte ne contient que des lettres
	for (char c : clientCodePostaldString) {
		if (!isalnum(c)) { // VARIANTE AVEC DE l'ALPHANUMERIQUE
			MessageBoxA(NULL, "Le champ code postal client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : clientCodePostaldString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ code postal client ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}
//
// 9) M�thode pour checker l' entr�e pour le nom du b�timent + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionClient::check_client_name_building_entry()
{
	String^ Client_Batiment= this->TXT_BAT_CLIENT->Text;

	// Convertir System::String^ en std::string
	std::string clientBatimentdString = msclr::interop::marshal_as<std::string>(Client_Batiment);

	// On v�rifie que le texte ne contient que des lettres
	for (char c : clientBatimentdString) {
		if (!isalnum(c)) { // VARIANTE AVEC DE l'ALPHANUMERIQUE
			MessageBoxA(NULL, "Le champ batiment client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : clientBatimentdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ batiment client ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

bool APPGRAPHIQUEPROJET::GestionClient::check_client_floor_entry()
{
	String^ Client_Etage = this->TXT_ETAGE_CLIENT->Text;

	// Convertir System::String^ en std::string
	std::string clientEtageString = msclr::interop::marshal_as<std::string>(Client_Etage);

	// On v�rifie que le texte ne contient que des chiffres
	for (char c : clientEtageString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ �tage client ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : clientEtageString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ �tage client ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}


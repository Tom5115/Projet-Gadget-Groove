#include "GestionPersonnel.h"

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
bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_ID_entry()
{
	String^ Personnel_ID = this->TXT_ID_PERSONNEL->Text;

	// V�rifier si l'entr�e est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_ID)) {
		MessageBoxA(NULL, "Le champ ID personnel ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string peronnelIDString = msclr::interop::marshal_as<std::string>(Personnel_ID);

	// On v�rifie que le texte ne contient que des chiffres
	for (char c : peronnelIDString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ ID personnel ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : peronnelIDString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ ID personnel ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}



//
// 2) M�thode pour checker les entr�es pour le nom du client + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_name_entry()
{
	String^ Personnel_Nom = this->TXT_NOM_PERSONNEL->Text;

	// V�rifier si l'entr�e est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_Nom)) {
		MessageBoxA(NULL, "Le champ Nom personnel ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string personnelNomStdString = msclr::interop::marshal_as<std::string>(Personnel_Nom);

	// On v�rifie que le texte ne contient que des lettres
	for (char c : personnelNomStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ 'nom' personnel ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : personnelNomStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom personnel ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}




//
// 3) M�thode pour checker les entr�es pour le pr�nom du client + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_surname_entry()
{
	String^ Personnel_Prenom = this->TXT_PRENOM_PERSONNEL->Text;

	// V�rifier si l'entr�e est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_Prenom)) {
		MessageBoxA(NULL, "Le champ Prenom personnel ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string personnelPrenomStdString = msclr::interop::marshal_as<std::string>(Personnel_Prenom);

	// On v�rifie que le texte ne contient que des lettres
	for (char c : personnelPrenomStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ pr�nom personnel ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : personnelPrenomStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ pr�nom personnel ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}
//
// 4) M�thode pour checker l' entr�e pour la ville du client + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_mail_entry()
{
	String^ Personnel_Mail = this->TXT_PRENOM_PERSONNEL->Text;

	// Convertir System::String^ en std::string
	std::string emailStdString = msclr::interop::marshal_as<std::string>(this->TXT_MAIL_PERSONNEL->Text);

	// Expression r�guli�re pour valider une adresse e-mail simple
	std::regex regexPattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");

	// V�rifier si la cha�ne correspond � l'expression r�guli�re
	if (std::regex_match(emailStdString, regexPattern) == FALSE) {
		MessageBoxA(NULL, "Mail invalide.", "Erreur", MB_OK | MB_ICONERROR);
		return FALSE;
	}

	return true;

}

//
// 6) M�thode pour checker l' entr�e pour la ville du client + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_ville_entry()
{
	String^ Personnel_Ville = this->TXT_VILLE_PERSONNEL->Text;

	// V�rifier si l'entr�e est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_Ville)) {
		MessageBoxA(NULL, "Le champ Ville personnel ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string personnelVilleStdString = msclr::interop::marshal_as<std::string>(Personnel_Ville);

	// On v�rifie que le texte ne contient que des lettres
	for (char c : personnelVilleStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ ville personnel ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : personnelVilleStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ ville personnel ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}


//
// 7) M�thode pour checker l' entr�e pour la rue du client + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_rue_entry()
{
	String^ Personnel_Rue = this->TXT_RUE_PERSONNEL->Text;

	// V�rifier si l'entr�e est nulle ou non
	if (String::IsNullOrEmpty(Personnel_Rue)) {
		MessageBoxA(NULL, "Le champ Rue client ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string personnelRuedString = msclr::interop::marshal_as<std::string>(Personnel_Rue);

	// On v�rifie que le texte ne contient que des lettres ou des espaces
	for (char c : personnelRuedString) {
		if (!isalpha(c) && c != ' ') {
			MessageBoxA(NULL, "Le champ rue client ne doit contenir que des lettres ou des espaces.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : personnelRuedString) {
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

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_code_postal_entry()
{
	String^ Personnel_Code_Postal = this->TXT_CP_PERSONNEL->Text;

	// V�rifier si l'entr�e est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_Code_Postal)) {
		MessageBoxA(NULL, "Le champ Code Postal personnel ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string personnelCodePostaldString = msclr::interop::marshal_as<std::string>(Personnel_Code_Postal);

	// On v�rifie que le texte ne contient que des lettres
	for (char c : personnelCodePostaldString) {
		if (!isalnum(c)) { // VARIANTE AVEC DE l'ALPHANUMERIQUE
			MessageBoxA(NULL, "Le champ code postal personnel ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : personnelCodePostaldString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ code postal personnel ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

//
// 9) M�thode pour checker l' entr�e pour le nom du b�timent + �viter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_name_building_entry()
{
	String^ Personnel_Batiment = this->TXT_BAT_PERSONNEL->Text;

	// Convertir System::String^ en std::string
	std::string personnelBatimentdString = msclr::interop::marshal_as<std::string>(Personnel_Batiment);

	// On v�rifie que le texte ne contient que des lettres
	for (char c : personnelBatimentdString) {
		if (!isalnum(c)) { // VARIANTE AVEC DE l'ALPHANUMERIQUE
			MessageBoxA(NULL, "Le champ b�timent ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : personnelBatimentdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ batiment ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_floor_entry()
{
	String^ Personnel_Etage = this->TXT_ETAGE_PERSONNEL->Text;

	// Convertir System::String^ en std::string
	std::string clientEtageString = msclr::interop::marshal_as<std::string>(Personnel_Etage);

	// On v�rifie que le texte ne contient que des chiffres
	for (char c : clientEtageString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ etage ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : clientEtageString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ etage ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}


bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_role_entry()
{
	String^ Personnel_Role = this->TEXT_ROLE_PERSONNEL->Text;

	// V�rifier si l'entr�e est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_Role)) {
		MessageBoxA(NULL, "Le champ Code Postal personnel ne peut pas �tre vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string personnelRoledString = msclr::interop::marshal_as<std::string>(Personnel_Role);

	// On v�rifie que le texte ne contient que des lettres
	for (char c : personnelRoledString) {
		if (!isalnum(c)) { // VARIANTE AVEC DE l'ALPHANUMERIQUE
			MessageBoxA(NULL, "Le champ role personel ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : personnelRoledString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ role personel ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_ID_supperior_entry()
{
	String^ Personnel_ID_Supperieur = this->TXT_ID_SUP->Text;

	// Convertir System::String^ en std::string
	std::string peronnelIDSuppString = msclr::interop::marshal_as<std::string>(Personnel_ID_Supperieur);

	// On v�rifie que le texte ne contient que des chiffres
	for (char c : peronnelIDSuppString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ Id supperieur ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On v�rifie que le texte ne contient pas de caract�res sp�ciaux pouvant �tre utilis�s pour des injections SQL
	for (char c : peronnelIDSuppString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ Id supperieur ne doit pas contenir de caract�res sp�ciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}
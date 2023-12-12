#include "GestionStock.h"
#include <iostream>
#include <stdexcept>
#include <Windows.h> 
#include <msclr/marshal_cppstd.h>
#include <regex>

#pragma comment(lib, "user32.lib")

using namespace std;


bool APPGRAPHIQUEPROJET::GestionStock::check_article_ID_entry()
{
	String^ Article_ID = this->TXT_ID_ARTICLE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Article_ID)) {
		MessageBoxA(NULL, "Le champ ID article ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string articleIDString = msclr::interop::marshal_as<std::string>(Article_ID);

	// On vérifie que le texte ne contient que des chiffres
	for (char c : articleIDString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ ID article stock ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : articleIDString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ ID article stock ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}



//
// 2) Méthode pour checker les entrées pour le nom du client + éviter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionStock::check_article_name_entry()
{
	String^ Article_Nom = this->TXT_NOM_ARTICLE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Article_Nom)) {
		MessageBoxA(NULL, "Le champ Nom article ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientNomStdString = msclr::interop::marshal_as<std::string>(Article_Nom);

	// On vérifie que le texte ne contient que des lettres
	for (char c : clientNomStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ 'nom' article ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : clientNomStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom article ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

//
// 3) Méthode pour checker les entrées pour le prénom du client + éviter les injections SQL
//
bool APPGRAPHIQUEPROJET::GestionStock::check_article_color_entry()
{
	String^ Article_Couleur = this->TXT_COULEUR_ARTICLE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Article_Couleur)) {
		MessageBoxA(NULL, "Le champ Couleur article ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientCouleurStdString = msclr::interop::marshal_as<std::string>(Article_Couleur);

	// On vérifie que le texte ne contient que des lettres
	for (char c : clientCouleurStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ 'couleur' article ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : clientCouleurStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ couleur article ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}
//
// 4) Méthode pour checker l' entrée pour la ville du client + éviter les injections SQL
//
bool APPGRAPHIQUEPROJET::GestionStock::check_article_quantity_entry()
{
	String^ Article_Stock = this->TXT_STOCK_ARTICLE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Article_Stock)) {
		MessageBoxA(NULL, "Le champ quantité article ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string articleStockString = msclr::interop::marshal_as<std::string>(Article_Stock);

	// On vérifie que le texte peut être converti en float
	try {
		std::stof(articleStockString); // essaie de convertir la chaîne en float
	}
	catch (const std::invalid_argument&) {
		MessageBoxA(NULL, "Le champs quantité article client doit être un nombre valide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : articleStockString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ quantité article ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

//
// 7) Méthode pour checker l' entrée pour la rue du client + éviter les injections SQL
//
bool APPGRAPHIQUEPROJET::GestionStock::check_article_price_entry()
{
	String^ Article_Prix = this->TXT_PRIX_ARTICLE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Article_Prix)) {
		MessageBoxA(NULL, "Le champ prix article ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string articlePriceString = msclr::interop::marshal_as<std::string>(Article_Prix);

	// On vérifie que le texte peut être converti en float
	try {
		std::stof(articlePriceString); // essaie de convertir la chaîne en float
	}
	catch (const std::invalid_argument&) {
		MessageBoxA(NULL, "Le champs prix article client doit être un nombre valide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : articlePriceString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ prix article ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}


bool APPGRAPHIQUEPROJET::GestionStock::check_article_TVA_entry()
{
	String^ Article_TVA = this->TXT_TVA_ARTICLE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Article_TVA)) {
		MessageBoxA(NULL, "Le champ TVA article ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string articleTVAString = msclr::interop::marshal_as<std::string>(Article_TVA);

	// On vérifie que le texte peut être converti en float
	try {
		std::stof(articleTVAString); // essaie de convertir la chaîne en float
	}
	catch (const std::invalid_argument&) {
		MessageBoxA(NULL, "Le champs TVA article client doit être un nombre entrier ou à virgule.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : articleTVAString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ TVA article ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

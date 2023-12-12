#include "GestionCommandes.h"
#include <iostream>
#include <stdexcept>
#include <Windows.h> 
#include <msclr/marshal_cppstd.h>
#include <regex>
/*
#pragma comment(lib, "user32.lib")

using namespace std;


bool APPGRAPHIQUEPROJET::GestionCommandes::check_commande_ID_cient_entry()
{
	String^ Client_ID = this->TXT_ID_CLIENT_COMMANDE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Client_ID)) {
		MessageBoxA(NULL, "Le champ ID client ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientIDString = msclr::interop::marshal_as<std::string>(Client_ID);

	// On vérifie que le texte ne contient que des chiffres
	for (char c : clientIDString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ ID client stock ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : clientIDString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ ID client stock ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}



//
// 2) Méthode pour checker les entrées pour le nom du client + éviter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionCommandes::check_commande_payment_means_entry()
{
	String^ Moyen_Paiment = this->TXT_MOYEN_PAIMENT_COMMANDE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Moyen_Paiment)) {
		MessageBoxA(NULL, "Le champ moyen de paiement commande ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string MoyenPaimentStdString = msclr::interop::marshal_as<std::string>(Moyen_Paiment);

	// On vérifie que le texte ne contient que des lettres
	for (char c : MoyenPaimentStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ 'moyen de paiement' commande ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : MoyenPaimentStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ moyen de paiement commande ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

//
// 3) Méthode pour checker les entrées pour le prénom du client + éviter les injections SQL
//
bool APPGRAPHIQUEPROJET::GestionCommandes::check_commande_ID_facturation_entry()
{
	String^ Commande_ID_Facturation = this->TXT_ID_ADR_FACT->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Commande_ID_Facturation)) {
		MessageBoxA(NULL, "Le champ ID de facturation commande ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string commandeIDFacturationString = msclr::interop::marshal_as<std::string>(Commande_ID_Facturation);

	// On vérifie que le texte ne contient que des chiffres
	for (char c : commandeIDFacturationString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ ID de facuration commande ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : commandeIDFacturationString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ ID de facturation commande ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

bool APPGRAPHIQUEPROJET::GestionCommandes::check_commande_ID_delivery_entry()
{
	String^ Commande_ID_Livraison = this->TXT_ID_ADRESSE_COMMANDE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Commande_ID_Livraison)) {
		MessageBoxA(NULL, "Le champ ID de facturation de livraison ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string commandeIDLivraisonString = msclr::interop::marshal_as<std::string>(Commande_ID_Livraison);

	// On vérifie que le texte ne contient que des chiffres
	for (char c : commandeIDLivraisonString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ ID de livraison commande ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : commandeIDLivraisonString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ ID de livraison commande ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}


bool APPGRAPHIQUEPROJET::GestionCommandes::check_commande_ref_entry()
{
	String^ Commande_ID = this->TXT_ID_COMMANDE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Commande_ID)) {
		MessageBoxA(NULL, "Le champ ID commande ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string commandeIDStdString = msclr::interop::marshal_as<std::string>(Commande_ID);

	// On vérifie que le texte ne contient que des lettres
	for (char c : commandeIDStdString) {
		if (!isalnum(c)) { // VARIANTE AVEC DE l'ALPHANUMERIQUE
			MessageBoxA(NULL, "Le champ ID commande ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : commandeIDStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ ID commande ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

*/
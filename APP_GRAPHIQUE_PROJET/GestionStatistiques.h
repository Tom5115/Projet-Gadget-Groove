#pragma once
#include "CL_services.h"
namespace APPGRAPHIQUEPROJET {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionClient1
	/// </summary>
	public ref class GestionStatistiques : public System::Windows::Forms::Form
	{
	public:
		Form^ ObjetStat;
		GestionStatistiques(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

		GestionStatistiques(Form^ Objet)
		{
			ObjetStat = Objet;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionStatistiques()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;


	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::PictureBox^ LOGO;
	private: System::Windows::Forms::Button^ RETURN_STATS_HOME;



	private: System::Windows::Forms::Label^ NomApp;

	private: System::Windows::Forms::PictureBox^ BarreNoir;
	private: System::Windows::Forms::Label^ TITRE_STATISTIQUES;
	private: System::Windows::Forms::Button^ BOUTON_AFFICHER_STAT;
	private: System::Windows::Forms::PictureBox^ BACKGROUND_TEXT_8;
	private: System::Windows::Forms::PictureBox^ BACKGROUND_TEXT_1;

	private: System::Windows::Forms::Label^ label40;

	private: System::Windows::Forms::Label^ LABEL_PANIER_MOY;
	private: System::Windows::Forms::ComboBox^ SELECTEUR_VAL;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ TXT_INT_MOIS_2;


	private: System::Windows::Forms::Label^ LABEL_CALCUL_CA;
	private: System::Windows::Forms::PictureBox^ BACKGROUND_TEXT_2;
	private: System::Windows::Forms::Label^ LABEL_IDENTIFIER_SEUIL;



	private: System::Windows::Forms::PictureBox^ BACKGROUND_TEXT_3;
	private: System::Windows::Forms::TextBox^ TXT_ID_CLI_4;


	private: System::Windows::Forms::Label^ LABEL_ACHAT_CLIENT;
	private: System::Windows::Forms::PictureBox^ BACKGROUND_TEXT_4;
	private: System::Windows::Forms::TextBox^ TXT_REMISE_10;



	private: System::Windows::Forms::Label^ LABEL_MAX_10;


	private: System::Windows::Forms::PictureBox^ BACKGROUND_TEXT_5;
	private: System::Windows::Forms::Label^ IDENTIFIER_MIN_10;



	private: System::Windows::Forms::PictureBox^ BACKGROUND_TEXT_6;
	private: System::Windows::Forms::Label^ LABEL_VAL_STOCK_COMMERCIAL;



	private: System::Windows::Forms::PictureBox^ BACKGROUND_TEXT_7;
	private: System::Windows::Forms::Label^ LABEL_ACHAT_STOCK;



	private: System::Windows::Forms::PictureBox^ BACKG_8;
	private: System::Windows::Forms::Label^ LABEL_SIMUL_SANS_ARG;



	private: System::Windows::Forms::PictureBox^ BACKGROUND_TEXT_9;
	private: System::Windows::Forms::TextBox^ TXT_DEMARQUE_10;


	private: System::Windows::Forms::Label^ LABEL_SIMUL_AVEC_ARG;

	private: System::Windows::Forms::PictureBox^ BACKGROUND_TEXT_10;

	private: System::Windows::Forms::Label^ LABEL_CONSIGNE_MOIS;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ AFFICHAGE_STAT;
	private: System::Windows::Forms::TextBox^ TXT_MARGE_10;

	private: System::Windows::Forms::TextBox^ TXT_TVA_10;
	private: System::Windows::Forms::TextBox^ TXT_VALEUR__REQUETE_RETOUR;


	private: System::Windows::Forms::Label^ LABEL_REQUETE_RETOUR_NUM;

	private: System::Windows::Forms::Label^ LABEL_DEMANDE_REQUETE;

	private: System::Windows::Forms::Label^ LABEL_INDICATION_10;



	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: NS_Comp_Svc::CLservices_Stat^ oSvc_Stat;
	private: System::Data::DataSet^ oDs;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionStatistiques::typeid));
			   this->LOGO = (gcnew System::Windows::Forms::PictureBox());
			   this->RETURN_STATS_HOME = (gcnew System::Windows::Forms::Button());
			   this->NomApp = (gcnew System::Windows::Forms::Label());
			   this->BarreNoir = (gcnew System::Windows::Forms::PictureBox());
			   this->TITRE_STATISTIQUES = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_AFFICHER_STAT = (gcnew System::Windows::Forms::Button());
			   this->BACKGROUND_TEXT_8 = (gcnew System::Windows::Forms::PictureBox());
			   this->BACKGROUND_TEXT_1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label40 = (gcnew System::Windows::Forms::Label());
			   this->LABEL_PANIER_MOY = (gcnew System::Windows::Forms::Label());
			   this->SELECTEUR_VAL = (gcnew System::Windows::Forms::ComboBox());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->TXT_INT_MOIS_2 = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_CALCUL_CA = (gcnew System::Windows::Forms::Label());
			   this->BACKGROUND_TEXT_2 = (gcnew System::Windows::Forms::PictureBox());
			   this->LABEL_IDENTIFIER_SEUIL = (gcnew System::Windows::Forms::Label());
			   this->BACKGROUND_TEXT_3 = (gcnew System::Windows::Forms::PictureBox());
			   this->TXT_ID_CLI_4 = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_ACHAT_CLIENT = (gcnew System::Windows::Forms::Label());
			   this->BACKGROUND_TEXT_4 = (gcnew System::Windows::Forms::PictureBox());
			   this->TXT_REMISE_10 = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_MAX_10 = (gcnew System::Windows::Forms::Label());
			   this->BACKGROUND_TEXT_5 = (gcnew System::Windows::Forms::PictureBox());
			   this->IDENTIFIER_MIN_10 = (gcnew System::Windows::Forms::Label());
			   this->BACKGROUND_TEXT_6 = (gcnew System::Windows::Forms::PictureBox());
			   this->LABEL_VAL_STOCK_COMMERCIAL = (gcnew System::Windows::Forms::Label());
			   this->BACKGROUND_TEXT_7 = (gcnew System::Windows::Forms::PictureBox());
			   this->LABEL_ACHAT_STOCK = (gcnew System::Windows::Forms::Label());
			   this->BACKG_8 = (gcnew System::Windows::Forms::PictureBox());
			   this->LABEL_SIMUL_SANS_ARG = (gcnew System::Windows::Forms::Label());
			   this->BACKGROUND_TEXT_9 = (gcnew System::Windows::Forms::PictureBox());
			   this->TXT_DEMARQUE_10 = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_SIMUL_AVEC_ARG = (gcnew System::Windows::Forms::Label());
			   this->BACKGROUND_TEXT_10 = (gcnew System::Windows::Forms::PictureBox());
			   this->LABEL_CONSIGNE_MOIS = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->AFFICHAGE_STAT = (gcnew System::Windows::Forms::DataGridView());
			   this->TXT_MARGE_10 = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_TVA_10 = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_VALEUR__REQUETE_RETOUR = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_REQUETE_RETOUR_NUM = (gcnew System::Windows::Forms::Label());
			   this->LABEL_DEMANDE_REQUETE = (gcnew System::Windows::Forms::Label());
			   this->LABEL_INDICATION_10 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_8))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_4))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_5))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_6))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_7))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKG_8))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_9))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_10))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHAGE_STAT))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // LOGO
			   // 
			   this->LOGO->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LOGO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LOGO.Image")));
			   this->LOGO->Location = System::Drawing::Point(12, 12);
			   this->LOGO->Name = L"LOGO";
			   this->LOGO->Size = System::Drawing::Size(50, 40);
			   this->LOGO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->LOGO->TabIndex = 245;
			   this->LOGO->TabStop = false;
			   // 
			   // RETURN_STATS_HOME
			   // 
			   this->RETURN_STATS_HOME->BackColor = System::Drawing::Color::Transparent;
			   this->RETURN_STATS_HOME->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RETURN_STATS_HOME.BackgroundImage")));
			   this->RETURN_STATS_HOME->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->RETURN_STATS_HOME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			   this->RETURN_STATS_HOME->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->RETURN_STATS_HOME->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RETURN_STATS_HOME.Image")));
			   this->RETURN_STATS_HOME->Location = System::Drawing::Point(1138, 12);
			   this->RETURN_STATS_HOME->Name = L"RETURN_STATS_HOME";
			   this->RETURN_STATS_HOME->Size = System::Drawing::Size(106, 48);
			   this->RETURN_STATS_HOME->TabIndex = 243;
			   this->RETURN_STATS_HOME->Text = L"RETOUR";
			   this->RETURN_STATS_HOME->UseVisualStyleBackColor = false;
			   this->RETURN_STATS_HOME->Click += gcnew System::EventHandler(this, &GestionStatistiques::RETURN_STATS_HOME_Click);
			   // 
			   // NomApp
			   // 
			   this->NomApp->AutoSize = true;
			   this->NomApp->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->NomApp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NomApp->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->NomApp->Location = System::Drawing::Point(68, 12);
			   this->NomApp->Name = L"NomApp";
			   this->NomApp->Size = System::Drawing::Size(387, 50);
			   this->NomApp->TabIndex = 241;
			   this->NomApp->Text = L"| Gestion Statistiques";
			   // 
			   // BarreNoir
			   // 
			   this->BarreNoir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->BarreNoir->Location = System::Drawing::Point(0, 0);
			   this->BarreNoir->Name = L"BarreNoir";
			   this->BarreNoir->Size = System::Drawing::Size(1291, 69);
			   this->BarreNoir->TabIndex = 242;
			   this->BarreNoir->TabStop = false;
			   // 
			   // TITRE_STATISTIQUES
			   // 
			   this->TITRE_STATISTIQUES->AutoSize = true;
			   this->TITRE_STATISTIQUES->BackColor = System::Drawing::Color::Black;
			   this->TITRE_STATISTIQUES->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TITRE_STATISTIQUES->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->TITRE_STATISTIQUES->Location = System::Drawing::Point(90, 84);
			   this->TITRE_STATISTIQUES->Name = L"TITRE_STATISTIQUES";
			   this->TITRE_STATISTIQUES->Size = System::Drawing::Size(137, 20);
			   this->TITRE_STATISTIQUES->TabIndex = 259;
			   this->TITRE_STATISTIQUES->Text = L"STATISTIQUES";
			   // 
			   // BOUTON_AFFICHER_STAT
			   // 
			   this->BOUTON_AFFICHER_STAT->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_AFFICHER_STAT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_AFFICHER_STAT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->BOUTON_AFFICHER_STAT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_AFFICHER_STAT->Location = System::Drawing::Point(872, 605);
			   this->BOUTON_AFFICHER_STAT->Name = L"BOUTON_AFFICHER_STAT";
			   this->BOUTON_AFFICHER_STAT->Size = System::Drawing::Size(291, 79);
			   this->BOUTON_AFFICHER_STAT->TabIndex = 246;
			   this->BOUTON_AFFICHER_STAT->Text = L"AFFICHER STATISTIQUE";
			   this->BOUTON_AFFICHER_STAT->UseVisualStyleBackColor = false;
			   this->BOUTON_AFFICHER_STAT->Click += gcnew System::EventHandler(this, &GestionStatistiques::BOUTON_AFFICHER_STAT_Click);
			   // 
			   // BACKGROUND_TEXT_8
			   // 
			   this->BACKGROUND_TEXT_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BACKGROUND_TEXT_8.BackgroundImage")));
			   this->BACKGROUND_TEXT_8->Location = System::Drawing::Point(77, 75);
			   this->BACKGROUND_TEXT_8->Name = L"BACKGROUND_TEXT_8";
			   this->BACKGROUND_TEXT_8->Size = System::Drawing::Size(1111, 627);
			   this->BACKGROUND_TEXT_8->TabIndex = 271;
			   this->BACKGROUND_TEXT_8->TabStop = false;
			   // 
			   // BACKGROUND_TEXT_1
			   // 
			   this->BACKGROUND_TEXT_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BACKGROUND_TEXT_1.Image")));
			   this->BACKGROUND_TEXT_1->Location = System::Drawing::Point(0, 52);
			   this->BACKGROUND_TEXT_1->Name = L"BACKGROUND_TEXT_1";
			   this->BACKGROUND_TEXT_1->Size = System::Drawing::Size(1273, 687);
			   this->BACKGROUND_TEXT_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->BACKGROUND_TEXT_1->TabIndex = 244;
			   this->BACKGROUND_TEXT_1->TabStop = false;
			   // 
			   // label40
			   // 
			   this->label40->AutoSize = true;
			   this->label40->ForeColor = System::Drawing::Color::Red;
			   this->label40->Location = System::Drawing::Point(817, 829);
			   this->label40->Name = L"label40";
			   this->label40->Size = System::Drawing::Size(166, 13);
			   this->label40->TabIndex = 240;
			   this->label40->Text = L"Message erreur potentielle ajouter";
			   // 
			   // LABEL_PANIER_MOY
			   // 
			   this->LABEL_PANIER_MOY->AutoSize = true;
			   this->LABEL_PANIER_MOY->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_PANIER_MOY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_PANIER_MOY->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_PANIER_MOY->Location = System::Drawing::Point(98, 120);
			   this->LABEL_PANIER_MOY->Name = L"LABEL_PANIER_MOY";
			   this->LABEL_PANIER_MOY->Size = System::Drawing::Size(331, 20);
			   this->LABEL_PANIER_MOY->TabIndex = 272;
			   this->LABEL_PANIER_MOY->Text = L"1. Calculer le prix moyen panier (après remise)";
			   // 
			   // SELECTEUR_VAL
			   // 
			   this->SELECTEUR_VAL->FormattingEnabled = true;
			   this->SELECTEUR_VAL->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				   L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					   L"9", L"10"
			   });
			   this->SELECTEUR_VAL->Location = System::Drawing::Point(94, 519);
			   this->SELECTEUR_VAL->Name = L"SELECTEUR_VAL";
			   this->SELECTEUR_VAL->Size = System::Drawing::Size(292, 21);
			   this->SELECTEUR_VAL->TabIndex = 281;
			   this->SELECTEUR_VAL->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStatistiques::SELECTEUR_VAL_SelectedIndexChanged);
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->pictureBox3->Location = System::Drawing::Point(94, 113);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(1069, 32);
			   this->pictureBox3->TabIndex = 283;
			   this->pictureBox3->TabStop = false;
			   // 
			   // TXT_INT_MOIS_2
			   // 
			   this->TXT_INT_MOIS_2->BackColor = System::Drawing::SystemColors::WindowText;
			   this->TXT_INT_MOIS_2->ForeColor = System::Drawing::SystemColors::Window;
			   this->TXT_INT_MOIS_2->Location = System::Drawing::Point(1054, 158);
			   this->TXT_INT_MOIS_2->Name = L"TXT_INT_MOIS_2";
			   this->TXT_INT_MOIS_2->Size = System::Drawing::Size(100, 20);
			   this->TXT_INT_MOIS_2->TabIndex = 287;
			   // 
			   // LABEL_CALCUL_CA
			   // 
			   this->LABEL_CALCUL_CA->AutoSize = true;
			   this->LABEL_CALCUL_CA->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_CALCUL_CA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_CALCUL_CA->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_CALCUL_CA->Location = System::Drawing::Point(98, 158);
			   this->LABEL_CALCUL_CA->Name = L"LABEL_CALCUL_CA";
			   this->LABEL_CALCUL_CA->Size = System::Drawing::Size(365, 20);
			   this->LABEL_CALCUL_CA->TabIndex = 285;
			   this->LABEL_CALCUL_CA->Text = L"2. Calculer le chiffre d\'affaire sur un mois particulier";
			   // 
			   // BACKGROUND_TEXT_2
			   // 
			   this->BACKGROUND_TEXT_2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BACKGROUND_TEXT_2->Location = System::Drawing::Point(94, 151);
			   this->BACKGROUND_TEXT_2->Name = L"BACKGROUND_TEXT_2";
			   this->BACKGROUND_TEXT_2->Size = System::Drawing::Size(1069, 32);
			   this->BACKGROUND_TEXT_2->TabIndex = 286;
			   this->BACKGROUND_TEXT_2->TabStop = false;
			   // 
			   // LABEL_IDENTIFIER_SEUIL
			   // 
			   this->LABEL_IDENTIFIER_SEUIL->AutoSize = true;
			   this->LABEL_IDENTIFIER_SEUIL->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_IDENTIFIER_SEUIL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_IDENTIFIER_SEUIL->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_IDENTIFIER_SEUIL->Location = System::Drawing::Point(98, 196);
			   this->LABEL_IDENTIFIER_SEUIL->Name = L"LABEL_IDENTIFIER_SEUIL";
			   this->LABEL_IDENTIFIER_SEUIL->Size = System::Drawing::Size(437, 20);
			   this->LABEL_IDENTIFIER_SEUIL->TabIndex = 288;
			   this->LABEL_IDENTIFIER_SEUIL->Text = L"3. Identifier les produits sous le seuil de réapprovisionnement";
			   // 
			   // BACKGROUND_TEXT_3
			   // 
			   this->BACKGROUND_TEXT_3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BACKGROUND_TEXT_3->Location = System::Drawing::Point(94, 189);
			   this->BACKGROUND_TEXT_3->Name = L"BACKGROUND_TEXT_3";
			   this->BACKGROUND_TEXT_3->Size = System::Drawing::Size(1069, 32);
			   this->BACKGROUND_TEXT_3->TabIndex = 289;
			   this->BACKGROUND_TEXT_3->TabStop = false;
			   // 
			   // TXT_ID_CLI_4
			   // 
			   this->TXT_ID_CLI_4->BackColor = System::Drawing::SystemColors::Desktop;
			   this->TXT_ID_CLI_4->ForeColor = System::Drawing::SystemColors::Window;
			   this->TXT_ID_CLI_4->Location = System::Drawing::Point(1054, 234);
			   this->TXT_ID_CLI_4->Name = L"TXT_ID_CLI_4";
			   this->TXT_ID_CLI_4->Size = System::Drawing::Size(100, 20);
			   this->TXT_ID_CLI_4->TabIndex = 293;
			   // 
			   // LABEL_ACHAT_CLIENT
			   // 
			   this->LABEL_ACHAT_CLIENT->AutoSize = true;
			   this->LABEL_ACHAT_CLIENT->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_ACHAT_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_ACHAT_CLIENT->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_ACHAT_CLIENT->Location = System::Drawing::Point(98, 234);
			   this->LABEL_ACHAT_CLIENT->Name = L"LABEL_ACHAT_CLIENT";
			   this->LABEL_ACHAT_CLIENT->Size = System::Drawing::Size(378, 20);
			   this->LABEL_ACHAT_CLIENT->TabIndex = 291;
			   this->LABEL_ACHAT_CLIENT->Text = L"4. Calculer le montant total des achats pour un client";
			   // 
			   // BACKGROUND_TEXT_4
			   // 
			   this->BACKGROUND_TEXT_4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BACKGROUND_TEXT_4->Location = System::Drawing::Point(94, 227);
			   this->BACKGROUND_TEXT_4->Name = L"BACKGROUND_TEXT_4";
			   this->BACKGROUND_TEXT_4->Size = System::Drawing::Size(1069, 32);
			   this->BACKGROUND_TEXT_4->TabIndex = 292;
			   this->BACKGROUND_TEXT_4->TabStop = false;
			   // 
			   // TXT_REMISE_10
			   // 
			   this->TXT_REMISE_10->BackColor = System::Drawing::SystemColors::Desktop;
			   this->TXT_REMISE_10->ForeColor = System::Drawing::SystemColors::Window;
			   this->TXT_REMISE_10->Location = System::Drawing::Point(948, 462);
			   this->TXT_REMISE_10->Name = L"TXT_REMISE_10";
			   this->TXT_REMISE_10->Size = System::Drawing::Size(100, 20);
			   this->TXT_REMISE_10->TabIndex = 296;
			   // 
			   // LABEL_MAX_10
			   // 
			   this->LABEL_MAX_10->AutoSize = true;
			   this->LABEL_MAX_10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_MAX_10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_MAX_10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_MAX_10->Location = System::Drawing::Point(98, 272);
			   this->LABEL_MAX_10->Name = L"LABEL_MAX_10";
			   this->LABEL_MAX_10->Size = System::Drawing::Size(300, 20);
			   this->LABEL_MAX_10->TabIndex = 294;
			   this->LABEL_MAX_10->Text = L"5. Identifier les 10 articles les plus vendus";
			   // 
			   // BACKGROUND_TEXT_5
			   // 
			   this->BACKGROUND_TEXT_5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BACKGROUND_TEXT_5->Location = System::Drawing::Point(94, 265);
			   this->BACKGROUND_TEXT_5->Name = L"BACKGROUND_TEXT_5";
			   this->BACKGROUND_TEXT_5->Size = System::Drawing::Size(1069, 32);
			   this->BACKGROUND_TEXT_5->TabIndex = 295;
			   this->BACKGROUND_TEXT_5->TabStop = false;
			   // 
			   // IDENTIFIER_MIN_10
			   // 
			   this->IDENTIFIER_MIN_10->AutoSize = true;
			   this->IDENTIFIER_MIN_10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->IDENTIFIER_MIN_10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->IDENTIFIER_MIN_10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->IDENTIFIER_MIN_10->Location = System::Drawing::Point(98, 310);
			   this->IDENTIFIER_MIN_10->Name = L"IDENTIFIER_MIN_10";
			   this->IDENTIFIER_MIN_10->Size = System::Drawing::Size(313, 20);
			   this->IDENTIFIER_MIN_10->TabIndex = 297;
			   this->IDENTIFIER_MIN_10->Text = L"6. Identifier les 10 articles les moins vendus";
			   // 
			   // BACKGROUND_TEXT_6
			   // 
			   this->BACKGROUND_TEXT_6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BACKGROUND_TEXT_6->Location = System::Drawing::Point(94, 303);
			   this->BACKGROUND_TEXT_6->Name = L"BACKGROUND_TEXT_6";
			   this->BACKGROUND_TEXT_6->Size = System::Drawing::Size(1069, 32);
			   this->BACKGROUND_TEXT_6->TabIndex = 298;
			   this->BACKGROUND_TEXT_6->TabStop = false;
			   // 
			   // LABEL_VAL_STOCK_COMMERCIAL
			   // 
			   this->LABEL_VAL_STOCK_COMMERCIAL->AutoSize = true;
			   this->LABEL_VAL_STOCK_COMMERCIAL->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_VAL_STOCK_COMMERCIAL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_VAL_STOCK_COMMERCIAL->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_VAL_STOCK_COMMERCIAL->Location = System::Drawing::Point(98, 348);
			   this->LABEL_VAL_STOCK_COMMERCIAL->Name = L"LABEL_VAL_STOCK_COMMERCIAL";
			   this->LABEL_VAL_STOCK_COMMERCIAL->Size = System::Drawing::Size(302, 20);
			   this->LABEL_VAL_STOCK_COMMERCIAL->TabIndex = 300;
			   this->LABEL_VAL_STOCK_COMMERCIAL->Text = L"7. Calculer la valeur commerciale du stock";
			   // 
			   // BACKGROUND_TEXT_7
			   // 
			   this->BACKGROUND_TEXT_7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BACKGROUND_TEXT_7->Location = System::Drawing::Point(94, 341);
			   this->BACKGROUND_TEXT_7->Name = L"BACKGROUND_TEXT_7";
			   this->BACKGROUND_TEXT_7->Size = System::Drawing::Size(1069, 32);
			   this->BACKGROUND_TEXT_7->TabIndex = 301;
			   this->BACKGROUND_TEXT_7->TabStop = false;
			   // 
			   // LABEL_ACHAT_STOCK
			   // 
			   this->LABEL_ACHAT_STOCK->AutoSize = true;
			   this->LABEL_ACHAT_STOCK->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_ACHAT_STOCK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_ACHAT_STOCK->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_ACHAT_STOCK->Location = System::Drawing::Point(98, 386);
			   this->LABEL_ACHAT_STOCK->Name = L"LABEL_ACHAT_STOCK";
			   this->LABEL_ACHAT_STOCK->Size = System::Drawing::Size(265, 20);
			   this->LABEL_ACHAT_STOCK->TabIndex = 303;
			   this->LABEL_ACHAT_STOCK->Text = L"8. Calculer la valeur d\'achat du stock";
			   // 
			   // BACKG_8
			   // 
			   this->BACKG_8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BACKG_8->Location = System::Drawing::Point(94, 379);
			   this->BACKG_8->Name = L"BACKG_8";
			   this->BACKG_8->Size = System::Drawing::Size(1069, 32);
			   this->BACKG_8->TabIndex = 304;
			   this->BACKG_8->TabStop = false;
			   // 
			   // LABEL_SIMUL_SANS_ARG
			   // 
			   this->LABEL_SIMUL_SANS_ARG->AutoSize = true;
			   this->LABEL_SIMUL_SANS_ARG->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_SIMUL_SANS_ARG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_SIMUL_SANS_ARG->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_SIMUL_SANS_ARG->Location = System::Drawing::Point(98, 424);
			   this->LABEL_SIMUL_SANS_ARG->Name = L"LABEL_SIMUL_SANS_ARG";
			   this->LABEL_SIMUL_SANS_ARG->Size = System::Drawing::Size(592, 20);
			   this->LABEL_SIMUL_SANS_ARG->TabIndex = 306;
			   this->LABEL_SIMUL_SANS_ARG->Text = L"9. Simuler les variations de valeurs commerciales pour en déduire la valeur du st"
				   L"ock";
			   // 
			   // BACKGROUND_TEXT_9
			   // 
			   this->BACKGROUND_TEXT_9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BACKGROUND_TEXT_9->Location = System::Drawing::Point(94, 417);
			   this->BACKGROUND_TEXT_9->Name = L"BACKGROUND_TEXT_9";
			   this->BACKGROUND_TEXT_9->Size = System::Drawing::Size(1069, 32);
			   this->BACKGROUND_TEXT_9->TabIndex = 307;
			   this->BACKGROUND_TEXT_9->TabStop = false;
			   // 
			   // TXT_DEMARQUE_10
			   // 
			   this->TXT_DEMARQUE_10->BackColor = System::Drawing::SystemColors::ControlText;
			   this->TXT_DEMARQUE_10->ForeColor = System::Drawing::SystemColors::Menu;
			   this->TXT_DEMARQUE_10->Location = System::Drawing::Point(1054, 462);
			   this->TXT_DEMARQUE_10->Name = L"TXT_DEMARQUE_10";
			   this->TXT_DEMARQUE_10->Size = System::Drawing::Size(100, 20);
			   this->TXT_DEMARQUE_10->TabIndex = 311;
			   // 
			   // LABEL_SIMUL_AVEC_ARG
			   // 
			   this->LABEL_SIMUL_AVEC_ARG->AutoSize = true;
			   this->LABEL_SIMUL_AVEC_ARG->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_SIMUL_AVEC_ARG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_SIMUL_AVEC_ARG->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_SIMUL_AVEC_ARG->Location = System::Drawing::Point(98, 462);
			   this->LABEL_SIMUL_AVEC_ARG->Name = L"LABEL_SIMUL_AVEC_ARG";
			   this->LABEL_SIMUL_AVEC_ARG->Size = System::Drawing::Size(455, 20);
			   this->LABEL_SIMUL_AVEC_ARG->TabIndex = 309;
			   this->LABEL_SIMUL_AVEC_ARG->Text = L"10. Simuler les variations de valeurs commerciales avec entrées";
			   // 
			   // BACKGROUND_TEXT_10
			   // 
			   this->BACKGROUND_TEXT_10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BACKGROUND_TEXT_10->Location = System::Drawing::Point(94, 455);
			   this->BACKGROUND_TEXT_10->Name = L"BACKGROUND_TEXT_10";
			   this->BACKGROUND_TEXT_10->Size = System::Drawing::Size(1069, 32);
			   this->BACKGROUND_TEXT_10->TabIndex = 310;
			   this->BACKGROUND_TEXT_10->TabStop = false;
			   // 
			   // LABEL_CONSIGNE_MOIS
			   // 
			   this->LABEL_CONSIGNE_MOIS->AutoSize = true;
			   this->LABEL_CONSIGNE_MOIS->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_CONSIGNE_MOIS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_CONSIGNE_MOIS->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_CONSIGNE_MOIS->Location = System::Drawing::Point(725, 158);
			   this->LABEL_CONSIGNE_MOIS->Name = L"LABEL_CONSIGNE_MOIS";
			   this->LABEL_CONSIGNE_MOIS->Size = System::Drawing::Size(323, 20);
			   this->LABEL_CONSIGNE_MOIS->TabIndex = 312;
			   this->LABEL_CONSIGNE_MOIS->Text = L"Veuillez rentrer un mois (sous forme d\'entier)";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->label2->Location = System::Drawing::Point(674, 232);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(370, 20);
			   this->label2->TabIndex = 313;
			   this->label2->Text = L"Veuillez rentrer un ID de client (sous forme d\'entier)";
			   // 
			   // AFFICHAGE_STAT
			   // 
			   this->AFFICHAGE_STAT->BackgroundColor = System::Drawing::SystemColors::Control;
			   this->AFFICHAGE_STAT->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->AFFICHAGE_STAT->Location = System::Drawing::Point(94, 556);
			   this->AFFICHAGE_STAT->Name = L"AFFICHAGE_STAT";
			   this->AFFICHAGE_STAT->Size = System::Drawing::Size(772, 128);
			   this->AFFICHAGE_STAT->TabIndex = 314;
			   // 
			   // TXT_MARGE_10
			   // 
			   this->TXT_MARGE_10->BackColor = System::Drawing::SystemColors::Desktop;
			   this->TXT_MARGE_10->ForeColor = System::Drawing::SystemColors::Window;
			   this->TXT_MARGE_10->Location = System::Drawing::Point(842, 464);
			   this->TXT_MARGE_10->Name = L"TXT_MARGE_10";
			   this->TXT_MARGE_10->Size = System::Drawing::Size(100, 20);
			   this->TXT_MARGE_10->TabIndex = 315;
			   // 
			   // TXT_TVA_10
			   // 
			   this->TXT_TVA_10->BackColor = System::Drawing::SystemColors::Desktop;
			   this->TXT_TVA_10->ForeColor = System::Drawing::SystemColors::Window;
			   this->TXT_TVA_10->Location = System::Drawing::Point(736, 464);
			   this->TXT_TVA_10->Name = L"TXT_TVA_10";
			   this->TXT_TVA_10->Size = System::Drawing::Size(100, 20);
			   this->TXT_TVA_10->TabIndex = 316;
			   // 
			   // TXT_VALEUR__REQUETE_RETOUR
			   // 
			   this->TXT_VALEUR__REQUETE_RETOUR->Location = System::Drawing::Point(872, 579);
			   this->TXT_VALEUR__REQUETE_RETOUR->Name = L"TXT_VALEUR__REQUETE_RETOUR";
			   this->TXT_VALEUR__REQUETE_RETOUR->Size = System::Drawing::Size(291, 20);
			   this->TXT_VALEUR__REQUETE_RETOUR->TabIndex = 317;
			   // 
			   // LABEL_REQUETE_RETOUR_NUM
			   // 
			   this->LABEL_REQUETE_RETOUR_NUM->AutoSize = true;
			   this->LABEL_REQUETE_RETOUR_NUM->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_REQUETE_RETOUR_NUM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_REQUETE_RETOUR_NUM->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_REQUETE_RETOUR_NUM->Location = System::Drawing::Point(868, 556);
			   this->LABEL_REQUETE_RETOUR_NUM->Name = L"LABEL_REQUETE_RETOUR_NUM";
			   this->LABEL_REQUETE_RETOUR_NUM->Size = System::Drawing::Size(242, 20);
			   this->LABEL_REQUETE_RETOUR_NUM->TabIndex = 318;
			   this->LABEL_REQUETE_RETOUR_NUM->Text = L"Retour requête valeur numérique";
			   // 
			   // LABEL_DEMANDE_REQUETE
			   // 
			   this->LABEL_DEMANDE_REQUETE->AutoSize = true;
			   this->LABEL_DEMANDE_REQUETE->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_DEMANDE_REQUETE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_DEMANDE_REQUETE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_DEMANDE_REQUETE->Location = System::Drawing::Point(90, 496);
			   this->LABEL_DEMANDE_REQUETE->Name = L"LABEL_DEMANDE_REQUETE";
			   this->LABEL_DEMANDE_REQUETE->Size = System::Drawing::Size(203, 20);
			   this->LABEL_DEMANDE_REQUETE->TabIndex = 319;
			   this->LABEL_DEMANDE_REQUETE->Text = L"Indiquez la requête voulue :";
			   // 
			   // LABEL_INDICATION_10
			   // 
			   this->LABEL_INDICATION_10->AutoSize = true;
			   this->LABEL_INDICATION_10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LABEL_INDICATION_10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_INDICATION_10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_INDICATION_10->Location = System::Drawing::Point(756, 490);
			   this->LABEL_INDICATION_10->Name = L"LABEL_INDICATION_10";
			   this->LABEL_INDICATION_10->Size = System::Drawing::Size(407, 20);
			   this->LABEL_INDICATION_10->TabIndex = 320;
			   this->LABEL_INDICATION_10->Text = L"(TVA/MargeComerciale/RemiseCommerciale/Démarque)";
			   // 
			   // GestionStatistiques
			   // 
			   this->ClientSize = System::Drawing::Size(1256, 725);
			   this->Controls->Add(this->LABEL_INDICATION_10);
			   this->Controls->Add(this->LABEL_DEMANDE_REQUETE);
			   this->Controls->Add(this->LABEL_REQUETE_RETOUR_NUM);
			   this->Controls->Add(this->TXT_VALEUR__REQUETE_RETOUR);
			   this->Controls->Add(this->TXT_TVA_10);
			   this->Controls->Add(this->TXT_MARGE_10);
			   this->Controls->Add(this->AFFICHAGE_STAT);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->LABEL_CONSIGNE_MOIS);
			   this->Controls->Add(this->TXT_DEMARQUE_10);
			   this->Controls->Add(this->LABEL_SIMUL_AVEC_ARG);
			   this->Controls->Add(this->LABEL_SIMUL_SANS_ARG);
			   this->Controls->Add(this->BACKGROUND_TEXT_9);
			   this->Controls->Add(this->LABEL_ACHAT_STOCK);
			   this->Controls->Add(this->BACKG_8);
			   this->Controls->Add(this->LABEL_VAL_STOCK_COMMERCIAL);
			   this->Controls->Add(this->BACKGROUND_TEXT_7);
			   this->Controls->Add(this->IDENTIFIER_MIN_10);
			   this->Controls->Add(this->BACKGROUND_TEXT_6);
			   this->Controls->Add(this->TXT_REMISE_10);
			   this->Controls->Add(this->LABEL_MAX_10);
			   this->Controls->Add(this->BACKGROUND_TEXT_5);
			   this->Controls->Add(this->TXT_ID_CLI_4);
			   this->Controls->Add(this->LABEL_ACHAT_CLIENT);
			   this->Controls->Add(this->BACKGROUND_TEXT_4);
			   this->Controls->Add(this->LABEL_IDENTIFIER_SEUIL);
			   this->Controls->Add(this->BACKGROUND_TEXT_3);
			   this->Controls->Add(this->TXT_INT_MOIS_2);
			   this->Controls->Add(this->LABEL_CALCUL_CA);
			   this->Controls->Add(this->BACKGROUND_TEXT_2);
			   this->Controls->Add(this->SELECTEUR_VAL);
			   this->Controls->Add(this->LABEL_PANIER_MOY);
			   this->Controls->Add(this->LOGO);
			   this->Controls->Add(this->RETURN_STATS_HOME);
			   this->Controls->Add(this->NomApp);
			   this->Controls->Add(this->BarreNoir);
			   this->Controls->Add(this->TITRE_STATISTIQUES);
			   this->Controls->Add(this->BOUTON_AFFICHER_STAT);
			   this->Controls->Add(this->label40);
			   this->Controls->Add(this->pictureBox3);
			   this->Controls->Add(this->BACKGROUND_TEXT_10);
			   this->Controls->Add(this->BACKGROUND_TEXT_8);
			   this->Controls->Add(this->BACKGROUND_TEXT_1);
			   this->Name = L"GestionStatistiques";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			   this->Load += gcnew System::EventHandler(this, &GestionStatistiques::GestionStatistiques_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_8))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_4))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_5))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_6))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_7))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKG_8))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_9))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_TEXT_10))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHAGE_STAT))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }



#pragma endregion
	private: System::Void SELECTEUR_VAL_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
	}

	private: System::Void GestionStatistiques_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
	}
	private: System::Void RETURN_STATS_HOME_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		ObjetStat->Show();
	}

	private: System::Void BOUTON_AFFICHER_STAT_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int Val = Convert::ToInt32(this->SELECTEUR_VAL->Text);

		// Je met ici toutes les récupérations de valeurs :

		if (Val == 1)
		{
			this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
			this->AFFICHAGE_STAT->Refresh();
			this->oDs = this->oSvc_Stat->Calcul_Panier_Moyen("Rsl");
			this->AFFICHAGE_STAT->DataSource = this->oDs;
			this->AFFICHAGE_STAT->DataMember = "Rsl";
		}
		else if (Val == 2)
		{
			int Stat_Mois = Convert::ToInt32(this->TXT_INT_MOIS_2->Text);

			this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
			this->AFFICHAGE_STAT->Refresh();
			this->oDs = this->oSvc_Stat->Calcul_Chiffre_Affaire_Mois("Rsl", Stat_Mois);
			this->AFFICHAGE_STAT->DataSource = this->oDs;
			this->AFFICHAGE_STAT->DataMember = "Rsl";
		}
		else if (Val == 3)
		{
			this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
			this->AFFICHAGE_STAT->Refresh();
			this->oDs = this->oSvc_Stat->Produit_Reaprovisionnement("Rsl");
			this->AFFICHAGE_STAT->DataSource = this->oDs;
			this->AFFICHAGE_STAT->DataMember = "Rsl";
		}
		else if (Val == 4)
		{
			int Stat_ID_Client = Convert::ToInt32(this->TXT_ID_CLI_4->Text);
			
			this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
			this->AFFICHAGE_STAT->Refresh();
			this->oDs = this->oSvc_Stat->Total_Achat_Client("Rsl", Stat_ID_Client);
			this->AFFICHAGE_STAT->DataSource = this->oDs;
			this->AFFICHAGE_STAT->DataMember = "Rsl";
		}
		else if (Val == 5)
		{
			this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
			this->AFFICHAGE_STAT->Refresh();
			this->oDs = this->oSvc_Stat->Article_Plus_Vendu("Rsl");
			this->AFFICHAGE_STAT->DataSource = this->oDs;
			this->AFFICHAGE_STAT->DataMember = "Rsl";
		}
		else if (Val == 6)
		{
			this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
			this->AFFICHAGE_STAT->Refresh();
			this->oDs = this->oSvc_Stat->Article_Moins_Vendu("Rsl");
			this->AFFICHAGE_STAT->DataSource = this->oDs;
			this->AFFICHAGE_STAT->DataMember = "Rsl";
		}
		else if (Val == 7)
		{
			this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
			this->AFFICHAGE_STAT->Refresh();
			this->oDs = this->oSvc_Stat->Valeur_Commercial_Stock("Rsl");
			this->AFFICHAGE_STAT->DataSource = this->oDs;
			this->AFFICHAGE_STAT->DataMember = "Rsl";
		}
		else if (Val == 8)
		{
			this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
			this->AFFICHAGE_STAT->Refresh();
			this->oDs = this->oSvc_Stat->Valeur_Achat_Stock("Rsl");
			this->AFFICHAGE_STAT->DataSource = this->oDs;
			this->AFFICHAGE_STAT->DataMember = "Rsl";
		}
		else if (Val == 9)
		{
			this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
			this->AFFICHAGE_STAT->Refresh();
			this->oDs = this->oSvc_Stat->Variations_Valeurs_Commerciales("Rsl");
			this->AFFICHAGE_STAT->DataSource = this->oDs;
			this->AFFICHAGE_STAT->DataMember = "Rsl";
		}
		else if (Val == 10)
		{
			float Stat_TVA = Convert::ToSingle(this->TXT_TVA_10->Text);
			float Stat_Marge = Convert::ToSingle(this->TXT_MARGE_10->Text);
			float Stat_Remise = Convert::ToSingle(this->TXT_REMISE_10->Text);
			float Stat_Demarque = Convert::ToSingle(this->TXT_DEMARQUE_10->Text);

			this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
			this->AFFICHAGE_STAT->Refresh();
			this->oDs = this->oSvc_Stat->Variations_Valeurs_Commerciales_Valeur("Rsl", Stat_TVA, Stat_Marge, Stat_Remise, Stat_Demarque);
			this->AFFICHAGE_STAT->DataSource = this->oDs;
			this->AFFICHAGE_STAT->DataMember = "Rsl";
		}


	}

	};
}

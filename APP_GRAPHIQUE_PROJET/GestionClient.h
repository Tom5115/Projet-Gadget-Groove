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
	public ref class GestionClient : public System::Windows::Forms::Form
	{
	public:
		Form^ ObjetClient;
		GestionClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

		GestionClient(Form^ Objet)
		{
			ObjetClient = Objet;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		bool check_client_ID_entry();
		bool check_client_name_entry();
		bool check_client_surname_entry();
		bool check_client_mail_entry();
		bool check_client_ville_entry();
	    bool check_client_rue_entry();
		bool check_client_code_postal_entry();
		bool check_client_name_building_entry();
		bool check_client_floor_entry();

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionClient()
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ NomApp;



	private: System::Windows::Forms::PictureBox^ BarreNoir;
	private: System::Windows::Forms::Button^ RETURN_CLIENT_HOME;




	private: System::Windows::Forms::PictureBox^ LOGO;
	private: System::Windows::Forms::Label^ LABEL_NOM_CLIENT;
	private: System::Windows::Forms::Label^ LABEL_PRENOM_CLIENT;



	private: System::Windows::Forms::Label^ TITRE_CLIENT;
	private: System::Windows::Forms::Button^ BOUTON_ADD_CLIENT;
	private: System::Windows::Forms::Label^ LABEL_ID_CLIENT;


	private: System::Windows::Forms::Label^ LABEL_BD_CLIENT;
	private: System::Windows::Forms::Label^ LABEL_ETAGE_CLIENT;



	private: System::Windows::Forms::Label^ LABEL_BAT_CLIENT;
	private: System::Windows::Forms::Button^ BOUTON_AFF_CLIENT;
	private: System::Windows::Forms::TextBox^ TXT_NOM_CLIENT;
	private: System::Windows::Forms::TextBox^ TXT_RUE_CLIENT;


	private: System::Windows::Forms::Label^ LABEL_MAIL_CLIENT;

	private: System::Windows::Forms::Label^ LABEL_VILLE_CLIENT;
	private: System::Windows::Forms::TextBox^ TXT_CP_CLIENT;


	private: System::Windows::Forms::Button^ BOUTON_SUPP_CLIENT;
	private: System::Windows::Forms::TextBox^ TXT_PRENOM_CLIENT;


	private: System::Windows::Forms::TextBox^ TXT_ID_CLIENT;
	private: System::Windows::Forms::DateTimePicker^ TXT_BD_CLIENT;
	private: System::Windows::Forms::TextBox^ TXT_VILLE_CLIENT;



	private: System::Windows::Forms::Label^ LABEL_CP_CLIENT;
	private: System::Windows::Forms::Button^ BOUTON_MODIF_CLIENT;
	private: System::Windows::Forms::TextBox^ TXT_BAT_CLIENT;
	private: System::Windows::Forms::Label^ LABEL_RUE_CLIENT;



	private: System::Windows::Forms::TextBox^ TXT_MAIL_CLIENT;
	private: System::Windows::Forms::TextBox^ TXT_ETAGE_CLIENT;



	private: System::Windows::Forms::PictureBox^ BACKGROUND_ZONE_TEXTE;
	private: System::Windows::Forms::DataGridView^ AFFICHAGE_CLIENT;



	private: System::Windows::Forms::Button^ BOUTON_CLEAR_CLIENT;


	private: System::Windows::Forms::PictureBox^ BACKGROUND_CLIENTS;

	private: NS_Comp_Svc::CLservices_Client^ oSvc_Client;
	private: System::Data::DataSet^ oDs;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionClient::typeid));
			   this->NomApp = (gcnew System::Windows::Forms::Label());
			   this->BarreNoir = (gcnew System::Windows::Forms::PictureBox());
			   this->RETURN_CLIENT_HOME = (gcnew System::Windows::Forms::Button());
			   this->LOGO = (gcnew System::Windows::Forms::PictureBox());
			   this->BACKGROUND_CLIENTS = (gcnew System::Windows::Forms::PictureBox());
			   this->LABEL_NOM_CLIENT = (gcnew System::Windows::Forms::Label());
			   this->LABEL_PRENOM_CLIENT = (gcnew System::Windows::Forms::Label());
			   this->TITRE_CLIENT = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_ADD_CLIENT = (gcnew System::Windows::Forms::Button());
			   this->LABEL_ID_CLIENT = (gcnew System::Windows::Forms::Label());
			   this->LABEL_BD_CLIENT = (gcnew System::Windows::Forms::Label());
			   this->LABEL_ETAGE_CLIENT = (gcnew System::Windows::Forms::Label());
			   this->LABEL_BAT_CLIENT = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_AFF_CLIENT = (gcnew System::Windows::Forms::Button());
			   this->TXT_NOM_CLIENT = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_RUE_CLIENT = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_MAIL_CLIENT = (gcnew System::Windows::Forms::Label());
			   this->LABEL_VILLE_CLIENT = (gcnew System::Windows::Forms::Label());
			   this->TXT_CP_CLIENT = (gcnew System::Windows::Forms::TextBox());
			   this->BOUTON_SUPP_CLIENT = (gcnew System::Windows::Forms::Button());
			   this->TXT_PRENOM_CLIENT = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_ID_CLIENT = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_BD_CLIENT = (gcnew System::Windows::Forms::DateTimePicker());
			   this->TXT_VILLE_CLIENT = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_CP_CLIENT = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_MODIF_CLIENT = (gcnew System::Windows::Forms::Button());
			   this->TXT_BAT_CLIENT = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_RUE_CLIENT = (gcnew System::Windows::Forms::Label());
			   this->TXT_MAIL_CLIENT = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_ETAGE_CLIENT = (gcnew System::Windows::Forms::TextBox());
			   this->BACKGROUND_ZONE_TEXTE = (gcnew System::Windows::Forms::PictureBox());
			   this->AFFICHAGE_CLIENT = (gcnew System::Windows::Forms::DataGridView());
			   this->BOUTON_CLEAR_CLIENT = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_CLIENTS))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_ZONE_TEXTE))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHAGE_CLIENT))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // NomApp
			   // 
			   this->NomApp->AutoSize = true;
			   this->NomApp->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->NomApp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NomApp->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->NomApp->Location = System::Drawing::Point(66, 4);
			   this->NomApp->Name = L"NomApp";
			   this->NomApp->Size = System::Drawing::Size(434, 74);
			   this->NomApp->TabIndex = 2;
			   this->NomApp->Text = L"| Gestion Client";
			   // 
			   // BarreNoir
			   // 
			   this->BarreNoir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->BarreNoir->Location = System::Drawing::Point(-3, 0);
			   this->BarreNoir->Name = L"BarreNoir";
			   this->BarreNoir->Size = System::Drawing::Size(1291, 69);
			   this->BarreNoir->TabIndex = 3;
			   this->BarreNoir->TabStop = false;
			   // 
			   // RETURN_CLIENT_HOME
			   // 
			   this->RETURN_CLIENT_HOME->BackColor = System::Drawing::Color::Transparent;
			   this->RETURN_CLIENT_HOME->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RETURN_CLIENT_HOME.BackgroundImage")));
			   this->RETURN_CLIENT_HOME->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->RETURN_CLIENT_HOME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			   this->RETURN_CLIENT_HOME->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->RETURN_CLIENT_HOME->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RETURN_CLIENT_HOME.Image")));
			   this->RETURN_CLIENT_HOME->Location = System::Drawing::Point(1138, 12);
			   this->RETURN_CLIENT_HOME->Name = L"RETURN_CLIENT_HOME";
			   this->RETURN_CLIENT_HOME->Size = System::Drawing::Size(106, 48);
			   this->RETURN_CLIENT_HOME->TabIndex = 44;
			   this->RETURN_CLIENT_HOME->Text = L"RETOUR";
			   this->RETURN_CLIENT_HOME->UseVisualStyleBackColor = false;
			   this->RETURN_CLIENT_HOME->Click += gcnew System::EventHandler(this, &GestionClient::RETURN_CLIENTS_HOME_Click);
			   // 
			   // LOGO
			   // 
			   this->LOGO->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LOGO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LOGO.Image")));
			   this->LOGO->Location = System::Drawing::Point(13, 14);
			   this->LOGO->Name = L"LOGO";
			   this->LOGO->Size = System::Drawing::Size(50, 40);
			   this->LOGO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->LOGO->TabIndex = 47;
			   this->LOGO->TabStop = false;
			   // 
			   // BACKGROUND_CLIENTS
			   // 
			   this->BACKGROUND_CLIENTS->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BACKGROUND_CLIENTS.Image")));
			   this->BACKGROUND_CLIENTS->Location = System::Drawing::Point(-3, 52);
			   this->BACKGROUND_CLIENTS->Name = L"BACKGROUND_CLIENTS";
			   this->BACKGROUND_CLIENTS->Size = System::Drawing::Size(1273, 687);
			   this->BACKGROUND_CLIENTS->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->BACKGROUND_CLIENTS->TabIndex = 46;
			   this->BACKGROUND_CLIENTS->TabStop = false;
			   // 
			   // LABEL_NOM_CLIENT
			   // 
			   this->LABEL_NOM_CLIENT->AutoSize = true;
			   this->LABEL_NOM_CLIENT->BackColor = System::Drawing::Color::Black;
			   this->LABEL_NOM_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_NOM_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_NOM_CLIENT->Location = System::Drawing::Point(94, 244);
			   this->LABEL_NOM_CLIENT->Name = L"LABEL_NOM_CLIENT";
			   this->LABEL_NOM_CLIENT->Size = System::Drawing::Size(68, 29);
			   this->LABEL_NOM_CLIENT->TabIndex = 52;
			   this->LABEL_NOM_CLIENT->Text = L"Nom";
			   // 
			   // LABEL_PRENOM_CLIENT
			   // 
			   this->LABEL_PRENOM_CLIENT->AutoSize = true;
			   this->LABEL_PRENOM_CLIENT->BackColor = System::Drawing::Color::Black;
			   this->LABEL_PRENOM_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_PRENOM_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_PRENOM_CLIENT->Location = System::Drawing::Point(97, 312);
			   this->LABEL_PRENOM_CLIENT->Name = L"LABEL_PRENOM_CLIENT";
			   this->LABEL_PRENOM_CLIENT->Size = System::Drawing::Size(104, 29);
			   this->LABEL_PRENOM_CLIENT->TabIndex = 53;
			   this->LABEL_PRENOM_CLIENT->Text = L"Prénom";
			   // 
			   // TITRE_CLIENT
			   // 
			   this->TITRE_CLIENT->AutoSize = true;
			   this->TITRE_CLIENT->BackColor = System::Drawing::Color::Black;
			   this->TITRE_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TITRE_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->TITRE_CLIENT->Location = System::Drawing::Point(91, 136);
			   this->TITRE_CLIENT->Name = L"TITRE_CLIENT";
			   this->TITRE_CLIENT->Size = System::Drawing::Size(370, 29);
			   this->TITRE_CLIENT->TabIndex = 62;
			   this->TITRE_CLIENT->Text = L"CARACTERISTIQUES CLIENT";
			   // 
			   // BOUTON_ADD_CLIENT
			   // 
			   this->BOUTON_ADD_CLIENT->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_ADD_CLIENT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_ADD_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->BOUTON_ADD_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_ADD_CLIENT->Location = System::Drawing::Point(95, 589);
			   this->BOUTON_ADD_CLIENT->Name = L"BOUTON_ADD_CLIENT";
			   this->BOUTON_ADD_CLIENT->Size = System::Drawing::Size(138, 53);
			   this->BOUTON_ADD_CLIENT->TabIndex = 48;
			   this->BOUTON_ADD_CLIENT->Text = L"AJOUTER CLIENT";
			   this->BOUTON_ADD_CLIENT->UseVisualStyleBackColor = false;
			   this->BOUTON_ADD_CLIENT->Click += gcnew System::EventHandler(this, &GestionClient::BOUTON_ADD_CLIENT_Click);
			   // 
			   // LABEL_ID_CLIENT
			   // 
			   this->LABEL_ID_CLIENT->AutoSize = true;
			   this->LABEL_ID_CLIENT->BackColor = System::Drawing::Color::Black;
			   this->LABEL_ID_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_ID_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_ID_CLIENT->Location = System::Drawing::Point(91, 169);
			   this->LABEL_ID_CLIENT->Name = L"LABEL_ID_CLIENT";
			   this->LABEL_ID_CLIENT->Size = System::Drawing::Size(108, 29);
			   this->LABEL_ID_CLIENT->TabIndex = 76;
			   this->LABEL_ID_CLIENT->Text = L"ID client";
			   // 
			   // LABEL_BD_CLIENT
			   // 
			   this->LABEL_BD_CLIENT->AutoSize = true;
			   this->LABEL_BD_CLIENT->BackColor = System::Drawing::Color::Black;
			   this->LABEL_BD_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_BD_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_BD_CLIENT->Location = System::Drawing::Point(94, 385);
			   this->LABEL_BD_CLIENT->Name = L"LABEL_BD_CLIENT";
			   this->LABEL_BD_CLIENT->Size = System::Drawing::Size(228, 29);
			   this->LABEL_BD_CLIENT->TabIndex = 55;
			   this->LABEL_BD_CLIENT->Text = L"Date de naissance";
			   // 
			   // LABEL_ETAGE_CLIENT
			   // 
			   this->LABEL_ETAGE_CLIENT->AutoSize = true;
			   this->LABEL_ETAGE_CLIENT->BackColor = System::Drawing::Color::Black;
			   this->LABEL_ETAGE_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_ETAGE_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_ETAGE_CLIENT->Location = System::Drawing::Point(418, 462);
			   this->LABEL_ETAGE_CLIENT->Name = L"LABEL_ETAGE_CLIENT";
			   this->LABEL_ETAGE_CLIENT->Size = System::Drawing::Size(81, 29);
			   this->LABEL_ETAGE_CLIENT->TabIndex = 64;
			   this->LABEL_ETAGE_CLIENT->Text = L"Etage";
			   // 
			   // LABEL_BAT_CLIENT
			   // 
			   this->LABEL_BAT_CLIENT->AutoSize = true;
			   this->LABEL_BAT_CLIENT->BackColor = System::Drawing::Color::Black;
			   this->LABEL_BAT_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_BAT_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_BAT_CLIENT->Location = System::Drawing::Point(417, 385);
			   this->LABEL_BAT_CLIENT->Name = L"LABEL_BAT_CLIENT";
			   this->LABEL_BAT_CLIENT->Size = System::Drawing::Size(177, 29);
			   this->LABEL_BAT_CLIENT->TabIndex = 63;
			   this->LABEL_BAT_CLIENT->Text = L"Nom Batiment";
			   // 
			   // BOUTON_AFF_CLIENT
			   // 
			   this->BOUTON_AFF_CLIENT->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_AFF_CLIENT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_AFF_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->BOUTON_AFF_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_AFF_CLIENT->Location = System::Drawing::Point(573, 589);
			   this->BOUTON_AFF_CLIENT->Name = L"BOUTON_AFF_CLIENT";
			   this->BOUTON_AFF_CLIENT->Size = System::Drawing::Size(151, 53);
			   this->BOUTON_AFF_CLIENT->TabIndex = 99;
			   this->BOUTON_AFF_CLIENT->Text = L"AFFICHAGE CLIENT";
			   this->BOUTON_AFF_CLIENT->UseVisualStyleBackColor = false;
			   this->BOUTON_AFF_CLIENT->Click += gcnew System::EventHandler(this, &GestionClient::BOUTON_AFF_CLIENT_Click);
			   // 
			   // TXT_NOM_CLIENT
			   // 
			   this->TXT_NOM_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_NOM_CLIENT->Location = System::Drawing::Point(95, 267);
			   this->TXT_NOM_CLIENT->Name = L"TXT_NOM_CLIENT";
			   this->TXT_NOM_CLIENT->Size = System::Drawing::Size(286, 35);
			   this->TXT_NOM_CLIENT->TabIndex = 49;
			   // 
			   // TXT_RUE_CLIENT
			   // 
			   this->TXT_RUE_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_RUE_CLIENT->Location = System::Drawing::Point(419, 196);
			   this->TXT_RUE_CLIENT->Name = L"TXT_RUE_CLIENT";
			   this->TXT_RUE_CLIENT->Size = System::Drawing::Size(303, 30);
			   this->TXT_RUE_CLIENT->TabIndex = 59;
			   // 
			   // LABEL_MAIL_CLIENT
			   // 
			   this->LABEL_MAIL_CLIENT->AutoSize = true;
			   this->LABEL_MAIL_CLIENT->BackColor = System::Drawing::Color::Black;
			   this->LABEL_MAIL_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_MAIL_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_MAIL_CLIENT->Location = System::Drawing::Point(94, 462);
			   this->LABEL_MAIL_CLIENT->Name = L"LABEL_MAIL_CLIENT";
			   this->LABEL_MAIL_CLIENT->Size = System::Drawing::Size(88, 29);
			   this->LABEL_MAIL_CLIENT->TabIndex = 103;
			   this->LABEL_MAIL_CLIENT->Text = L"E-mail";
			   // 
			   // LABEL_VILLE_CLIENT
			   // 
			   this->LABEL_VILLE_CLIENT->AutoSize = true;
			   this->LABEL_VILLE_CLIENT->BackColor = System::Drawing::Color::Black;
			   this->LABEL_VILLE_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_VILLE_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_VILLE_CLIENT->Location = System::Drawing::Point(417, 312);
			   this->LABEL_VILLE_CLIENT->Name = L"LABEL_VILLE_CLIENT";
			   this->LABEL_VILLE_CLIENT->Size = System::Drawing::Size(65, 29);
			   this->LABEL_VILLE_CLIENT->TabIndex = 60;
			   this->LABEL_VILLE_CLIENT->Text = L"Ville";
			   // 
			   // TXT_CP_CLIENT
			   // 
			   this->TXT_CP_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_CP_CLIENT->Location = System::Drawing::Point(420, 267);
			   this->TXT_CP_CLIENT->Name = L"TXT_CP_CLIENT";
			   this->TXT_CP_CLIENT->Size = System::Drawing::Size(302, 35);
			   this->TXT_CP_CLIENT->TabIndex = 57;
			   // 
			   // BOUTON_SUPP_CLIENT
			   // 
			   this->BOUTON_SUPP_CLIENT->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_SUPP_CLIENT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_SUPP_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->BOUTON_SUPP_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_SUPP_CLIENT->Location = System::Drawing::Point(239, 589);
			   this->BOUTON_SUPP_CLIENT->Name = L"BOUTON_SUPP_CLIENT";
			   this->BOUTON_SUPP_CLIENT->Size = System::Drawing::Size(142, 53);
			   this->BOUTON_SUPP_CLIENT->TabIndex = 95;
			   this->BOUTON_SUPP_CLIENT->Text = L"SUPPRIMER CLIENT";
			   this->BOUTON_SUPP_CLIENT->UseVisualStyleBackColor = false;
			   this->BOUTON_SUPP_CLIENT->Click += gcnew System::EventHandler(this, &GestionClient::BOUTON_SUPP_CLIENT_Click);
			   // 
			   // TXT_PRENOM_CLIENT
			   // 
			   this->TXT_PRENOM_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_PRENOM_CLIENT->Location = System::Drawing::Point(95, 335);
			   this->TXT_PRENOM_CLIENT->Name = L"TXT_PRENOM_CLIENT";
			   this->TXT_PRENOM_CLIENT->Size = System::Drawing::Size(286, 35);
			   this->TXT_PRENOM_CLIENT->TabIndex = 50;
			   // 
			   // TXT_ID_CLIENT
			   // 
			   this->TXT_ID_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_ID_CLIENT->Location = System::Drawing::Point(95, 192);
			   this->TXT_ID_CLIENT->Name = L"TXT_ID_CLIENT";
			   this->TXT_ID_CLIENT->Size = System::Drawing::Size(286, 35);
			   this->TXT_ID_CLIENT->TabIndex = 77;
			   // 
			   // TXT_BD_CLIENT
			   // 
			   this->TXT_BD_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_BD_CLIENT->Location = System::Drawing::Point(95, 408);
			   this->TXT_BD_CLIENT->Name = L"TXT_BD_CLIENT";
			   this->TXT_BD_CLIENT->Size = System::Drawing::Size(286, 35);
			   this->TXT_BD_CLIENT->TabIndex = 54;
			   // 
			   // TXT_VILLE_CLIENT
			   // 
			   this->TXT_VILLE_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_VILLE_CLIENT->Location = System::Drawing::Point(419, 335);
			   this->TXT_VILLE_CLIENT->Name = L"TXT_VILLE_CLIENT";
			   this->TXT_VILLE_CLIENT->Size = System::Drawing::Size(302, 35);
			   this->TXT_VILLE_CLIENT->TabIndex = 67;
			   // 
			   // LABEL_CP_CLIENT
			   // 
			   this->LABEL_CP_CLIENT->AutoSize = true;
			   this->LABEL_CP_CLIENT->BackColor = System::Drawing::Color::Black;
			   this->LABEL_CP_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_CP_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_CP_CLIENT->Location = System::Drawing::Point(417, 244);
			   this->LABEL_CP_CLIENT->Name = L"LABEL_CP_CLIENT";
			   this->LABEL_CP_CLIENT->Size = System::Drawing::Size(156, 29);
			   this->LABEL_CP_CLIENT->TabIndex = 58;
			   this->LABEL_CP_CLIENT->Text = L"Code Postal";
			   // 
			   // BOUTON_MODIF_CLIENT
			   // 
			   this->BOUTON_MODIF_CLIENT->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_MODIF_CLIENT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_MODIF_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->BOUTON_MODIF_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_MODIF_CLIENT->Location = System::Drawing::Point(421, 589);
			   this->BOUTON_MODIF_CLIENT->Name = L"BOUTON_MODIF_CLIENT";
			   this->BOUTON_MODIF_CLIENT->Size = System::Drawing::Size(146, 53);
			   this->BOUTON_MODIF_CLIENT->TabIndex = 109;
			   this->BOUTON_MODIF_CLIENT->Text = L"MODIFIER CLIENT";
			   this->BOUTON_MODIF_CLIENT->UseVisualStyleBackColor = false;
			   this->BOUTON_MODIF_CLIENT->Click += gcnew System::EventHandler(this, &GestionClient::BOUTON_MODIF_CLIENT_Click);
			   // 
			   // TXT_BAT_CLIENT
			   // 
			   this->TXT_BAT_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_BAT_CLIENT->Location = System::Drawing::Point(420, 408);
			   this->TXT_BAT_CLIENT->Name = L"TXT_BAT_CLIENT";
			   this->TXT_BAT_CLIENT->Size = System::Drawing::Size(302, 35);
			   this->TXT_BAT_CLIENT->TabIndex = 61;
			   // 
			   // LABEL_RUE_CLIENT
			   // 
			   this->LABEL_RUE_CLIENT->AutoSize = true;
			   this->LABEL_RUE_CLIENT->BackColor = System::Drawing::Color::Black;
			   this->LABEL_RUE_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_RUE_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_RUE_CLIENT->Location = System::Drawing::Point(417, 172);
			   this->LABEL_RUE_CLIENT->Name = L"LABEL_RUE_CLIENT";
			   this->LABEL_RUE_CLIENT->Size = System::Drawing::Size(60, 29);
			   this->LABEL_RUE_CLIENT->TabIndex = 56;
			   this->LABEL_RUE_CLIENT->Text = L"Rue";
			   // 
			   // TXT_MAIL_CLIENT
			   // 
			   this->TXT_MAIL_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_MAIL_CLIENT->Location = System::Drawing::Point(95, 485);
			   this->TXT_MAIL_CLIENT->Name = L"TXT_MAIL_CLIENT";
			   this->TXT_MAIL_CLIENT->Size = System::Drawing::Size(286, 35);
			   this->TXT_MAIL_CLIENT->TabIndex = 111;
			   // 
			   // TXT_ETAGE_CLIENT
			   // 
			   this->TXT_ETAGE_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_ETAGE_CLIENT->Location = System::Drawing::Point(421, 485);
			   this->TXT_ETAGE_CLIENT->Name = L"TXT_ETAGE_CLIENT";
			   this->TXT_ETAGE_CLIENT->Size = System::Drawing::Size(303, 35);
			   this->TXT_ETAGE_CLIENT->TabIndex = 104;
			   // 
			   // BACKGROUND_ZONE_TEXTE
			   // 
			   this->BACKGROUND_ZONE_TEXTE->Location = System::Drawing::Point(75, 116);
			   this->BACKGROUND_ZONE_TEXTE->Name = L"BACKGROUND_ZONE_TEXTE";
			   this->BACKGROUND_ZONE_TEXTE->Size = System::Drawing::Size(683, 550);
			   this->BACKGROUND_ZONE_TEXTE->TabIndex = 112;
			   this->BACKGROUND_ZONE_TEXTE->TabStop = false;
			   // 
			   // AFFICHAGE_CLIENT
			   // 
			   this->AFFICHAGE_CLIENT->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->AFFICHAGE_CLIENT->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->AFFICHAGE_CLIENT->Location = System::Drawing::Point(774, 116);
			   this->AFFICHAGE_CLIENT->Name = L"AFFICHAGE_CLIENT";
			   this->AFFICHAGE_CLIENT->RowHeadersWidth = 62;
			   this->AFFICHAGE_CLIENT->Size = System::Drawing::Size(412, 550);
			   this->AFFICHAGE_CLIENT->TabIndex = 113;
			   // 
			   // BOUTON_CLEAR_CLIENT
			   // 
			   this->BOUTON_CLEAR_CLIENT->BackColor = System::Drawing::Color::DarkRed;
			   this->BOUTON_CLEAR_CLIENT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_CLEAR_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_CLEAR_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_CLEAR_CLIENT->Location = System::Drawing::Point(573, 133);
			   this->BOUTON_CLEAR_CLIENT->Name = L"BOUTON_CLEAR_CLIENT";
			   this->BOUTON_CLEAR_CLIENT->Size = System::Drawing::Size(151, 23);
			   this->BOUTON_CLEAR_CLIENT->TabIndex = 116;
			   this->BOUTON_CLEAR_CLIENT->Text = L"CLEAR";
			   this->BOUTON_CLEAR_CLIENT->UseVisualStyleBackColor = false;
			   this->BOUTON_CLEAR_CLIENT->Click += gcnew System::EventHandler(this, &GestionClient::BOUTON_CLEAR_CLIENT_Click);
			   // 
			   // GestionClient
			   // 
			   this->ClientSize = System::Drawing::Size(1256, 725);
			   this->Controls->Add(this->BOUTON_CLEAR_CLIENT);
			   this->Controls->Add(this->AFFICHAGE_CLIENT);
			   this->Controls->Add(this->TXT_MAIL_CLIENT);
			   this->Controls->Add(this->TXT_ETAGE_CLIENT);
			   this->Controls->Add(this->LOGO);
			   this->Controls->Add(this->TXT_BD_CLIENT);
			   this->Controls->Add(this->RETURN_CLIENT_HOME);
			   this->Controls->Add(this->TXT_BAT_CLIENT);
			   this->Controls->Add(this->NomApp);
			   this->Controls->Add(this->TXT_VILLE_CLIENT);
			   this->Controls->Add(this->BarreNoir);
			   this->Controls->Add(this->TXT_PRENOM_CLIENT);
			   this->Controls->Add(this->TXT_NOM_CLIENT);
			   this->Controls->Add(this->TXT_CP_CLIENT);
			   this->Controls->Add(this->TITRE_CLIENT);
			   this->Controls->Add(this->TXT_RUE_CLIENT);
			   this->Controls->Add(this->LABEL_NOM_CLIENT);
			   this->Controls->Add(this->TXT_ID_CLIENT);
			   this->Controls->Add(this->LABEL_PRENOM_CLIENT);
			   this->Controls->Add(this->BOUTON_ADD_CLIENT);
			   this->Controls->Add(this->LABEL_ID_CLIENT);
			   this->Controls->Add(this->BOUTON_SUPP_CLIENT);
			   this->Controls->Add(this->LABEL_BD_CLIENT);
			   this->Controls->Add(this->BOUTON_MODIF_CLIENT);
			   this->Controls->Add(this->LABEL_ETAGE_CLIENT);
			   this->Controls->Add(this->BOUTON_AFF_CLIENT);
			   this->Controls->Add(this->LABEL_BAT_CLIENT);
			   this->Controls->Add(this->LABEL_RUE_CLIENT);
			   this->Controls->Add(this->LABEL_MAIL_CLIENT);
			   this->Controls->Add(this->LABEL_CP_CLIENT);
			   this->Controls->Add(this->LABEL_VILLE_CLIENT);
			   this->Controls->Add(this->BACKGROUND_ZONE_TEXTE);
			   this->Controls->Add(this->BACKGROUND_CLIENTS);
			   this->Name = L"GestionClient";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			   this->Load += gcnew System::EventHandler(this, &GestionClient::GestionClient_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_CLIENTS))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_ZONE_TEXTE))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHAGE_CLIENT))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }


#pragma endregion

	private: System::Void GestionClient_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc_Client = gcnew NS_Comp_Svc::CLservices_Client();
		this->oSvc_Client = gcnew NS_Comp_Svc::CLservices_Client();
		this->AFFICHAGE_CLIENT->Refresh();
		this->oDs = this->oSvc_Client->selectionner_Client("Rsl");
		this->AFFICHAGE_CLIENT->DataSource = this->oDs;
		this->AFFICHAGE_CLIENT->DataMember = "Rsl";
	}


		   // Retour vers le home -----------------------------------------------------------------------------------------------------------------
	private: System::Void RETURN_CLIENTS_HOME_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		ObjetClient->Show();

	}

		   // Récolte et actions bouton -----------------------------------------------------------------------------------------------------------

	private: System::Void BOUTON_ADD_CLIENT_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		String^ Client_Nom = this->TXT_NOM_CLIENT->Text;
		String^ Client_Prenom = this->TXT_PRENOM_CLIENT->Text;
		String^ Client_Mail = this->TXT_MAIL_CLIENT->Text;
		DateTime Client_Date_N = DateTime::Parse(this->TXT_BD_CLIENT->Text); // aucune entrée utilisateur donc pas de vérification
		String^ Client_Rue = this->TXT_RUE_CLIENT->Text;
		String^ Client_Code_Postal = this->TXT_CP_CLIENT->Text;
		String^ Client_Ville = this->TXT_VILLE_CLIENT->Text;
		String^ Client_Batiment = this->TXT_BAT_CLIENT->Text;
		int Client_Etage;
		if (this->TXT_ETAGE_CLIENT->Text != "") {
			Client_Etage = Convert::ToInt32(this->TXT_ETAGE_CLIENT->Text);
		}

		bool isNameValid = check_client_name_entry();
        bool isSurnameValid = check_client_surname_entry();
		bool isMailValid = check_client_mail_entry();
		bool isRueValid = check_client_rue_entry();
		bool isCPValid = check_client_code_postal_entry();
		bool isVilleValid = check_client_ville_entry();
		bool isBatimentValid = check_client_name_building_entry();
		bool isEtageValid = check_client_floor_entry();


											
		if (isNameValid & isSurnameValid & isMailValid & isRueValid & isCPValid & isVilleValid & isBatimentValid & isEtageValid) {
			this->oSvc_Client->ajouter_Client(Client_Nom, Client_Prenom, Client_Mail, Client_Date_N, Client_Rue, Client_Code_Postal, Client_Ville, Client_Batiment, Client_Etage);
		}

		// Action à faire
		
		// Vide de la page

		this->AFFICHAGE_CLIENT->Refresh();
		this->oSvc_Client->selectionner_Client("Rsl");
		this->AFFICHAGE_CLIENT->DataSource = this->oDs;
		this->AFFICHAGE_CLIENT->DataMember = "Rsl";

		this->TXT_ID_CLIENT->Text = "";
		this->TXT_NOM_CLIENT->Text = "";
		this->TXT_PRENOM_CLIENT->Text = "";
		this->TXT_BD_CLIENT->Text = "";
		this->TXT_MAIL_CLIENT->Text = "";
		this->TXT_RUE_CLIENT->Text = "";
		this->TXT_CP_CLIENT->Text = "";
		this->TXT_VILLE_CLIENT->Text = "";
		this->TXT_BAT_CLIENT->Text = "";
		this->TXT_ETAGE_CLIENT->Text = "";

	}

	private: System::Void BOUTON_MODIF_CLIENT_Click(System::Object^ sender, System::EventArgs^ e)
	{

		int Client_ID;
		if (this->TXT_ID_CLIENT->Text != "") {
			Client_ID = Convert::ToInt32(this->TXT_ID_CLIENT->Text);
		}
		String^ Client_Nom = this->TXT_NOM_CLIENT->Text; ;
		String^ Client_Prenom = this->TXT_PRENOM_CLIENT->Text;
		DateTime Client_Date_N = DateTime::Parse(this->TXT_BD_CLIENT->Text);
		String^ Client_Mail = this->TXT_MAIL_CLIENT->Text;
		String^ Client_Rue = this->TXT_RUE_CLIENT->Text;
		String^ Client_Code_Postal = this->TXT_CP_CLIENT->Text;
		String^ Client_Ville = this->TXT_VILLE_CLIENT->Text;
		String^ Client_Batiment = this->TXT_BAT_CLIENT->Text;
		int Client_Etage;
		if (this->TXT_ETAGE_CLIENT->Text != "") {
			Client_Etage = Convert::ToInt32(this->TXT_ETAGE_CLIENT->Text);
		}

		bool isIdsValid = check_client_ID_entry();
		bool isNameValid = check_client_name_entry();
		bool isSurnameValid = check_client_surname_entry();
		bool isMailValid = check_client_mail_entry();
		bool isRueValid = check_client_rue_entry();
		bool isCPValid = check_client_code_postal_entry();
		bool isVilleValid = check_client_ville_entry();
		bool isBatimentValid = check_client_name_building_entry();
		bool isEtageValid = check_client_floor_entry();


		if (isIdsValid & isNameValid & isSurnameValid & isMailValid & isRueValid & isCPValid & isVilleValid & isBatimentValid & isEtageValid) {
			this->oSvc_Client->modifier_Client(Client_ID, Client_Nom, Client_Prenom, Client_Mail, Client_Date_N, Client_Rue, Client_Code_Postal, Client_Ville, Client_Batiment, Client_Etage);
		}
		// Vide de la page

		this->AFFICHAGE_CLIENT->Refresh();
		this->oSvc_Client->selectionner_Client("Rsl");
		this->AFFICHAGE_CLIENT->DataSource = this->oDs;
		this->AFFICHAGE_CLIENT->DataMember = "Rsl";

		this->TXT_ID_CLIENT->Text = "";
		this->TXT_NOM_CLIENT->Text = "";
		this->TXT_PRENOM_CLIENT->Text = "";
		this->TXT_BD_CLIENT->Text = "";
		this->TXT_MAIL_CLIENT->Text = "";
		this->TXT_RUE_CLIENT->Text = "";
		this->TXT_CP_CLIENT->Text = "";
		this->TXT_VILLE_CLIENT->Text = "";
		this->TXT_BAT_CLIENT->Text = "";
		this->TXT_ETAGE_CLIENT->Text = "";

	}

	private: System::Void BOUTON_SUPP_CLIENT_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int Client_ID;
		if (this->TXT_ID_CLIENT->Text != "") {
			Client_ID = Convert::ToInt32(this->TXT_ID_CLIENT->Text);
		}
		bool isIdsValid = check_client_ID_entry();
		if (isIdsValid) {
			this->oSvc_Client->supprimer_Client(Client_ID);
		}

		this->AFFICHAGE_CLIENT->Refresh();
		this->oSvc_Client->selectionner_Client("Rsl");
		this->AFFICHAGE_CLIENT->DataSource = this->oDs;
		this->AFFICHAGE_CLIENT->DataMember = "Rsl";

		this->TXT_ID_CLIENT->Text = "";
	}

	private: System::Void BOUTON_AFF_CLIENT_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->TXT_ID_CLIENT->Text != "") {
			int CLIENT_ID = Convert::ToInt32(this->TXT_ID_CLIENT->Text);
			this->oSvc_Client = gcnew NS_Comp_Svc::CLservices_Client();
			this->AFFICHAGE_CLIENT->Refresh();
			this->oDs = this->oSvc_Client->selectionner_Client_Ind("Rsl", CLIENT_ID);
			this->AFFICHAGE_CLIENT->DataSource = this->oDs;
			this->AFFICHAGE_CLIENT->DataMember = "Rsl";
		}
		else if (this->TXT_NOM_CLIENT->Text != "") {
			String^ CLIENT_Nom = this->TXT_NOM_CLIENT->Text;
			this->oSvc_Client = gcnew NS_Comp_Svc::CLservices_Client();
			this->AFFICHAGE_CLIENT->Refresh();
			this->oDs = this->oSvc_Client->selectionner_Client_Nom("Rsl", CLIENT_Nom);
			this->AFFICHAGE_CLIENT->DataSource = this->oDs;
			this->AFFICHAGE_CLIENT->DataMember = "Rsl";
		}
		else if (this->TXT_PRENOM_CLIENT->Text != "") {
			String^ CLIENT_Prenom = this->TXT_PRENOM_CLIENT->Text;
			this->oSvc_Client = gcnew NS_Comp_Svc::CLservices_Client();
			this->AFFICHAGE_CLIENT->Refresh();
			this->oDs = this->oSvc_Client->selectionner_Client_Prenom("Rsl", CLIENT_Prenom);
			this->AFFICHAGE_CLIENT->DataSource = this->oDs;
			this->AFFICHAGE_CLIENT->DataMember = "Rsl";
		}
		else if (this->TXT_MAIL_CLIENT->Text != "") {
			String^ CLIENT_Mail = this->TXT_MAIL_CLIENT->Text;
			this->oSvc_Client = gcnew NS_Comp_Svc::CLservices_Client();
			this->AFFICHAGE_CLIENT->Refresh();
			this->oDs = this->oSvc_Client->selectionner_Client_Mail("Rsl", CLIENT_Mail);
			this->AFFICHAGE_CLIENT->DataSource = this->oDs;
			this->AFFICHAGE_CLIENT->DataMember = "Rsl";
		}
		else if (this->TXT_VILLE_CLIENT->Text != "") {
			String^ CLIENT_Ville = this->TXT_VILLE_CLIENT->Text;
			this->oSvc_Client = gcnew NS_Comp_Svc::CLservices_Client();
			this->AFFICHAGE_CLIENT->Refresh();
			this->oDs = this->oSvc_Client->selectionner_Client_Ville("Rsl", CLIENT_Ville);
			this->AFFICHAGE_CLIENT->DataSource = this->oDs;
			this->AFFICHAGE_CLIENT->DataMember = "Rsl";
		}
		else if (this->TXT_RUE_CLIENT->Text != "") {
			String^ CLIENT_Rue = this->TXT_RUE_CLIENT->Text;
			this->oSvc_Client = gcnew NS_Comp_Svc::CLservices_Client();
			this->AFFICHAGE_CLIENT->Refresh();
			this->oDs = this->oSvc_Client->selectionner_Client_Rue("Rsl", CLIENT_Rue);
			this->AFFICHAGE_CLIENT->DataSource = this->oDs;
			this->AFFICHAGE_CLIENT->DataMember = "Rsl";
		}
		else if (this->TXT_CP_CLIENT->Text != "") {
			String^ CLIENT_Code_Postal = this->TXT_CP_CLIENT->Text;
			this->oSvc_Client = gcnew NS_Comp_Svc::CLservices_Client();
			this->AFFICHAGE_CLIENT->Refresh();
			this->oDs = this->oSvc_Client->selectionner_Client_Code_Postal("Rsl", CLIENT_Code_Postal);
			this->AFFICHAGE_CLIENT->DataSource = this->oDs;
			this->AFFICHAGE_CLIENT->DataMember = "Rsl";
		}
		else if (this->TXT_ETAGE_CLIENT->Text != "") {
			int CLIENT_Etage = Convert::ToInt32(this->TXT_ETAGE_CLIENT->Text);
			this->oSvc_Client = gcnew NS_Comp_Svc::CLservices_Client();
			this->AFFICHAGE_CLIENT->Refresh();
			this->oDs = this->oSvc_Client->selectionner_Client_Etage("Rsl", CLIENT_Etage);
			this->AFFICHAGE_CLIENT->DataSource = this->oDs;
			this->AFFICHAGE_CLIENT->DataMember = "Rsl";
		}
		else {
			this->oSvc_Client = gcnew NS_Comp_Svc::CLservices_Client();
			this->AFFICHAGE_CLIENT->Refresh();
			this->oDs = this->oSvc_Client->selectionner_Client("Rsl");
			this->AFFICHAGE_CLIENT->DataSource = this->oDs;
			this->AFFICHAGE_CLIENT->DataMember = "Rsl";
		}

		this->TXT_ID_CLIENT->Text = "";
		this->TXT_NOM_CLIENT->Text = "";
		this->TXT_PRENOM_CLIENT->Text = "";
		this->TXT_BD_CLIENT->Text = "";
		this->TXT_MAIL_CLIENT->Text = "";
		this->TXT_RUE_CLIENT->Text = "";
		this->TXT_CP_CLIENT->Text = "";
		this->TXT_VILLE_CLIENT->Text = "";
		this->TXT_BAT_CLIENT->Text = "";
		this->TXT_ETAGE_CLIENT->Text = "";
	}

	private: System::Void SKIP_CLIENT_GAUCHE_Click(System::Object^ sender, System::EventArgs^ e)
	{

		String^ Client_ID = this->TXT_ID_CLIENT->Text;

		

		this->TXT_ID_CLIENT->Text = "eughe";
		this->TXT_NOM_CLIENT->Text = "Nom précédent";
		this->TXT_PRENOM_CLIENT->Text = "Prenom précédent";
		this->TXT_BD_CLIENT->Text = "06/12/2023 00:00";
		this->TXT_MAIL_CLIENT->Text = "E mail";
		this->TXT_RUE_CLIENT->Text = "Rue précédent";
		this->TXT_CP_CLIENT->Text = "CP précédent";
		this->TXT_VILLE_CLIENT->Text = "Ville précédent";
		this->TXT_BAT_CLIENT->Text = "Bat précédent";
		this->TXT_ETAGE_CLIENT->Text = "Etage précédent";
	}

	private: System::Void SKIP_CLIENT_DROITE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// On récupère l'ID en cours 

		String^ Client_ID = this->TXT_ID_CLIENT->Text;

		// On la transmet a une méthode qui va récupérer tout les éléments suivant dans la BDD et les transmettre.

		// Ensuite on les affiche dans les TXT

		this->TXT_ID_CLIENT->Text = "ID suivant";

		this->TXT_NOM_CLIENT->Text = "Nom suivant";
		this->TXT_PRENOM_CLIENT->Text = "Prenom suivant";
		this->TXT_BD_CLIENT->Text = "06/12/2023 00:00";
		this->TXT_MAIL_CLIENT->Text = "Email";
		this->TXT_RUE_CLIENT->Text = "Rue suivant";
		this->TXT_CP_CLIENT->Text = "CP suivant";
		this->TXT_VILLE_CLIENT->Text = "Ville suivant";
		this->TXT_BAT_CLIENT->Text = "Bat suivant";
		this->TXT_ETAGE_CLIENT->Text = "Etage suivant";
	}

	private: System::Void BOUTON_CLEAR_CLIENT_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->TXT_ID_CLIENT->Text = "";
		this->TXT_NOM_CLIENT->Text = "";
		this->TXT_PRENOM_CLIENT->Text = "";
		this->TXT_BD_CLIENT->Text = "";
		this->TXT_MAIL_CLIENT->Text = "";
		this->TXT_RUE_CLIENT->Text = "";
		this->TXT_CP_CLIENT->Text = "";
		this->TXT_VILLE_CLIENT->Text = "";
		this->TXT_BAT_CLIENT->Text = "";
		this->TXT_ETAGE_CLIENT->Text = "";
	}


	};

}


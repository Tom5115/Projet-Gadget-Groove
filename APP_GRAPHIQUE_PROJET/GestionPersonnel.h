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
	public ref class GestionPersonnel : public System::Windows::Forms::Form
	{
	public:
		Form^ ObjetPersonnel;
		GestionPersonnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

		GestionPersonnel(Form^ Objet)
		{
			ObjetPersonnel = Objet;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		bool check_personnel_ID_entry();
		bool check_personnel_name_entry();
		bool check_personnel_surname_entry();
		bool check_personnel_mail_entry();
		bool check_personnel_ville_entry();
		bool check_personnel_rue_entry();
		bool check_personnel_code_postal_entry();
		bool check_personnel_name_building_entry();
		bool check_personnel_floor_entry();
		bool check_personnel_role_entry();
		bool check_personnel_ID_supperior_entry();


	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionPersonnel()
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
	private: System::Windows::Forms::Button^ BOUTON_CLEAR_PERSONNEL;





	private: System::Windows::Forms::DataGridView^ AFFICHAGE_PERSONNEL;
	private: System::Windows::Forms::TextBox^ TXT_MAIL_PERSONNEL;

	private: System::Windows::Forms::TextBox^ TXT_ETAGE_PERSONNEL;



	private: System::Windows::Forms::PictureBox^ LOGO;
	private: System::Windows::Forms::DateTimePicker^ TXT_BD_PERSONNEL;
	private: System::Windows::Forms::Button^ RETOUR_PERSONNEL_HOME;


	private: System::Windows::Forms::TextBox^ TXT_BAT_PERSONNEL;


	private: System::Windows::Forms::Label^ NomApp;
	private: System::Windows::Forms::TextBox^ TXT_VILLE_PERSONNEL;

	private: System::Windows::Forms::PictureBox^ BarreNoir;
	private: System::Windows::Forms::TextBox^ TXT_PRENOM_PERSONNEL;

	private: System::Windows::Forms::TextBox^ TXT_NOM_PERSONNEL;
	private: System::Windows::Forms::TextBox^ TXT_CP_PERSONNEL;


	private: System::Windows::Forms::Label^ TITRE_PERSONNEL;
	private: System::Windows::Forms::TextBox^ TXT_RUE_PERSONNEL;



	private: System::Windows::Forms::Label^ LABEL_NOM_PERSONNEL;
	private: System::Windows::Forms::TextBox^ TXT_ID_PERSONNEL;


	private: System::Windows::Forms::Label^ LABEL_PRENOM_PERSONNEL;
	private: System::Windows::Forms::Button^ BOUTON_ADD_PERSONNEL;


	private: System::Windows::Forms::Label^ LABEL_ID_PERSONNEL;
	private: System::Windows::Forms::Button^ BOUTON_SUPP_PERSONNEL;


	private: System::Windows::Forms::Label^ LABEL_BD_PERSONNEL;
	private: System::Windows::Forms::Button^ BOUTON_MODIF_PERSONNEL;


	private: System::Windows::Forms::Label^ LABEL_ETAGE_PERSONNEL;
	private: System::Windows::Forms::Button^ BOUTON_AFF_PERSONNEL;


	private: System::Windows::Forms::Label^ LABEL_BAT_PERSONNEL;
	private: System::Windows::Forms::Label^ LABEL_RUE_PERSONNEL;


	private: System::Windows::Forms::Label^ LABEL_MAIL_PERSONNEL;
	private: System::Windows::Forms::Label^ LABEL_CP_PERSONNEL;
	private: System::Windows::Forms::Label^ LABEL_VILLE_PERSONNEL;
	private: System::Windows::Forms::PictureBox^ BACKGROUND_ZONE_PERSONNEL;

	private: System::Windows::Forms::PictureBox^ BACKGROUND_PERSONNEL;
	private: System::Windows::Forms::Label^ DATE_EMBAUCHE_PERSONNEL;
private: System::Windows::Forms::Label^ LABEL_ROLE_PERSONNEL;

private: System::Windows::Forms::Label^ LABEL_ID_SUP;

	private: System::Windows::Forms::DateTimePicker^ TXT_DATE_EMBAUCHE_PERSONNEL;
private: System::Windows::Forms::TextBox^ TEXT_ROLE_PERSONNEL;


private: System::Windows::Forms::TextBox^ TXT_ID_SUP;


	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: NS_Comp_Svc::CLservices_Personel^ oSvc_Personel;
	private: System::Data::DataSet^ oDs;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionPersonnel::typeid));
			   this->BOUTON_CLEAR_PERSONNEL = (gcnew System::Windows::Forms::Button());
			   this->AFFICHAGE_PERSONNEL = (gcnew System::Windows::Forms::DataGridView());
			   this->TXT_MAIL_PERSONNEL = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_ETAGE_PERSONNEL = (gcnew System::Windows::Forms::TextBox());
			   this->LOGO = (gcnew System::Windows::Forms::PictureBox());
			   this->TXT_BD_PERSONNEL = (gcnew System::Windows::Forms::DateTimePicker());
			   this->RETOUR_PERSONNEL_HOME = (gcnew System::Windows::Forms::Button());
			   this->TXT_BAT_PERSONNEL = (gcnew System::Windows::Forms::TextBox());
			   this->NomApp = (gcnew System::Windows::Forms::Label());
			   this->TXT_VILLE_PERSONNEL = (gcnew System::Windows::Forms::TextBox());
			   this->BarreNoir = (gcnew System::Windows::Forms::PictureBox());
			   this->TXT_PRENOM_PERSONNEL = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_NOM_PERSONNEL = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_CP_PERSONNEL = (gcnew System::Windows::Forms::TextBox());
			   this->TITRE_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->TXT_RUE_PERSONNEL = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_NOM_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->TXT_ID_PERSONNEL = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_PRENOM_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_ADD_PERSONNEL = (gcnew System::Windows::Forms::Button());
			   this->LABEL_ID_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_SUPP_PERSONNEL = (gcnew System::Windows::Forms::Button());
			   this->LABEL_BD_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_MODIF_PERSONNEL = (gcnew System::Windows::Forms::Button());
			   this->LABEL_ETAGE_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_AFF_PERSONNEL = (gcnew System::Windows::Forms::Button());
			   this->LABEL_BAT_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->LABEL_RUE_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->LABEL_MAIL_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->LABEL_CP_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->LABEL_VILLE_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->BACKGROUND_ZONE_PERSONNEL = (gcnew System::Windows::Forms::PictureBox());
			   this->BACKGROUND_PERSONNEL = (gcnew System::Windows::Forms::PictureBox());
			   this->DATE_EMBAUCHE_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->LABEL_ROLE_PERSONNEL = (gcnew System::Windows::Forms::Label());
			   this->LABEL_ID_SUP = (gcnew System::Windows::Forms::Label());
			   this->TXT_DATE_EMBAUCHE_PERSONNEL = (gcnew System::Windows::Forms::DateTimePicker());
			   this->TEXT_ROLE_PERSONNEL = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_ID_SUP = (gcnew System::Windows::Forms::TextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHAGE_PERSONNEL))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_ZONE_PERSONNEL))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_PERSONNEL))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // BOUTON_CLEAR_PERSONNEL
			   // 
			   this->BOUTON_CLEAR_PERSONNEL->BackColor = System::Drawing::Color::DarkRed;
			   this->BOUTON_CLEAR_PERSONNEL->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_CLEAR_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_CLEAR_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_CLEAR_PERSONNEL->Location = System::Drawing::Point(577, 132);
			   this->BOUTON_CLEAR_PERSONNEL->Name = L"BOUTON_CLEAR_PERSONNEL";
			   this->BOUTON_CLEAR_PERSONNEL->Size = System::Drawing::Size(151, 23);
			   this->BOUTON_CLEAR_PERSONNEL->TabIndex = 151;
			   this->BOUTON_CLEAR_PERSONNEL->Text = L"CLEAR";
			   this->BOUTON_CLEAR_PERSONNEL->UseVisualStyleBackColor = false;
			   this->BOUTON_CLEAR_PERSONNEL->Click += gcnew System::EventHandler(this, &GestionPersonnel::BOUTON_CLEAR_PERSONNEL_Click);
			   // 
			   // AFFICHAGE_PERSONNEL
			   // 
			   this->AFFICHAGE_PERSONNEL->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->AFFICHAGE_PERSONNEL->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->AFFICHAGE_PERSONNEL->Location = System::Drawing::Point(778, 115);
			   this->AFFICHAGE_PERSONNEL->Name = L"AFFICHAGE_PERSONNEL";
			   this->AFFICHAGE_PERSONNEL->RowHeadersWidth = 51;
			   this->AFFICHAGE_PERSONNEL->Size = System::Drawing::Size(412, 584);
			   this->AFFICHAGE_PERSONNEL->TabIndex = 148;
			   // 
			   // TXT_MAIL_PERSONNEL
			   // 
			   this->TXT_MAIL_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_MAIL_PERSONNEL->Location = System::Drawing::Point(99, 455);
			   this->TXT_MAIL_PERSONNEL->Name = L"TXT_MAIL_PERSONNEL";
			   this->TXT_MAIL_PERSONNEL->Size = System::Drawing::Size(286, 35);
			   this->TXT_MAIL_PERSONNEL->TabIndex = 146;
			   // 
			   // TXT_ETAGE_PERSONNEL
			   // 
			   this->TXT_ETAGE_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_ETAGE_PERSONNEL->Location = System::Drawing::Point(422, 455);
			   this->TXT_ETAGE_PERSONNEL->Name = L"TXT_ETAGE_PERSONNEL";
			   this->TXT_ETAGE_PERSONNEL->Size = System::Drawing::Size(303, 35);
			   this->TXT_ETAGE_PERSONNEL->TabIndex = 144;
			   this->TXT_ETAGE_PERSONNEL->TextChanged += gcnew System::EventHandler(this, &GestionPersonnel::TXT_ETAGE_PERSONNEL_TextChanged);
			   // 
			   // LOGO
			   // 
			   this->LOGO->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LOGO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LOGO.Image")));
			   this->LOGO->Location = System::Drawing::Point(17, 13);
			   this->LOGO->Name = L"LOGO";
			   this->LOGO->Size = System::Drawing::Size(50, 40);
			   this->LOGO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->LOGO->TabIndex = 121;
			   this->LOGO->TabStop = false;
			   // 
			   // TXT_BD_PERSONNEL
			   // 
			   this->TXT_BD_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_BD_PERSONNEL->Location = System::Drawing::Point(99, 387);
			   this->TXT_BD_PERSONNEL->Name = L"TXT_BD_PERSONNEL";
			   this->TXT_BD_PERSONNEL->Size = System::Drawing::Size(286, 35);
			   this->TXT_BD_PERSONNEL->TabIndex = 127;
			   // 
			   // RETOUR_PERSONNEL_HOME
			   // 
			   this->RETOUR_PERSONNEL_HOME->BackColor = System::Drawing::Color::Transparent;
			   this->RETOUR_PERSONNEL_HOME->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RETOUR_PERSONNEL_HOME.BackgroundImage")));
			   this->RETOUR_PERSONNEL_HOME->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->RETOUR_PERSONNEL_HOME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			   this->RETOUR_PERSONNEL_HOME->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->RETOUR_PERSONNEL_HOME->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RETOUR_PERSONNEL_HOME.Image")));
			   this->RETOUR_PERSONNEL_HOME->Location = System::Drawing::Point(1142, 11);
			   this->RETOUR_PERSONNEL_HOME->Name = L"RETOUR_PERSONNEL_HOME";
			   this->RETOUR_PERSONNEL_HOME->Size = System::Drawing::Size(106, 48);
			   this->RETOUR_PERSONNEL_HOME->TabIndex = 119;
			   this->RETOUR_PERSONNEL_HOME->Text = L"RETOUR";
			   this->RETOUR_PERSONNEL_HOME->UseVisualStyleBackColor = false;
			   this->RETOUR_PERSONNEL_HOME->Click += gcnew System::EventHandler(this, &GestionPersonnel::RETOUR_PERSONNEL_HOME_Click);
			   // 
			   // TXT_BAT_PERSONNEL
			   // 
			   this->TXT_BAT_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_BAT_PERSONNEL->Location = System::Drawing::Point(423, 389);
			   this->TXT_BAT_PERSONNEL->Name = L"TXT_BAT_PERSONNEL";
			   this->TXT_BAT_PERSONNEL->Size = System::Drawing::Size(302, 35);
			   this->TXT_BAT_PERSONNEL->TabIndex = 134;
			   // 
			   // NomApp
			   // 
			   this->NomApp->AutoSize = true;
			   this->NomApp->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->NomApp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NomApp->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->NomApp->Location = System::Drawing::Point(70, 3);
			   this->NomApp->Name = L"NomApp";
			   this->NomApp->Size = System::Drawing::Size(538, 74);
			   this->NomApp->TabIndex = 117;
			   this->NomApp->Text = L"| Gestion Personnel";
			   // 
			   // TXT_VILLE_PERSONNEL
			   // 
			   this->TXT_VILLE_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_VILLE_PERSONNEL->Location = System::Drawing::Point(423, 323);
			   this->TXT_VILLE_PERSONNEL->Name = L"TXT_VILLE_PERSONNEL";
			   this->TXT_VILLE_PERSONNEL->Size = System::Drawing::Size(302, 35);
			   this->TXT_VILLE_PERSONNEL->TabIndex = 138;
			   // 
			   // BarreNoir
			   // 
			   this->BarreNoir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->BarreNoir->Location = System::Drawing::Point(1, -1);
			   this->BarreNoir->Name = L"BarreNoir";
			   this->BarreNoir->Size = System::Drawing::Size(1291, 69);
			   this->BarreNoir->TabIndex = 118;
			   this->BarreNoir->TabStop = false;
			   // 
			   // TXT_PRENOM_PERSONNEL
			   // 
			   this->TXT_PRENOM_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_PRENOM_PERSONNEL->Location = System::Drawing::Point(99, 323);
			   this->TXT_PRENOM_PERSONNEL->Name = L"TXT_PRENOM_PERSONNEL";
			   this->TXT_PRENOM_PERSONNEL->Size = System::Drawing::Size(286, 35);
			   this->TXT_PRENOM_PERSONNEL->TabIndex = 124;
			   // 
			   // TXT_NOM_PERSONNEL
			   // 
			   this->TXT_NOM_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_NOM_PERSONNEL->Location = System::Drawing::Point(99, 260);
			   this->TXT_NOM_PERSONNEL->Name = L"TXT_NOM_PERSONNEL";
			   this->TXT_NOM_PERSONNEL->Size = System::Drawing::Size(286, 35);
			   this->TXT_NOM_PERSONNEL->TabIndex = 123;
			   // 
			   // TXT_CP_PERSONNEL
			   // 
			   this->TXT_CP_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_CP_PERSONNEL->Location = System::Drawing::Point(422, 260);
			   this->TXT_CP_PERSONNEL->Name = L"TXT_CP_PERSONNEL";
			   this->TXT_CP_PERSONNEL->Size = System::Drawing::Size(302, 35);
			   this->TXT_CP_PERSONNEL->TabIndex = 130;
			   // 
			   // TITRE_PERSONNEL
			   // 
			   this->TITRE_PERSONNEL->AutoSize = true;
			   this->TITRE_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->TITRE_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TITRE_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->TITRE_PERSONNEL->Location = System::Drawing::Point(95, 135);
			   this->TITRE_PERSONNEL->Name = L"TITRE_PERSONNEL";
			   this->TITRE_PERSONNEL->Size = System::Drawing::Size(436, 29);
			   this->TITRE_PERSONNEL->TabIndex = 135;
			   this->TITRE_PERSONNEL->Text = L"CARACTERISTIQUES PERSONNEL";
			   // 
			   // TXT_RUE_PERSONNEL
			   // 
			   this->TXT_RUE_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_RUE_PERSONNEL->Location = System::Drawing::Point(423, 195);
			   this->TXT_RUE_PERSONNEL->Name = L"TXT_RUE_PERSONNEL";
			   this->TXT_RUE_PERSONNEL->Size = System::Drawing::Size(303, 30);
			   this->TXT_RUE_PERSONNEL->TabIndex = 132;
			   // 
			   // LABEL_NOM_PERSONNEL
			   // 
			   this->LABEL_NOM_PERSONNEL->AutoSize = true;
			   this->LABEL_NOM_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->LABEL_NOM_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_NOM_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_NOM_PERSONNEL->Location = System::Drawing::Point(98, 237);
			   this->LABEL_NOM_PERSONNEL->Name = L"LABEL_NOM_PERSONNEL";
			   this->LABEL_NOM_PERSONNEL->Size = System::Drawing::Size(68, 29);
			   this->LABEL_NOM_PERSONNEL->TabIndex = 125;
			   this->LABEL_NOM_PERSONNEL->Text = L"Nom";
			   // 
			   // TXT_ID_PERSONNEL
			   // 
			   this->TXT_ID_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_ID_PERSONNEL->Location = System::Drawing::Point(99, 191);
			   this->TXT_ID_PERSONNEL->Name = L"TXT_ID_PERSONNEL";
			   this->TXT_ID_PERSONNEL->Size = System::Drawing::Size(286, 35);
			   this->TXT_ID_PERSONNEL->TabIndex = 140;
			   // 
			   // LABEL_PRENOM_PERSONNEL
			   // 
			   this->LABEL_PRENOM_PERSONNEL->AutoSize = true;
			   this->LABEL_PRENOM_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->LABEL_PRENOM_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_PRENOM_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_PRENOM_PERSONNEL->Location = System::Drawing::Point(98, 300);
			   this->LABEL_PRENOM_PERSONNEL->Name = L"LABEL_PRENOM_PERSONNEL";
			   this->LABEL_PRENOM_PERSONNEL->Size = System::Drawing::Size(104, 29);
			   this->LABEL_PRENOM_PERSONNEL->TabIndex = 126;
			   this->LABEL_PRENOM_PERSONNEL->Text = L"Prénom";
			   // 
			   // BOUTON_ADD_PERSONNEL
			   // 
			   this->BOUTON_ADD_PERSONNEL->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_ADD_PERSONNEL->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_ADD_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->BOUTON_ADD_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_ADD_PERSONNEL->Location = System::Drawing::Point(99, 623);
			   this->BOUTON_ADD_PERSONNEL->Name = L"BOUTON_ADD_PERSONNEL";
			   this->BOUTON_ADD_PERSONNEL->Size = System::Drawing::Size(133, 53);
			   this->BOUTON_ADD_PERSONNEL->TabIndex = 122;
			   this->BOUTON_ADD_PERSONNEL->Text = L"AJOUTER PERSONNEL";
			   this->BOUTON_ADD_PERSONNEL->UseVisualStyleBackColor = false;
			   this->BOUTON_ADD_PERSONNEL->Click += gcnew System::EventHandler(this, &GestionPersonnel::BOUTON_ADD_PERSONNEL_Click);
			   // 
			   // LABEL_ID_PERSONNEL
			   // 
			   this->LABEL_ID_PERSONNEL->AutoSize = true;
			   this->LABEL_ID_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->LABEL_ID_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_ID_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_ID_PERSONNEL->Location = System::Drawing::Point(95, 168);
			   this->LABEL_ID_PERSONNEL->Name = L"LABEL_ID_PERSONNEL";
			   this->LABEL_ID_PERSONNEL->Size = System::Drawing::Size(162, 29);
			   this->LABEL_ID_PERSONNEL->TabIndex = 139;
			   this->LABEL_ID_PERSONNEL->Text = L"ID personnel";
			   // 
			   // BOUTON_SUPP_PERSONNEL
			   // 
			   this->BOUTON_SUPP_PERSONNEL->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_SUPP_PERSONNEL->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_SUPP_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->BOUTON_SUPP_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_SUPP_PERSONNEL->Location = System::Drawing::Point(238, 623);
			   this->BOUTON_SUPP_PERSONNEL->Name = L"BOUTON_SUPP_PERSONNEL";
			   this->BOUTON_SUPP_PERSONNEL->Size = System::Drawing::Size(147, 53);
			   this->BOUTON_SUPP_PERSONNEL->TabIndex = 141;
			   this->BOUTON_SUPP_PERSONNEL->Text = L"SUPPRIMER PERSONNEL";
			   this->BOUTON_SUPP_PERSONNEL->UseVisualStyleBackColor = false;
			   this->BOUTON_SUPP_PERSONNEL->Click += gcnew System::EventHandler(this, &GestionPersonnel::BOUTON_SUPP_PERSONNEL_Click);
			   // 
			   // LABEL_BD_PERSONNEL
			   // 
			   this->LABEL_BD_PERSONNEL->AutoSize = true;
			   this->LABEL_BD_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->LABEL_BD_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_BD_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_BD_PERSONNEL->Location = System::Drawing::Point(98, 364);
			   this->LABEL_BD_PERSONNEL->Name = L"LABEL_BD_PERSONNEL";
			   this->LABEL_BD_PERSONNEL->Size = System::Drawing::Size(228, 29);
			   this->LABEL_BD_PERSONNEL->TabIndex = 128;
			   this->LABEL_BD_PERSONNEL->Text = L"Date de naissance";
			   // 
			   // BOUTON_MODIF_PERSONNEL
			   // 
			   this->BOUTON_MODIF_PERSONNEL->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_MODIF_PERSONNEL->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_MODIF_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_MODIF_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_MODIF_PERSONNEL->Location = System::Drawing::Point(418, 623);
			   this->BOUTON_MODIF_PERSONNEL->Name = L"BOUTON_MODIF_PERSONNEL";
			   this->BOUTON_MODIF_PERSONNEL->Size = System::Drawing::Size(151, 53);
			   this->BOUTON_MODIF_PERSONNEL->TabIndex = 145;
			   this->BOUTON_MODIF_PERSONNEL->Text = L"MODIFIER PERSONNEL";
			   this->BOUTON_MODIF_PERSONNEL->UseVisualStyleBackColor = false;
			   this->BOUTON_MODIF_PERSONNEL->Click += gcnew System::EventHandler(this, &GestionPersonnel::BOUTON_MODIF_PERSONNEL_Click);
			   // 
			   // LABEL_ETAGE_PERSONNEL
			   // 
			   this->LABEL_ETAGE_PERSONNEL->AutoSize = true;
			   this->LABEL_ETAGE_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->LABEL_ETAGE_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_ETAGE_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_ETAGE_PERSONNEL->Location = System::Drawing::Point(421, 428);
			   this->LABEL_ETAGE_PERSONNEL->Name = L"LABEL_ETAGE_PERSONNEL";
			   this->LABEL_ETAGE_PERSONNEL->Size = System::Drawing::Size(81, 29);
			   this->LABEL_ETAGE_PERSONNEL->TabIndex = 137;
			   this->LABEL_ETAGE_PERSONNEL->Text = L"Etage";
			   // 
			   // BOUTON_AFF_PERSONNEL
			   // 
			   this->BOUTON_AFF_PERSONNEL->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_AFF_PERSONNEL->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_AFF_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->BOUTON_AFF_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_AFF_PERSONNEL->Location = System::Drawing::Point(577, 623);
			   this->BOUTON_AFF_PERSONNEL->Name = L"BOUTON_AFF_PERSONNEL";
			   this->BOUTON_AFF_PERSONNEL->Size = System::Drawing::Size(151, 53);
			   this->BOUTON_AFF_PERSONNEL->TabIndex = 142;
			   this->BOUTON_AFF_PERSONNEL->Text = L"AFFICHAGE PERSONNEL";
			   this->BOUTON_AFF_PERSONNEL->UseVisualStyleBackColor = false;
			   this->BOUTON_AFF_PERSONNEL->Click += gcnew System::EventHandler(this, &GestionPersonnel::BOUTON_AFF_PERSONNEL_Click);
			   // 
			   // LABEL_BAT_PERSONNEL
			   // 
			   this->LABEL_BAT_PERSONNEL->AutoSize = true;
			   this->LABEL_BAT_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->LABEL_BAT_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_BAT_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_BAT_PERSONNEL->Location = System::Drawing::Point(420, 364);
			   this->LABEL_BAT_PERSONNEL->Name = L"LABEL_BAT_PERSONNEL";
			   this->LABEL_BAT_PERSONNEL->Size = System::Drawing::Size(177, 29);
			   this->LABEL_BAT_PERSONNEL->TabIndex = 136;
			   this->LABEL_BAT_PERSONNEL->Text = L"Nom Batiment";
			   // 
			   // LABEL_RUE_PERSONNEL
			   // 
			   this->LABEL_RUE_PERSONNEL->AutoSize = true;
			   this->LABEL_RUE_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->LABEL_RUE_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_RUE_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_RUE_PERSONNEL->Location = System::Drawing::Point(421, 171);
			   this->LABEL_RUE_PERSONNEL->Name = L"LABEL_RUE_PERSONNEL";
			   this->LABEL_RUE_PERSONNEL->Size = System::Drawing::Size(60, 29);
			   this->LABEL_RUE_PERSONNEL->TabIndex = 129;
			   this->LABEL_RUE_PERSONNEL->Text = L"Rue";
			   // 
			   // LABEL_MAIL_PERSONNEL
			   // 
			   this->LABEL_MAIL_PERSONNEL->AutoSize = true;
			   this->LABEL_MAIL_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->LABEL_MAIL_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_MAIL_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_MAIL_PERSONNEL->Location = System::Drawing::Point(98, 428);
			   this->LABEL_MAIL_PERSONNEL->Name = L"LABEL_MAIL_PERSONNEL";
			   this->LABEL_MAIL_PERSONNEL->Size = System::Drawing::Size(88, 29);
			   this->LABEL_MAIL_PERSONNEL->TabIndex = 143;
			   this->LABEL_MAIL_PERSONNEL->Text = L"E-mail";
			   // 
			   // LABEL_CP_PERSONNEL
			   // 
			   this->LABEL_CP_PERSONNEL->AutoSize = true;
			   this->LABEL_CP_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->LABEL_CP_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_CP_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_CP_PERSONNEL->Location = System::Drawing::Point(421, 237);
			   this->LABEL_CP_PERSONNEL->Name = L"LABEL_CP_PERSONNEL";
			   this->LABEL_CP_PERSONNEL->Size = System::Drawing::Size(156, 29);
			   this->LABEL_CP_PERSONNEL->TabIndex = 131;
			   this->LABEL_CP_PERSONNEL->Text = L"Code Postal";
			   // 
			   // LABEL_VILLE_PERSONNEL
			   // 
			   this->LABEL_VILLE_PERSONNEL->AutoSize = true;
			   this->LABEL_VILLE_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->LABEL_VILLE_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_VILLE_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_VILLE_PERSONNEL->Location = System::Drawing::Point(419, 300);
			   this->LABEL_VILLE_PERSONNEL->Name = L"LABEL_VILLE_PERSONNEL";
			   this->LABEL_VILLE_PERSONNEL->Size = System::Drawing::Size(65, 29);
			   this->LABEL_VILLE_PERSONNEL->TabIndex = 133;
			   this->LABEL_VILLE_PERSONNEL->Text = L"Ville";
			   // 
			   // BACKGROUND_ZONE_PERSONNEL
			   // 
			   this->BACKGROUND_ZONE_PERSONNEL->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BACKGROUND_ZONE_PERSONNEL.BackgroundImage")));
			   this->BACKGROUND_ZONE_PERSONNEL->Location = System::Drawing::Point(79, 115);
			   this->BACKGROUND_ZONE_PERSONNEL->Name = L"BACKGROUND_ZONE_PERSONNEL";
			   this->BACKGROUND_ZONE_PERSONNEL->Size = System::Drawing::Size(683, 584);
			   this->BACKGROUND_ZONE_PERSONNEL->TabIndex = 147;
			   this->BACKGROUND_ZONE_PERSONNEL->TabStop = false;
			   // 
			   // BACKGROUND_PERSONNEL
			   // 
			   this->BACKGROUND_PERSONNEL->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BACKGROUND_PERSONNEL.Image")));
			   this->BACKGROUND_PERSONNEL->Location = System::Drawing::Point(1, 51);
			   this->BACKGROUND_PERSONNEL->Name = L"BACKGROUND_PERSONNEL";
			   this->BACKGROUND_PERSONNEL->Size = System::Drawing::Size(1273, 687);
			   this->BACKGROUND_PERSONNEL->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->BACKGROUND_PERSONNEL->TabIndex = 120;
			   this->BACKGROUND_PERSONNEL->TabStop = false;
			   // 
			   // DATE_EMBAUCHE_PERSONNEL
			   // 
			   this->DATE_EMBAUCHE_PERSONNEL->AutoSize = true;
			   this->DATE_EMBAUCHE_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->DATE_EMBAUCHE_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->DATE_EMBAUCHE_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->DATE_EMBAUCHE_PERSONNEL->Location = System::Drawing::Point(98, 495);
			   this->DATE_EMBAUCHE_PERSONNEL->Name = L"DATE_EMBAUCHE_PERSONNEL";
			   this->DATE_EMBAUCHE_PERSONNEL->Size = System::Drawing::Size(215, 29);
			   this->DATE_EMBAUCHE_PERSONNEL->TabIndex = 152;
			   this->DATE_EMBAUCHE_PERSONNEL->Text = L"Date d\'embauche";
			   // 
			   // LABEL_ROLE_PERSONNEL
			   // 
			   this->LABEL_ROLE_PERSONNEL->AutoSize = true;
			   this->LABEL_ROLE_PERSONNEL->BackColor = System::Drawing::Color::Black;
			   this->LABEL_ROLE_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_ROLE_PERSONNEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_ROLE_PERSONNEL->Location = System::Drawing::Point(419, 495);
			   this->LABEL_ROLE_PERSONNEL->Name = L"LABEL_ROLE_PERSONNEL";
			   this->LABEL_ROLE_PERSONNEL->Size = System::Drawing::Size(68, 29);
			   this->LABEL_ROLE_PERSONNEL->TabIndex = 153;
			   this->LABEL_ROLE_PERSONNEL->Text = L"Role";
			   // 
			   // LABEL_ID_SUP
			   // 
			   this->LABEL_ID_SUP->AutoSize = true;
			   this->LABEL_ID_SUP->BackColor = System::Drawing::Color::Black;
			   this->LABEL_ID_SUP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_ID_SUP->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_ID_SUP->Location = System::Drawing::Point(573, 495);
			   this->LABEL_ID_SUP->Name = L"LABEL_ID_SUP";
			   this->LABEL_ID_SUP->Size = System::Drawing::Size(156, 29);
			   this->LABEL_ID_SUP->TabIndex = 154;
			   this->LABEL_ID_SUP->Text = L"ID supérieur";
			   // 
			   // TXT_DATE_EMBAUCHE_PERSONNEL
			   // 
			   this->TXT_DATE_EMBAUCHE_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_DATE_EMBAUCHE_PERSONNEL->Location = System::Drawing::Point(99, 520);
			   this->TXT_DATE_EMBAUCHE_PERSONNEL->Name = L"TXT_DATE_EMBAUCHE_PERSONNEL";
			   this->TXT_DATE_EMBAUCHE_PERSONNEL->Size = System::Drawing::Size(286, 35);
			   this->TXT_DATE_EMBAUCHE_PERSONNEL->TabIndex = 155;
			   // 
			   // TEXT_ROLE_PERSONNEL
			   // 
			   this->TEXT_ROLE_PERSONNEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TEXT_ROLE_PERSONNEL->Location = System::Drawing::Point(420, 520);
			   this->TEXT_ROLE_PERSONNEL->Name = L"TEXT_ROLE_PERSONNEL";
			   this->TEXT_ROLE_PERSONNEL->Size = System::Drawing::Size(149, 35);
			   this->TEXT_ROLE_PERSONNEL->TabIndex = 156;
			   this->TEXT_ROLE_PERSONNEL->TextChanged += gcnew System::EventHandler(this, &GestionPersonnel::textBox1_TextChanged);
			   // 
			   // TXT_ID_SUP
			   // 
			   this->TXT_ID_SUP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_ID_SUP->Location = System::Drawing::Point(579, 520);
			   this->TXT_ID_SUP->Name = L"TXT_ID_SUP";
			   this->TXT_ID_SUP->Size = System::Drawing::Size(149, 35);
			   this->TXT_ID_SUP->TabIndex = 157;
			   // 
			   // GestionPersonnel
			   // 
			   this->ClientSize = System::Drawing::Size(1256, 725);
			   this->Controls->Add(this->TXT_ID_SUP);
			   this->Controls->Add(this->TEXT_ROLE_PERSONNEL);
			   this->Controls->Add(this->TXT_DATE_EMBAUCHE_PERSONNEL);
			   this->Controls->Add(this->LABEL_ID_SUP);
			   this->Controls->Add(this->LABEL_ROLE_PERSONNEL);
			   this->Controls->Add(this->DATE_EMBAUCHE_PERSONNEL);
			   this->Controls->Add(this->BOUTON_CLEAR_PERSONNEL);
			   this->Controls->Add(this->AFFICHAGE_PERSONNEL);
			   this->Controls->Add(this->TXT_MAIL_PERSONNEL);
			   this->Controls->Add(this->TXT_ETAGE_PERSONNEL);
			   this->Controls->Add(this->LOGO);
			   this->Controls->Add(this->TXT_BD_PERSONNEL);
			   this->Controls->Add(this->RETOUR_PERSONNEL_HOME);
			   this->Controls->Add(this->TXT_BAT_PERSONNEL);
			   this->Controls->Add(this->NomApp);
			   this->Controls->Add(this->TXT_VILLE_PERSONNEL);
			   this->Controls->Add(this->BarreNoir);
			   this->Controls->Add(this->TXT_PRENOM_PERSONNEL);
			   this->Controls->Add(this->TXT_NOM_PERSONNEL);
			   this->Controls->Add(this->TXT_CP_PERSONNEL);
			   this->Controls->Add(this->TITRE_PERSONNEL);
			   this->Controls->Add(this->TXT_RUE_PERSONNEL);
			   this->Controls->Add(this->LABEL_NOM_PERSONNEL);
			   this->Controls->Add(this->TXT_ID_PERSONNEL);
			   this->Controls->Add(this->LABEL_PRENOM_PERSONNEL);
			   this->Controls->Add(this->BOUTON_ADD_PERSONNEL);
			   this->Controls->Add(this->LABEL_ID_PERSONNEL);
			   this->Controls->Add(this->BOUTON_SUPP_PERSONNEL);
			   this->Controls->Add(this->LABEL_BD_PERSONNEL);
			   this->Controls->Add(this->BOUTON_MODIF_PERSONNEL);
			   this->Controls->Add(this->LABEL_ETAGE_PERSONNEL);
			   this->Controls->Add(this->BOUTON_AFF_PERSONNEL);
			   this->Controls->Add(this->LABEL_BAT_PERSONNEL);
			   this->Controls->Add(this->LABEL_RUE_PERSONNEL);
			   this->Controls->Add(this->LABEL_MAIL_PERSONNEL);
			   this->Controls->Add(this->LABEL_CP_PERSONNEL);
			   this->Controls->Add(this->LABEL_VILLE_PERSONNEL);
			   this->Controls->Add(this->BACKGROUND_ZONE_PERSONNEL);
			   this->Controls->Add(this->BACKGROUND_PERSONNEL);
			   this->Name = L"GestionPersonnel";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			   this->Load += gcnew System::EventHandler(this, &GestionPersonnel::GestionPersonnel_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHAGE_PERSONNEL))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_ZONE_PERSONNEL))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_PERSONNEL))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }



#pragma endregion
	private: System::Void GestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
		this->AFFICHAGE_PERSONNEL->Refresh();
		this->oDs = this->oSvc_Personel->selectionner_Personel("Rsl");
		this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
		this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";

	}

	private: System::Void RETOUR_PERSONNEL_HOME_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	this->Hide();
	ObjetPersonnel->Show();
	}
	
	private: System::Void BOUTON_CLEAR_PERSONNEL_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->TXT_ID_PERSONNEL->Text = "";
		this->TXT_NOM_PERSONNEL->Text = "";
		this->TXT_PRENOM_PERSONNEL->Text = "";
		this->TXT_BD_PERSONNEL->Text = "";
		this->TXT_MAIL_PERSONNEL->Text = "";
		this->TXT_RUE_PERSONNEL->Text = "";
		this->TXT_CP_PERSONNEL->Text = "";
		this->TXT_VILLE_PERSONNEL->Text = "";
		this->TXT_BAT_PERSONNEL->Text = "";
		this->TXT_ETAGE_PERSONNEL->Text = "";
		this->TXT_DATE_EMBAUCHE_PERSONNEL->Text = "";
		this->TEXT_ROLE_PERSONNEL->Text = "";
		this->TXT_ID_SUP->Text = "";
	}

	private: System::Void BOUTON_ADD_PERSONNEL_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ Personnel_Nom = this->TXT_NOM_PERSONNEL->Text;;
		String^ Personnel_Prenom = this->TXT_PRENOM_PERSONNEL->Text;
		String^ Personnel_Mail = this->TXT_MAIL_PERSONNEL->Text;
		String^ Personnel_Rue = this->TXT_RUE_PERSONNEL->Text;
		DateTime Personnel_Date_N = DateTime::Parse(this->TXT_BD_PERSONNEL->Text);
		String^ Personnel_Code_Postal = this->TXT_CP_PERSONNEL->Text;
		String^ Personnel_Ville = this->TXT_VILLE_PERSONNEL->Text;
		String^ Personnel_Batiment = this->TXT_BAT_PERSONNEL->Text;
		int Personnel_Etage;
		if (this->TXT_ETAGE_PERSONNEL->Text != "") {
			Personnel_Etage = Convert::ToInt32(this->TXT_ETAGE_PERSONNEL->Text);
		}
		DateTime Personnel_Date_E = DateTime::Parse(this->TXT_DATE_EMBAUCHE_PERSONNEL->Text);
		String^ Personnel_Role = this->TEXT_ROLE_PERSONNEL->Text;
		int Personnel_ID_Supperieur;
		if (this->TXT_ID_SUP->Text != "") {
			Personnel_ID_Supperieur = Convert::ToInt32(this->TXT_ID_SUP->Text);
		}

		bool isNameValid = check_personnel_name_entry();
		bool isSurnameValid = check_personnel_surname_entry();
		bool isMailValid = check_personnel_mail_entry();
		bool isRueValid = check_personnel_rue_entry();
		bool isCPValid = check_personnel_code_postal_entry();
		bool isVilleValid = check_personnel_ville_entry();
		bool isBatimentValid = check_personnel_name_building_entry();
		bool isEtageValid = check_personnel_floor_entry();
		bool isRoleValid = check_personnel_role_entry();
		bool isIDSuppValid = check_personnel_ID_supperior_entry();


		if (isNameValid & isSurnameValid & isMailValid & isRueValid & isCPValid & isVilleValid & isBatimentValid & isEtageValid & isRoleValid & isIDSuppValid) {
			this->oSvc_Personel->ajouter_Personel(Personnel_Nom, Personnel_Prenom, Personnel_Mail, Personnel_Date_N, Personnel_Ville, Personnel_Rue, Personnel_Code_Postal, Personnel_Batiment, Personnel_Etage, Personnel_Date_E, Personnel_Role, Personnel_ID_Supperieur);
		}

		this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
		this->AFFICHAGE_PERSONNEL->Refresh();
		this->oDs = this->oSvc_Personel->selectionner_Personel("Rsl");
		this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
		this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		
		this->TXT_NOM_PERSONNEL->Text = "";
		this->TXT_PRENOM_PERSONNEL->Text = "";
		this->TXT_BD_PERSONNEL->Text = "";
		this->TXT_MAIL_PERSONNEL->Text = "";
		this->TXT_RUE_PERSONNEL->Text = "";
		this->TXT_CP_PERSONNEL->Text = "";
		this->TXT_VILLE_PERSONNEL->Text = "";
		this->TXT_BAT_PERSONNEL->Text = "";
		this->TXT_ETAGE_PERSONNEL->Text = "";
		this->TXT_DATE_EMBAUCHE_PERSONNEL->Text = "";
		this->TEXT_ROLE_PERSONNEL->Text = "";
		this->TXT_ID_SUP->Text = "";
	}
	private: System::Void BOUTON_MODIF_PERSONNEL_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int Personnel_ID;
		if (this->TXT_ETAGE_PERSONNEL->Text != "") {
			Personnel_ID = Convert::ToInt32(this->TXT_ID_PERSONNEL->Text);
		}
		String^ Personnel_Nom = this->TXT_NOM_PERSONNEL->Text;;
		String^ Personnel_Prenom = this->TXT_PRENOM_PERSONNEL->Text;
		String^ Personnel_Mail = this->TXT_MAIL_PERSONNEL->Text;
		String^ Personnel_Rue = this->TXT_RUE_PERSONNEL->Text;
		DateTime Personnel_Date_N = DateTime::Parse(this->TXT_BD_PERSONNEL->Text);
		String^ Personnel_Code_Postal = this->TXT_CP_PERSONNEL->Text;
		String^ Personnel_Ville = this->TXT_VILLE_PERSONNEL->Text;
		String^ Personnel_Batiment = this->TXT_BAT_PERSONNEL->Text;
		int Personnel_Etage;
		if (this->TXT_ETAGE_PERSONNEL->Text != "") {
			Personnel_Etage = Convert::ToInt32(this->TXT_ID_SUP->Text);
		}
		DateTime Personnel_Date_E = DateTime::Parse(this->TXT_DATE_EMBAUCHE_PERSONNEL->Text);
		String^ Personnel_Role = this->TEXT_ROLE_PERSONNEL->Text;
		int Personnel_ID_Supperieur;
		if (this->TXT_ETAGE_PERSONNEL->Text != "") {
			Personnel_ID_Supperieur = Convert::ToInt32(this->TXT_ID_SUP->Text);
		}

		bool isIDValid = check_personnel_ID_entry();
		bool isNameValid = check_personnel_name_entry();
		bool isSurnameValid = check_personnel_surname_entry();
		bool isMailValid = check_personnel_mail_entry();
		bool isRueValid = check_personnel_rue_entry();
		bool isCPValid = check_personnel_code_postal_entry();
		bool isVilleValid = check_personnel_ville_entry();
		bool isBatimentValid = check_personnel_name_building_entry();
		bool isEtageValid = check_personnel_floor_entry();
		bool isRoleValid = check_personnel_role_entry();
		bool isIDSuppValid = check_personnel_ID_supperior_entry();


		if (isIDValid & isNameValid & isSurnameValid & isMailValid & isRueValid & isCPValid & isVilleValid & isBatimentValid & isEtageValid & isRoleValid & isIDSuppValid) {
			this->oSvc_Personel->modifier_Personel(Personnel_ID, Personnel_Nom, Personnel_Prenom, Personnel_Mail, Personnel_Date_N, Personnel_Ville, Personnel_Rue, Personnel_Code_Postal, Personnel_Batiment, Personnel_Etage, Personnel_Date_E, Personnel_Role, Personnel_ID_Supperieur);
		}

		this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
		this->AFFICHAGE_PERSONNEL->Refresh();
		this->oDs = this->oSvc_Personel->selectionner_Personel("Rsl");
		this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
		this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";

		this->TXT_ID_PERSONNEL->Text = "";
		this->TXT_NOM_PERSONNEL->Text = "";
		this->TXT_PRENOM_PERSONNEL->Text = "";
		this->TXT_BD_PERSONNEL->Text = "";
		this->TXT_MAIL_PERSONNEL->Text = "";
		this->TXT_RUE_PERSONNEL->Text = "";
		this->TXT_CP_PERSONNEL->Text = "";
		this->TXT_VILLE_PERSONNEL->Text = "";
		this->TXT_BAT_PERSONNEL->Text = "";
		this->TXT_ETAGE_PERSONNEL->Text = "";
		this->TXT_DATE_EMBAUCHE_PERSONNEL->Text = "";
		this->TEXT_ROLE_PERSONNEL->Text = "";
		this->TXT_ID_SUP->Text = "";
	}

	private: System::Void BOUTON_SUPP_PERSONNEL_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int Personnel_ID;
		if (this->TXT_ETAGE_PERSONNEL->Text != "") {
			Personnel_ID = Convert::ToInt32(this->TXT_ID_PERSONNEL->Text);
		}

		bool isIDValid = check_personnel_ID_entry();

		if (isIDValid) {
			this->oSvc_Personel->supprimer_Personel(Personnel_ID);
		}

		this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
		this->AFFICHAGE_PERSONNEL->Refresh();
		this->oDs = this->oSvc_Personel->selectionner_Personel("Rsl");
		this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
		this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";

		this->TXT_ID_PERSONNEL->Text = "";
	}
	private: System::Void BOUTON_AFF_PERSONNEL_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (this->TXT_ID_PERSONNEL->Text != "") {
			int Personnel_ID = Convert::ToInt32(this->TXT_ID_PERSONNEL->Text);
			this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
			this->AFFICHAGE_PERSONNEL->Refresh();
			this->oDs = this->oSvc_Personel->selectionner_Personel_Ind("Rsl", Personnel_ID);
			this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
			this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		}
		else if(this->TXT_NOM_PERSONNEL->Text != "") {
			String^ Personnel_Nom = this->TXT_NOM_PERSONNEL->Text;
			this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
			this->AFFICHAGE_PERSONNEL->Refresh();
			this->oDs = this->oSvc_Personel->selectionner_Personel_Nom("Rsl", Personnel_Nom);
			this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
			this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		}
		else if (this->TXT_PRENOM_PERSONNEL->Text != "") {
			String^ Personnel_Prenom = this->TXT_PRENOM_PERSONNEL->Text;
			this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
			this->AFFICHAGE_PERSONNEL->Refresh();
			this->oDs = this->oSvc_Personel->selectionner_Personel_Prenom("Rsl", Personnel_Prenom);
			this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
			this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		}
			else if (this->TXT_MAIL_PERSONNEL->Text != "") {
			String^ Personnel_Mail = this->TXT_MAIL_PERSONNEL->Text;
			this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
			this->AFFICHAGE_PERSONNEL->Refresh();
			this->oDs = this->oSvc_Personel->selectionner_Personel_Mail("Rsl", Personnel_Mail);
			this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
			this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		}
		else if (this->TXT_VILLE_PERSONNEL->Text != "") {
			String^ Personnel_Ville = this->TXT_VILLE_PERSONNEL->Text;
			this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
			this->AFFICHAGE_PERSONNEL->Refresh();
			this->oDs = this->oSvc_Personel->selectionner_Personel_Ville("Rsl", Personnel_Ville);
			this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
			this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		}
		else if (this->TXT_RUE_PERSONNEL->Text != "") {
			String^ Personnel_Rue = this->TXT_RUE_PERSONNEL->Text;
			this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
			this->AFFICHAGE_PERSONNEL->Refresh();
			this->oDs = this->oSvc_Personel->selectionner_Personel_Rue("Rsl", Personnel_Rue);
			this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
			this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		}
		else if (this->TXT_CP_PERSONNEL->Text != "") {
			String^ Personnel_Code_Postal = this->TXT_CP_PERSONNEL->Text;
			this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
			this->AFFICHAGE_PERSONNEL->Refresh();
			this->oDs = this->oSvc_Personel->selectionner_Personel_Code_Postal("Rsl", Personnel_Code_Postal);
			this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
			this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		}
		else if (this->TXT_ETAGE_PERSONNEL->Text != "") {
			int Personnel_Etage = Convert::ToInt32(this->TXT_ETAGE_PERSONNEL->Text);
			this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
			this->AFFICHAGE_PERSONNEL->Refresh();
			this->oDs = this->oSvc_Personel->selectionner_Personel_Etage("Rsl", Personnel_Etage);
			this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
			this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		}
		else if (this->TEXT_ROLE_PERSONNEL->Text != "") {
			String^ Personnel_Role = this->TEXT_ROLE_PERSONNEL->Text;
			this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
			this->AFFICHAGE_PERSONNEL->Refresh();
			this->oDs = this->oSvc_Personel->selectionner_Personel_Role("Rsl", Personnel_Role);
			this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
			this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		}
		else if (this->TXT_DATE_EMBAUCHE_PERSONNEL->Text != "") {
			DateTime Personnel_Date_E = DateTime::Parse(this->TXT_DATE_EMBAUCHE_PERSONNEL->Text);
			this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
			this->AFFICHAGE_PERSONNEL->Refresh();
			this->oDs = this->oSvc_Personel->selectionner_Personel_Date_E("Rsl", Personnel_Date_E);
			this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
			this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		}
		else if (this->TXT_ID_SUP->Text != "") {
			int Personnel_ID_Supperieur = Convert::ToInt32(this->TXT_ID_SUP->Text);
			this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
			this->AFFICHAGE_PERSONNEL->Refresh();
			this->oDs = this->oSvc_Personel->selectionner_Personel_Sup_Id("Rsl", Personnel_ID_Supperieur);
			this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
			this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		}
		else {
			this->oSvc_Personel = gcnew NS_Comp_Svc::CLservices_Personel();
			this->AFFICHAGE_PERSONNEL->Refresh();
			this->oDs = this->oSvc_Personel->selectionner_Personel("Rsl");
			this->AFFICHAGE_PERSONNEL->DataSource = this->oDs;
			this->AFFICHAGE_PERSONNEL->DataMember = "Rsl";
		}

		this->TXT_ID_PERSONNEL->Text = "";
		this->TXT_NOM_PERSONNEL->Text = "";
		this->TXT_PRENOM_PERSONNEL->Text = "";
		this->TXT_MAIL_PERSONNEL->Text = "";
		this->TXT_RUE_PERSONNEL->Text = "";
		this->TXT_CP_PERSONNEL->Text = "";
		this->TXT_VILLE_PERSONNEL->Text = "";
		this->TXT_BAT_PERSONNEL->Text = "";
		this->TXT_ETAGE_PERSONNEL->Text = "";
		this->TEXT_ROLE_PERSONNEL->Text = "";
		this->TXT_ID_SUP->Text = "";
	}
	private: System::Void SKIP_PERSONNEL_GAUCHE_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->TXT_ID_PERSONNEL->Text = "Précédent"; 
		this->TXT_NOM_PERSONNEL->Text = "Précédent";
		this->TXT_PRENOM_PERSONNEL->Text = "Précédent";
		this->TXT_BD_PERSONNEL->Text = "06/12/2023 00:00";
		this->TXT_MAIL_PERSONNEL->Text = "Précédent";
		this->TXT_RUE_PERSONNEL->Text = "Précédent";
		this->TXT_CP_PERSONNEL->Text = "Précédent";
		this->TXT_VILLE_PERSONNEL->Text = "Précédent";
		this->TXT_BAT_PERSONNEL->Text = "Précédent";
		this->TXT_ETAGE_PERSONNEL->Text = "Précédent";
		this->TXT_DATE_EMBAUCHE_PERSONNEL->Text = "06/12/2023 00:00";
		this->TEXT_ROLE_PERSONNEL->Text = "Précédent";
		this->TXT_ID_SUP->Text = "Précédent";
	} 
	private: System::Void SKIP_PERSONNEL_DROITE_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->TXT_ID_PERSONNEL->Text = "Suivant"; 
		this->TXT_NOM_PERSONNEL->Text = "Suivant";
		this->TXT_PRENOM_PERSONNEL->Text = "06/12/2023 00:00";
		this->TXT_BD_PERSONNEL->Text = "06/12/2023 00:00";
		this->TXT_MAIL_PERSONNEL->Text = "Suivant";
		this->TXT_RUE_PERSONNEL->Text = "Suivant";
		this->TXT_CP_PERSONNEL->Text = "Suivant";
		this->TXT_VILLE_PERSONNEL->Text = "Suivant";
		this->TXT_BAT_PERSONNEL->Text = "Suivant";
		this->TXT_ETAGE_PERSONNEL->Text = "Suivant";
		this->TXT_DATE_EMBAUCHE_PERSONNEL->Text = "06/12/2023 00:00";
		this->TXT_RUE_PERSONNEL->Text = "t";
		this->TEXT_ROLE_PERSONNEL->Text = "";
		this->TXT_ID_SUP->Text = "d";
	}
	private: System::Void TXT_ETAGE_PERSONNEL_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}




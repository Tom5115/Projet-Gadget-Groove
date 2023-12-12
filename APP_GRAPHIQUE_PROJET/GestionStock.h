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
	public ref class GestionStock : public System::Windows::Forms::Form
	{
	public:
		Form^ ObjetStock;
		GestionStock(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

		GestionStock(Form^ Objet)
		{
			ObjetStock = Objet;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		bool check_article_ID_entry();
		bool check_article_name_entry();
		bool check_article_price_entry();
		bool check_article_color_entry();
		bool check_article_TVA_entry();
		bool check_article_quantity_entry();


	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionStock()
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
	private: System::Windows::Forms::DataGridView^ AFFICHAGE_STOCK;
	private: System::Windows::Forms::TextBox^ TXT_COULEUR_ARTICLE;



	private: System::Windows::Forms::PictureBox^ LOGO;

	private: System::Windows::Forms::Button^ RETURN_CLIENTS_HOME;

	private: System::Windows::Forms::Label^ NomApp;

	private: System::Windows::Forms::PictureBox^ BarreNoir;
	private: System::Windows::Forms::TextBox^ TXT_PRIX_ARTICLE;

	private: System::Windows::Forms::TextBox^ TXT_NOM_ARTICLE;

	private: System::Windows::Forms::Label^ TITREADD_Stock;
	private: System::Windows::Forms::TextBox^ TXT_TVA_ARTICLE;
	private: System::Windows::Forms::Label^ LABEL_NOM_ARTICLE;
	private: System::Windows::Forms::TextBox^ TXT_ID_ARTICLE;
	private: System::Windows::Forms::Label^ LABEL_PRIX_ARTICLE;
	private: System::Windows::Forms::Button^ BOUTON_AJOUTER_ARTICLE;
	private: System::Windows::Forms::Label^ LABEL_ID_ARTICLE;
	private: System::Windows::Forms::Button^ BOUTON_SUPPRIMER_ARTICLE;
	private: System::Windows::Forms::Label^ LABEL8COULEUR_ARTICLE;
	private: System::Windows::Forms::Button^ BOUTON_MODIFIER_ARTICLE;
	private: System::Windows::Forms::Button^ BOUTON_AFFICHAGE_ARTICLE;
	private: System::Windows::Forms::Label^ LABEL_TVA_ARTICLE;
	private: System::Windows::Forms::PictureBox^ BACKGROUND_STOCK_TEXTE;
	private: System::Windows::Forms::PictureBox^ Background;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Button^ BOUTON_CLEAR_STOCK;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: NS_Comp_Svc::CLservices_Article^ oSvc_Article;
	private: System::Windows::Forms::TextBox^ TXT_STOCK_ARTICLE;
	private: System::Windows::Forms::Label^ LABEL_STOCK_ARTICLE;
	private: System::Data::DataSet^ oDs;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionStock::typeid));
			   this->AFFICHAGE_STOCK = (gcnew System::Windows::Forms::DataGridView());
			   this->TXT_COULEUR_ARTICLE = (gcnew System::Windows::Forms::TextBox());
			   this->LOGO = (gcnew System::Windows::Forms::PictureBox());
			   this->RETURN_CLIENTS_HOME = (gcnew System::Windows::Forms::Button());
			   this->NomApp = (gcnew System::Windows::Forms::Label());
			   this->BarreNoir = (gcnew System::Windows::Forms::PictureBox());
			   this->TXT_PRIX_ARTICLE = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_NOM_ARTICLE = (gcnew System::Windows::Forms::TextBox());
			   this->TITREADD_Stock = (gcnew System::Windows::Forms::Label());
			   this->TXT_TVA_ARTICLE = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_NOM_ARTICLE = (gcnew System::Windows::Forms::Label());
			   this->TXT_ID_ARTICLE = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_PRIX_ARTICLE = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_AJOUTER_ARTICLE = (gcnew System::Windows::Forms::Button());
			   this->LABEL_ID_ARTICLE = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_SUPPRIMER_ARTICLE = (gcnew System::Windows::Forms::Button());
			   this->LABEL8COULEUR_ARTICLE = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_MODIFIER_ARTICLE = (gcnew System::Windows::Forms::Button());
			   this->BOUTON_AFFICHAGE_ARTICLE = (gcnew System::Windows::Forms::Button());
			   this->LABEL_TVA_ARTICLE = (gcnew System::Windows::Forms::Label());
			   this->BACKGROUND_STOCK_TEXTE = (gcnew System::Windows::Forms::PictureBox());
			   this->Background = (gcnew System::Windows::Forms::PictureBox());
			   this->label40 = (gcnew System::Windows::Forms::Label());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->BOUTON_CLEAR_STOCK = (gcnew System::Windows::Forms::Button());
			   this->TXT_STOCK_ARTICLE = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_STOCK_ARTICLE = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHAGE_STOCK))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_STOCK_TEXTE))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Background))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // AFFICHAGE_STOCK
			   // 
			   this->AFFICHAGE_STOCK->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->AFFICHAGE_STOCK->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->AFFICHAGE_STOCK->Location = System::Drawing::Point(778, 117);
			   this->AFFICHAGE_STOCK->Name = L"AFFICHAGE_STOCK";
			   this->AFFICHAGE_STOCK->RowHeadersWidth = 62;
			   this->AFFICHAGE_STOCK->Size = System::Drawing::Size(412, 550);
			   this->AFFICHAGE_STOCK->TabIndex = 306;
			   // 
			   // TXT_COULEUR_ARTICLE
			   // 
			   this->TXT_COULEUR_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_COULEUR_ARTICLE->Location = System::Drawing::Point(102, 386);
			   this->TXT_COULEUR_ARTICLE->Name = L"TXT_COULEUR_ARTICLE";
			   this->TXT_COULEUR_ARTICLE->Size = System::Drawing::Size(286, 35);
			   this->TXT_COULEUR_ARTICLE->TabIndex = 304;
			   // 
			   // LOGO
			   // 
			   this->LOGO->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LOGO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LOGO.Image")));
			   this->LOGO->Location = System::Drawing::Point(16, 21);
			   this->LOGO->Name = L"LOGO";
			   this->LOGO->Size = System::Drawing::Size(50, 40);
			   this->LOGO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->LOGO->TabIndex = 279;
			   this->LOGO->TabStop = false;
			   // 
			   // RETURN_CLIENTS_HOME
			   // 
			   this->RETURN_CLIENTS_HOME->BackColor = System::Drawing::Color::Transparent;
			   this->RETURN_CLIENTS_HOME->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RETURN_CLIENTS_HOME.BackgroundImage")));
			   this->RETURN_CLIENTS_HOME->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->RETURN_CLIENTS_HOME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			   this->RETURN_CLIENTS_HOME->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->RETURN_CLIENTS_HOME->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RETURN_CLIENTS_HOME.Image")));
			   this->RETURN_CLIENTS_HOME->Location = System::Drawing::Point(1142, 13);
			   this->RETURN_CLIENTS_HOME->Name = L"RETURN_CLIENTS_HOME";
			   this->RETURN_CLIENTS_HOME->Size = System::Drawing::Size(106, 48);
			   this->RETURN_CLIENTS_HOME->TabIndex = 277;
			   this->RETURN_CLIENTS_HOME->Text = L"RETOUR";
			   this->RETURN_CLIENTS_HOME->UseVisualStyleBackColor = false;
			   this->RETURN_CLIENTS_HOME->Click += gcnew System::EventHandler(this, &GestionStock::RETURN_CLIENTS_HOME_Click);
			   // 
			   // NomApp
			   // 
			   this->NomApp->AutoSize = true;
			   this->NomApp->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->NomApp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NomApp->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->NomApp->Location = System::Drawing::Point(65, 11);
			   this->NomApp->Name = L"NomApp";
			   this->NomApp->Size = System::Drawing::Size(425, 74);
			   this->NomApp->TabIndex = 275;
			   this->NomApp->Text = L"| Gestion Stock";
			   // 
			   // BarreNoir
			   // 
			   this->BarreNoir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->BarreNoir->Location = System::Drawing::Point(1, 1);
			   this->BarreNoir->Name = L"BarreNoir";
			   this->BarreNoir->Size = System::Drawing::Size(1291, 69);
			   this->BarreNoir->TabIndex = 276;
			   this->BarreNoir->TabStop = false;
			   // 
			   // TXT_PRIX_ARTICLE
			   // 
			   this->TXT_PRIX_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_PRIX_ARTICLE->Location = System::Drawing::Point(102, 321);
			   this->TXT_PRIX_ARTICLE->Name = L"TXT_PRIX_ARTICLE";
			   this->TXT_PRIX_ARTICLE->Size = System::Drawing::Size(286, 35);
			   this->TXT_PRIX_ARTICLE->TabIndex = 282;
			   // 
			   // TXT_NOM_ARTICLE
			   // 
			   this->TXT_NOM_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_NOM_ARTICLE->Location = System::Drawing::Point(102, 257);
			   this->TXT_NOM_ARTICLE->Name = L"TXT_NOM_ARTICLE";
			   this->TXT_NOM_ARTICLE->Size = System::Drawing::Size(286, 35);
			   this->TXT_NOM_ARTICLE->TabIndex = 281;
			   // 
			   // TITREADD_Stock
			   // 
			   this->TITREADD_Stock->AutoSize = true;
			   this->TITREADD_Stock->BackColor = System::Drawing::Color::Black;
			   this->TITREADD_Stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TITREADD_Stock->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->TITREADD_Stock->Location = System::Drawing::Point(95, 137);
			   this->TITREADD_Stock->Name = L"TITREADD_Stock";
			   this->TITREADD_Stock->Size = System::Drawing::Size(367, 29);
			   this->TITREADD_Stock->TabIndex = 293;
			   this->TITREADD_Stock->Text = L"CARACTERISTIQUES STOCK";
			   // 
			   // TXT_TVA_ARTICLE
			   // 
			   this->TXT_TVA_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_TVA_ARTICLE->Location = System::Drawing::Point(102, 453);
			   this->TXT_TVA_ARTICLE->Name = L"TXT_TVA_ARTICLE";
			   this->TXT_TVA_ARTICLE->Size = System::Drawing::Size(286, 30);
			   this->TXT_TVA_ARTICLE->TabIndex = 290;
			   // 
			   // LABEL_NOM_ARTICLE
			   // 
			   this->LABEL_NOM_ARTICLE->AutoSize = true;
			   this->LABEL_NOM_ARTICLE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_NOM_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_NOM_ARTICLE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_NOM_ARTICLE->Location = System::Drawing::Point(95, 234);
			   this->LABEL_NOM_ARTICLE->Name = L"LABEL_NOM_ARTICLE";
			   this->LABEL_NOM_ARTICLE->Size = System::Drawing::Size(68, 29);
			   this->LABEL_NOM_ARTICLE->TabIndex = 283;
			   this->LABEL_NOM_ARTICLE->Text = L"Nom";
			   // 
			   // TXT_ID_ARTICLE
			   // 
			   this->TXT_ID_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_ID_ARTICLE->Location = System::Drawing::Point(102, 193);
			   this->TXT_ID_ARTICLE->Name = L"TXT_ID_ARTICLE";
			   this->TXT_ID_ARTICLE->Size = System::Drawing::Size(286, 35);
			   this->TXT_ID_ARTICLE->TabIndex = 298;
			   // 
			   // LABEL_PRIX_ARTICLE
			   // 
			   this->LABEL_PRIX_ARTICLE->AutoSize = true;
			   this->LABEL_PRIX_ARTICLE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_PRIX_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_PRIX_ARTICLE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_PRIX_ARTICLE->Location = System::Drawing::Point(95, 298);
			   this->LABEL_PRIX_ARTICLE->Name = L"LABEL_PRIX_ARTICLE";
			   this->LABEL_PRIX_ARTICLE->Size = System::Drawing::Size(58, 29);
			   this->LABEL_PRIX_ARTICLE->TabIndex = 284;
			   this->LABEL_PRIX_ARTICLE->Text = L"Prix";
			   // 
			   // BOUTON_AJOUTER_ARTICLE
			   // 
			   this->BOUTON_AJOUTER_ARTICLE->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_AJOUTER_ARTICLE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_AJOUTER_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_AJOUTER_ARTICLE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_AJOUTER_ARTICLE->Location = System::Drawing::Point(99, 590);
			   this->BOUTON_AJOUTER_ARTICLE->Name = L"BOUTON_AJOUTER_ARTICLE";
			   this->BOUTON_AJOUTER_ARTICLE->Size = System::Drawing::Size(151, 53);
			   this->BOUTON_AJOUTER_ARTICLE->TabIndex = 280;
			   this->BOUTON_AJOUTER_ARTICLE->Text = L"AJOUTER ARTICLE";
			   this->BOUTON_AJOUTER_ARTICLE->UseVisualStyleBackColor = false;
			   this->BOUTON_AJOUTER_ARTICLE->Click += gcnew System::EventHandler(this, &GestionStock::BOUTON_AJOUTER_ARTICLE_Click);
			   // 
			   // LABEL_ID_ARTICLE
			   // 
			   this->LABEL_ID_ARTICLE->AutoSize = true;
			   this->LABEL_ID_ARTICLE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_ID_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_ID_ARTICLE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_ID_ARTICLE->Location = System::Drawing::Point(95, 170);
			   this->LABEL_ID_ARTICLE->Name = L"LABEL_ID_ARTICLE";
			   this->LABEL_ID_ARTICLE->Size = System::Drawing::Size(119, 29);
			   this->LABEL_ID_ARTICLE->TabIndex = 297;
			   this->LABEL_ID_ARTICLE->Text = L"ID Article";
			   // 
			   // BOUTON_SUPPRIMER_ARTICLE
			   // 
			   this->BOUTON_SUPPRIMER_ARTICLE->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_SUPPRIMER_ARTICLE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_SUPPRIMER_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_SUPPRIMER_ARTICLE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_SUPPRIMER_ARTICLE->Location = System::Drawing::Point(256, 590);
			   this->BOUTON_SUPPRIMER_ARTICLE->Name = L"BOUTON_SUPPRIMER_ARTICLE";
			   this->BOUTON_SUPPRIMER_ARTICLE->Size = System::Drawing::Size(151, 53);
			   this->BOUTON_SUPPRIMER_ARTICLE->TabIndex = 299;
			   this->BOUTON_SUPPRIMER_ARTICLE->Text = L"SUPPRIMER ARTICLE";
			   this->BOUTON_SUPPRIMER_ARTICLE->UseVisualStyleBackColor = false;
			   this->BOUTON_SUPPRIMER_ARTICLE->Click += gcnew System::EventHandler(this, &GestionStock::BOUTON_SUPPRIMER_ARTICLE_Click);
			   // 
			   // LABEL8COULEUR_ARTICLE
			   // 
			   this->LABEL8COULEUR_ARTICLE->AutoSize = true;
			   this->LABEL8COULEUR_ARTICLE->BackColor = System::Drawing::Color::Black;
			   this->LABEL8COULEUR_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL8COULEUR_ARTICLE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL8COULEUR_ARTICLE->Location = System::Drawing::Point(98, 363);
			   this->LABEL8COULEUR_ARTICLE->Name = L"LABEL8COULEUR_ARTICLE";
			   this->LABEL8COULEUR_ARTICLE->Size = System::Drawing::Size(105, 29);
			   this->LABEL8COULEUR_ARTICLE->TabIndex = 286;
			   this->LABEL8COULEUR_ARTICLE->Text = L"Couleur";
			   // 
			   // BOUTON_MODIFIER_ARTICLE
			   // 
			   this->BOUTON_MODIFIER_ARTICLE->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_MODIFIER_ARTICLE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_MODIFIER_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_MODIFIER_ARTICLE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_MODIFIER_ARTICLE->Location = System::Drawing::Point(415, 590);
			   this->BOUTON_MODIFIER_ARTICLE->Name = L"BOUTON_MODIFIER_ARTICLE";
			   this->BOUTON_MODIFIER_ARTICLE->Size = System::Drawing::Size(156, 53);
			   this->BOUTON_MODIFIER_ARTICLE->TabIndex = 303;
			   this->BOUTON_MODIFIER_ARTICLE->Text = L"MODIFIER ARTICLE";
			   this->BOUTON_MODIFIER_ARTICLE->UseVisualStyleBackColor = false;
			   this->BOUTON_MODIFIER_ARTICLE->Click += gcnew System::EventHandler(this, &GestionStock::BOUTON_MODIFIER_ARTICLE_Click);
			   // 
			   // BOUTON_AFFICHAGE_ARTICLE
			   // 
			   this->BOUTON_AFFICHAGE_ARTICLE->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_AFFICHAGE_ARTICLE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_AFFICHAGE_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_AFFICHAGE_ARTICLE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_AFFICHAGE_ARTICLE->Location = System::Drawing::Point(577, 590);
			   this->BOUTON_AFFICHAGE_ARTICLE->Name = L"BOUTON_AFFICHAGE_ARTICLE";
			   this->BOUTON_AFFICHAGE_ARTICLE->Size = System::Drawing::Size(151, 53);
			   this->BOUTON_AFFICHAGE_ARTICLE->TabIndex = 300;
			   this->BOUTON_AFFICHAGE_ARTICLE->Text = L"AFFICHAGE ARTICLE";
			   this->BOUTON_AFFICHAGE_ARTICLE->UseVisualStyleBackColor = false;
			   this->BOUTON_AFFICHAGE_ARTICLE->Click += gcnew System::EventHandler(this, &GestionStock::BOUTON_AFFICHAGE_ARTICLE_Click);
			   // 
			   // LABEL_TVA_ARTICLE
			   // 
			   this->LABEL_TVA_ARTICLE->AutoSize = true;
			   this->LABEL_TVA_ARTICLE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_TVA_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_TVA_ARTICLE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_TVA_ARTICLE->Location = System::Drawing::Point(98, 430);
			   this->LABEL_TVA_ARTICLE->Name = L"LABEL_TVA_ARTICLE";
			   this->LABEL_TVA_ARTICLE->Size = System::Drawing::Size(126, 29);
			   this->LABEL_TVA_ARTICLE->TabIndex = 287;
			   this->LABEL_TVA_ARTICLE->Text = L"Taux TVA";
			   // 
			   // BACKGROUND_STOCK_TEXTE
			   // 
			   this->BACKGROUND_STOCK_TEXTE->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BACKGROUND_STOCK_TEXTE.BackgroundImage")));
			   this->BACKGROUND_STOCK_TEXTE->Location = System::Drawing::Point(79, 117);
			   this->BACKGROUND_STOCK_TEXTE->Name = L"BACKGROUND_STOCK_TEXTE";
			   this->BACKGROUND_STOCK_TEXTE->Size = System::Drawing::Size(683, 550);
			   this->BACKGROUND_STOCK_TEXTE->TabIndex = 305;
			   this->BACKGROUND_STOCK_TEXTE->TabStop = false;
			   // 
			   // Background
			   // 
			   this->Background->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Background.Image")));
			   this->Background->Location = System::Drawing::Point(1, 53);
			   this->Background->Name = L"Background";
			   this->Background->Size = System::Drawing::Size(1273, 687);
			   this->Background->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->Background->TabIndex = 278;
			   this->Background->TabStop = false;
			   // 
			   // label40
			   // 
			   this->label40->AutoSize = true;
			   this->label40->ForeColor = System::Drawing::Color::Red;
			   this->label40->Location = System::Drawing::Point(818, 830);
			   this->label40->Name = L"label40";
			   this->label40->Size = System::Drawing::Size(250, 20);
			   this->label40->TabIndex = 274;
			   this->label40->Text = L"Message erreur potentielle ajouter";
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			   this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->button2->Location = System::Drawing::Point(1075, 49);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(145, 36);
			   this->button2->TabIndex = 273;
			   this->button2->Text = L"Précèdent";
			   this->button2->UseVisualStyleBackColor = false;
			   // 
			   // BOUTON_CLEAR_STOCK
			   // 
			   this->BOUTON_CLEAR_STOCK->BackColor = System::Drawing::Color::DarkRed;
			   this->BOUTON_CLEAR_STOCK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_CLEAR_STOCK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->BOUTON_CLEAR_STOCK->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_CLEAR_STOCK->Location = System::Drawing::Point(577, 134);
			   this->BOUTON_CLEAR_STOCK->Name = L"BOUTON_CLEAR_STOCK";
			   this->BOUTON_CLEAR_STOCK->Size = System::Drawing::Size(151, 23);
			   this->BOUTON_CLEAR_STOCK->TabIndex = 309;
			   this->BOUTON_CLEAR_STOCK->Text = L"CLEAR";
			   this->BOUTON_CLEAR_STOCK->UseVisualStyleBackColor = false;
			   this->BOUTON_CLEAR_STOCK->Click += gcnew System::EventHandler(this, &GestionStock::BOUTON_CLEAR_STOCK_Click);
			   // 
			   // TXT_STOCK_ARTICLE
			   // 
			   this->TXT_STOCK_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_STOCK_ARTICLE->Location = System::Drawing::Point(415, 193);
			   this->TXT_STOCK_ARTICLE->Name = L"TXT_STOCK_ARTICLE";
			   this->TXT_STOCK_ARTICLE->Size = System::Drawing::Size(286, 30);
			   this->TXT_STOCK_ARTICLE->TabIndex = 310;
			   // 
			   // LABEL_STOCK_ARTICLE
			   // 
			   this->LABEL_STOCK_ARTICLE->AutoSize = true;
			   this->LABEL_STOCK_ARTICLE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_STOCK_ARTICLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_STOCK_ARTICLE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_STOCK_ARTICLE->Location = System::Drawing::Point(411, 170);
			   this->LABEL_STOCK_ARTICLE->Name = L"LABEL_STOCK_ARTICLE";
			   this->LABEL_STOCK_ARTICLE->Size = System::Drawing::Size(157, 29);
			   this->LABEL_STOCK_ARTICLE->TabIndex = 311;
			   this->LABEL_STOCK_ARTICLE->Text = L"Stock article";
			   // 
			   // GestionStock
			   // 
			   this->ClientSize = System::Drawing::Size(1256, 725);
			   this->Controls->Add(this->LABEL_STOCK_ARTICLE);
			   this->Controls->Add(this->TXT_STOCK_ARTICLE);
			   this->Controls->Add(this->BOUTON_CLEAR_STOCK);
			   this->Controls->Add(this->AFFICHAGE_STOCK);
			   this->Controls->Add(this->TXT_COULEUR_ARTICLE);
			   this->Controls->Add(this->LOGO);
			   this->Controls->Add(this->RETURN_CLIENTS_HOME);
			   this->Controls->Add(this->NomApp);
			   this->Controls->Add(this->BarreNoir);
			   this->Controls->Add(this->TXT_PRIX_ARTICLE);
			   this->Controls->Add(this->TXT_NOM_ARTICLE);
			   this->Controls->Add(this->TITREADD_Stock);
			   this->Controls->Add(this->TXT_TVA_ARTICLE);
			   this->Controls->Add(this->LABEL_NOM_ARTICLE);
			   this->Controls->Add(this->TXT_ID_ARTICLE);
			   this->Controls->Add(this->LABEL_PRIX_ARTICLE);
			   this->Controls->Add(this->BOUTON_AJOUTER_ARTICLE);
			   this->Controls->Add(this->LABEL_ID_ARTICLE);
			   this->Controls->Add(this->BOUTON_SUPPRIMER_ARTICLE);
			   this->Controls->Add(this->LABEL8COULEUR_ARTICLE);
			   this->Controls->Add(this->BOUTON_MODIFIER_ARTICLE);
			   this->Controls->Add(this->BOUTON_AFFICHAGE_ARTICLE);
			   this->Controls->Add(this->LABEL_TVA_ARTICLE);
			   this->Controls->Add(this->BACKGROUND_STOCK_TEXTE);
			   this->Controls->Add(this->Background);
			   this->Controls->Add(this->label40);
			   this->Controls->Add(this->button2);
			   this->Name = L"GestionStock";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			   this->Load += gcnew System::EventHandler(this, &GestionStock::GestionStock_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHAGE_STOCK))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_STOCK_TEXTE))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Background))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }



#pragma endregion

	private: System::Void GestionStock_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc_Article = gcnew NS_Comp_Svc::CLservices_Article();

		this->AFFICHAGE_STOCK->Refresh();
		this->oDs = this->oSvc_Article->selectionner_Article("Rsl");
		this->AFFICHAGE_STOCK->DataSource = this->oDs;
		this->AFFICHAGE_STOCK->DataMember = "Rsl";

	}

	private: System::Void RETURN_CLIENTS_HOME_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ObjetStock->Show();
		this->Hide();

	}

	private: System::Void BOUTON_CLEAR_STOCK_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->TXT_NOM_ARTICLE->Text = "";
		this->TXT_PRIX_ARTICLE->Text = "";
		this->TXT_COULEUR_ARTICLE->Text = "";
		this->TXT_TVA_ARTICLE->Text = "";
		this->TXT_STOCK_ARTICLE->Text = "";
	}

	private: System::Void BOUTON_AJOUTER_ARTICLE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ Article_Nom = this->TXT_NOM_ARTICLE->Text;
		float Article_Prix;
		if (this->TXT_PRIX_ARTICLE->Text != "") {
			Article_Prix = Convert::ToSingle(this->TXT_PRIX_ARTICLE->Text);
		}
		String^ Article_Couleur = this->TXT_COULEUR_ARTICLE->Text;
		float Article_TVA;
		if (this->TXT_TVA_ARTICLE->Text != "") {
			Article_TVA = Convert::ToSingle(this->TXT_TVA_ARTICLE->Text);
		}
		int Article_Stock;
		if (this->TXT_STOCK_ARTICLE->Text != "")
		{
			Article_Stock = Convert::ToInt32(this->TXT_STOCK_ARTICLE->Text);
		}

		bool isNameValid = check_article_name_entry();
		bool isPriceValid = check_article_price_entry();
		bool isColorValid = check_article_color_entry();
		bool isTVAValid = check_article_TVA_entry();
		bool isQuantityValid = check_article_quantity_entry();

		if (isNameValid & isPriceValid & isColorValid & isTVAValid & isQuantityValid) {
			this->oSvc_Article->ajouter_Article(Article_Prix, Article_Nom, Article_Couleur, Article_Stock, Article_TVA);
		}

		// Action à faire

		// Vide de la page

		this->TXT_NOM_ARTICLE->Text = "";
		this->TXT_PRIX_ARTICLE->Text = "";
		this->TXT_COULEUR_ARTICLE->Text = "";
		this->TXT_TVA_ARTICLE->Text = "";
		this->TXT_STOCK_ARTICLE->Text = "";

		this->AFFICHAGE_STOCK->Refresh();
		this->oDs = this->oSvc_Article->selectionner_Article("Rsl");
		this->AFFICHAGE_STOCK->DataSource = this->oDs;
		this->AFFICHAGE_STOCK->DataMember = "Rsl";
	}




	private: System::Void BOUTON_MODIFIER_ARTICLE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int Article_ID;
		if (this->TXT_ID_ARTICLE->Text != "")
		{
			Article_ID = Convert::ToInt32(this->TXT_ID_ARTICLE->Text);
		}
		String^ Article_Nom = this->TXT_NOM_ARTICLE->Text;
		float Article_Prix;
		if (this->TXT_PRIX_ARTICLE->Text != "") {
			Article_Prix = Convert::ToSingle(this->TXT_PRIX_ARTICLE->Text);
		}
		String^ Article_Couleur = this->TXT_COULEUR_ARTICLE->Text;
		float Article_TVA;
		if (this->TXT_TVA_ARTICLE->Text != "") {
			Article_TVA = Convert::ToSingle(this->TXT_TVA_ARTICLE->Text);
		}
		int Article_Stock;
		if (this->TXT_STOCK_ARTICLE->Text != "")
		{
			Article_Stock = Convert::ToInt32(this->TXT_STOCK_ARTICLE->Text);
		}

		bool isIDValid = check_article_ID_entry();
		bool isNameValid = check_article_name_entry();
		bool isPriceValid = check_article_price_entry();
		bool isColorValid = check_article_color_entry();
		bool isTVAValid = check_article_TVA_entry();
		bool isQuantityValid = check_article_quantity_entry();

		if (isIDValid & isNameValid & isPriceValid & isColorValid & isTVAValid & isQuantityValid) {
			this->oSvc_Article->modifier_Article(Article_ID, Article_Prix, Article_Nom, Article_Couleur, Article_Stock, Article_TVA);
		}

		this->TXT_ID_ARTICLE->Text = "";
		this->TXT_NOM_ARTICLE->Text = "";
		this->TXT_PRIX_ARTICLE->Text = "";
		this->TXT_COULEUR_ARTICLE->Text = "";
		this->TXT_TVA_ARTICLE->Text = "";
		this->TXT_STOCK_ARTICLE->Text = "";

		this->AFFICHAGE_STOCK->Refresh();
		this->oDs = this->oSvc_Article->selectionner_Article("Rsl");
		this->AFFICHAGE_STOCK->DataSource = this->oDs;
		this->AFFICHAGE_STOCK->DataMember = "Rsl";
	}

	private: System::Void BOUTON_SUPPRIMER_ARTICLE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int Article_ID;
		if (this->TXT_ID_ARTICLE->Text != "")
		{
			Article_ID = Convert::ToInt32(this->TXT_ID_ARTICLE->Text);
		}

		bool isIDValid = check_article_ID_entry();

		this->oSvc_Article->supprimer_Article(Article_ID);

		this->TXT_ID_ARTICLE->Text = "";

		this->AFFICHAGE_STOCK->Refresh();
		this->oDs = this->oSvc_Article->selectionner_Article("Rsl");
		this->AFFICHAGE_STOCK->DataSource = this->oDs;
		this->AFFICHAGE_STOCK->DataMember = "Rsl";
	}

	private: System::Void BOUTON_AFFICHAGE_ARTICLE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->TXT_ID_ARTICLE->Text == "") {
			this->AFFICHAGE_STOCK->Refresh();
			this->oDs = this->oSvc_Article->selectionner_Article("Rsl");
			this->AFFICHAGE_STOCK->DataSource = this->oDs;
			this->AFFICHAGE_STOCK->DataMember = "Rsl";
		}
		else {
			int Article_ID = Convert::ToInt32(this->TXT_ID_ARTICLE->Text);

			this->AFFICHAGE_STOCK->Refresh();
			this->oDs = this->oSvc_Article->selectionner_Article_Id("Rsl", Article_ID);
			this->AFFICHAGE_STOCK->DataSource = this->oDs;
			this->AFFICHAGE_STOCK->DataMember = "Rsl";
		}
		
		this->TXT_ID_ARTICLE->Text = "";
	}



	private: System::Void SKIP_PERSONNEL_GAUCHE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ Article_ID = this->TXT_ID_ARTICLE->Text;

		this->TXT_ID_ARTICLE->Text = "Précédent";
		this->TXT_NOM_ARTICLE->Text = "Précédent";
		this->TXT_PRIX_ARTICLE->Text = "Précédent";
		this->TXT_COULEUR_ARTICLE->Text = "Précédent";
		this->TXT_TVA_ARTICLE->Text = "Précédent";
	}
	private: System::Void SKIP_PERSONNEL_DROITE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ Article_ID = this->TXT_ID_ARTICLE->Text;

		this->TXT_ID_ARTICLE->Text = "Suivant";
		this->TXT_NOM_ARTICLE->Text = "Suivant";
		this->TXT_PRIX_ARTICLE->Text = "Suivant";
		this->TXT_COULEUR_ARTICLE->Text = "Suivant";
		this->TXT_TVA_ARTICLE->Text = "Suivant";
	}


};
}
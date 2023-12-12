#pragma once

#include "GestionClient.h"
#include "GestionCommandes.h"
#include "GestionPersonnel.h"
#include "GestionStatistiques.h"
#include "GestionStock.h"
#include "HelpPage.h"
#include "CL_services.h"

namespace APPGRAPHIQUEPROJET {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class HomePage : public System::Windows::Forms::Form
	{
	public:
		Form^ Objet;

		HomePage(void)
		{
			InitializeComponent();
			this->label4->Text = "";
			this->label5->Text = "";
			this->label6->Text = "";
			this->label7->Text = "";
			this->label8->Text = "";
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}


		HomePage(Form^ Objet2)
		{
			Objet = Objet2;
			InitializeComponent();
			this->label4->Text = "";
			this->label5->Text = "";
			this->label6->Text = "";
			this->label7->Text = "";
			this->label8->Text = "";
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Bouton_Home_Client;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ Manuel_utilisation;
	private: System::Windows::Forms::DataGridView^ AFFICHAGE_INFO_MAIL;

	private: System::Windows::Forms::Label^ LABEL_INFO;

	private: NS_Comp_Svc::CLservices_Stat^ oSvc_Stat;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ AFFICHE_INFO_AUJ;


	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomePage::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Bouton_Home_Client = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Manuel_utilisation = (gcnew System::Windows::Forms::Button());
			this->AFFICHAGE_INFO_MAIL = (gcnew System::Windows::Forms::DataGridView());
			this->LABEL_INFO = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->AFFICHE_INFO_AUJ = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHAGE_INFO_MAIL))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHE_INFO_AUJ))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox2->ErrorImage = nullptr;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = nullptr;
			this->pictureBox2->Location = System::Drawing::Point(6, 7);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(60, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &HomePage::pictureBox2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(72, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(383, 62);
			this->label2->TabIndex = 2;
			this->label2->Text = L"GADGET GROVE";
			this->label2->Click += gcnew System::EventHandler(this, &HomePage::label2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox3->Location = System::Drawing::Point(-3, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1291, 56);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(57, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(217, 48);
			this->label3->TabIndex = 4;
			this->label3->Text = L"GESTION";
			this->label3->Click += gcnew System::EventHandler(this, &HomePage::label3_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(533, 12);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(303, 29);
			this->label15->TabIndex = 36;
			this->label15->Text = L"Make your inspiration real";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::White;
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(53, 76);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(1167, 610);
			this->pictureBox7->TabIndex = 41;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox5->ErrorImage = nullptr;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->InitialImage = nullptr;
			this->pictureBox5->Location = System::Drawing::Point(-3, 53);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(1425, 682);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 42;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &HomePage::pictureBox5_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(1078, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 36);
			this->button1->TabIndex = 10;
			this->button1->Text = L"DECONNEXION";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &HomePage::button1_Click);
			// 
			// Bouton_Home_Client
			// 
			this->Bouton_Home_Client->BackColor = System::Drawing::SystemColors::ControlText;
			this->Bouton_Home_Client->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Bouton_Home_Client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->Bouton_Home_Client->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Bouton_Home_Client->Location = System::Drawing::Point(67, 158);
			this->Bouton_Home_Client->Name = L"Bouton_Home_Client";
			this->Bouton_Home_Client->Size = System::Drawing::Size(375, 53);
			this->Bouton_Home_Client->TabIndex = 43;
			this->Bouton_Home_Client->Text = L"CLIENT";
			this->Bouton_Home_Client->UseVisualStyleBackColor = false;
			this->Bouton_Home_Client->Click += gcnew System::EventHandler(this, &HomePage::button2_Click_2);
			this->Bouton_Home_Client->MouseEnter += gcnew System::EventHandler(this, &HomePage::button2_MouseEnter);
			this->Bouton_Home_Client->MouseLeave += gcnew System::EventHandler(this, &HomePage::button2_MouseLeave);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlText;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(67, 373);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(375, 53);
			this->button3->TabIndex = 44;
			this->button3->Text = L"COMMANDE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &HomePage::button3_Click);
			this->button3->MouseEnter += gcnew System::EventHandler(this, &HomePage::button3_MouseEnter);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &HomePage::button3_MouseLeave);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlText;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(67, 261);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(375, 53);
			this->button4->TabIndex = 45;
			this->button4->Text = L"PERSONNEL";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &HomePage::button4_Click);
			this->button4->MouseEnter += gcnew System::EventHandler(this, &HomePage::button4_MouseEnter);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &HomePage::button4_MouseLeave);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Desktop;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(67, 606);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(375, 53);
			this->button5->TabIndex = 46;
			this->button5->Text = L"STATISTIQUES";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &HomePage::button5_Click);
			this->button5->MouseEnter += gcnew System::EventHandler(this, &HomePage::button5_MouseEnter);
			this->button5->MouseLeave += gcnew System::EventHandler(this, &HomePage::button5_MouseLeave);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Desktop;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(67, 498);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(375, 53);
			this->button2->TabIndex = 47;
			this->button2->Text = L"STOCK";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &HomePage::button2_Click_3);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &HomePage::button2_MouseEnter_3);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &HomePage::button2_MouseLeave_3);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(448, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 17);
			this->label4->TabIndex = 48;
			this->label4->Text = L"Description";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(448, 373);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 17);
			this->label5->TabIndex = 49;
			this->label5->Text = L"Description";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(448, 498);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 17);
			this->label6->TabIndex = 50;
			this->label6->Text = L"Description";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(448, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 17);
			this->label7->TabIndex = 51;
			this->label7->Text = L"Description";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(448, 606);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 17);
			this->label8->TabIndex = 52;
			this->label8->Text = L"Description";
			// 
			// Manuel_utilisation
			// 
			this->Manuel_utilisation->BackColor = System::Drawing::SystemColors::ControlText;
			this->Manuel_utilisation->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Manuel_utilisation.BackgroundImage")));
			this->Manuel_utilisation->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Manuel_utilisation->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Manuel_utilisation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->Manuel_utilisation->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Manuel_utilisation->Location = System::Drawing::Point(390, 93);
			this->Manuel_utilisation->Name = L"Manuel_utilisation";
			this->Manuel_utilisation->Size = System::Drawing::Size(52, 48);
			this->Manuel_utilisation->TabIndex = 53;
			this->Manuel_utilisation->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Manuel_utilisation->UseVisualStyleBackColor = false;
			this->Manuel_utilisation->Click += gcnew System::EventHandler(this, &HomePage::Manuel_utilisation_Click);
			// 
			// AFFICHAGE_INFO_MAIL
			// 
			this->AFFICHAGE_INFO_MAIL->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AFFICHAGE_INFO_MAIL->Location = System::Drawing::Point(783, 158);
			this->AFFICHAGE_INFO_MAIL->Name = L"AFFICHAGE_INFO_MAIL";
			this->AFFICHAGE_INFO_MAIL->RowHeadersWidth = 62;
			this->AFFICHAGE_INFO_MAIL->RowTemplate->Height = 28;
			this->AFFICHAGE_INFO_MAIL->Size = System::Drawing::Size(421, 176);
			this->AFFICHAGE_INFO_MAIL->TabIndex = 54;
			this->AFFICHAGE_INFO_MAIL->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &HomePage::AFFICHAGE_INFO_MAIL_CellContentClick);
			// 
			// LABEL_INFO
			// 
			this->LABEL_INFO->AutoSize = true;
			this->LABEL_INFO->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->LABEL_INFO->Location = System::Drawing::Point(783, 132);
			this->LABEL_INFO->Name = L"LABEL_INFO";
			this->LABEL_INFO->Size = System::Drawing::Size(133, 17);
			this->LABEL_INFO->TabIndex = 55;
			this->LABEL_INFO->Text = L"Client mail envoyé :";
			this->LABEL_INFO->Click += gcnew System::EventHandler(this, &HomePage::LABEL_INFO_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(780, 374);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(133, 17);
			this->label9->TabIndex = 56;
			this->label9->Text = L"Client anniversaire aujourd'hui :";
			this->label9->Click += gcnew System::EventHandler(this, &HomePage::label9_Click_1);
			// 
			// AFFICHE_INFO_AUJ
			// 
			this->AFFICHE_INFO_AUJ->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AFFICHE_INFO_AUJ->Location = System::Drawing::Point(783, 423);
			this->AFFICHE_INFO_AUJ->Name = L"AFFICHE_INFO_AUJ";
			this->AFFICHE_INFO_AUJ->RowHeadersWidth = 62;
			this->AFFICHE_INFO_AUJ->RowTemplate->Height = 28;
			this->AFFICHE_INFO_AUJ->Size = System::Drawing::Size(421, 176);
			this->AFFICHE_INFO_AUJ->TabIndex = 57;
			this->AFFICHE_INFO_AUJ->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &HomePage::AFFICHE_INFO_AUJ_CellContentClick);
			// 
			// HomePage
			// 
			this->ClientSize = System::Drawing::Size(1256, 725);
			this->Controls->Add(this->AFFICHE_INFO_AUJ);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->LABEL_INFO);
			this->Controls->Add(this->AFFICHAGE_INFO_MAIL);
			this->Controls->Add(this->Manuel_utilisation);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Bouton_Home_Client);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox5);
			this->Name = L"HomePage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Load += gcnew System::EventHandler(this, &HomePage::CreationCompte_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHAGE_INFO_MAIL))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHE_INFO_AUJ))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}



#pragma endregion


	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) // Déconnexion
	{
		this->Hide();
		Objet->Show();
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void CreationCompte_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
		this->AFFICHAGE_INFO_MAIL->Refresh();
		this->oDs = this->oSvc_Stat->Chek_anniv_15("Rsl");
		this->AFFICHAGE_INFO_MAIL->DataSource = this->oDs;
		this->AFFICHAGE_INFO_MAIL->DataMember = "Rsl";

		this->oSvc_Stat = gcnew NS_Comp_Svc::CLservices_Stat();
		this->AFFICHE_INFO_AUJ->Refresh();
		this->oDs = this->oSvc_Stat->Chek_anniv("Rs2");
		this->AFFICHE_INFO_AUJ->DataSource = this->oDs;
		this->AFFICHE_INFO_AUJ->DataMember = "Rs2";
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void elementHost1_ChildChanged(System::Object^ sender, System::Windows::Forms::Integration::ChildChangedEventArgs^ e) {
	}
	private: System::Void Manuel_utilisation_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		ManuelUtilisation^ ObjetManuel = gcnew ManuelUtilisation(this);
		
		ObjetManuel->ShowDialog();
	}


// DEFINITION DES BOUTONS POUR LES 4 MODES DE GESTION -----------------------------------------------------------------------------------------------

//Client--------------------------------------------------------------------------------------------------------------------------------
	private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		GestionClient^ ObjetClient = gcnew GestionClient(this);
		ObjetClient->ShowDialog();
	}

	private: System::Void button2_MouseEnter(System::Object^ sender, System::EventArgs^ e) // Afficher les infos de la modification Client
	{
		this->label4->Text = "Cette gestion de clients vous permet d'ajouter,\r\nde retirer, de modifier et d'afficher un client.";

	}
	private: System::Void button2_MouseLeave(System::Object^ sender, System::EventArgs^ e) // Retirer le texte
	{
		this->label4->Text = "";

	}
//--------------------------------------------------------------------------------------------------------------------------------------




//Commandes-----------------------------------------------------------------------------------------------------------------------------
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		GestionCommandes^ ObjetCommandes = gcnew GestionCommandes(this);
		ObjetCommandes->ShowDialog();

	}
	private: System::Void button3_MouseEnter(System::Object^ sender, System::EventArgs^ e) // Afficher les infos de la modification Client
	{
		this->label5->Text = "Cette gestion de commandes vous permet d'ajouter,\r\nde retirer, de modifier et d'afficher une commande.";

	}
	private: System::Void button3_MouseLeave(System::Object^ sender, System::EventArgs^ e) // Retirer le texte
	{
		this->label5->Text = "";

	}
//---------------------------------------------------------------------------------------------------------------------------------------




//Stocks--------------------------------------------------------------------------------------------------------------------------------
	private: System::Void button2_Click_3(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		GestionStock^ ObjetStat = gcnew GestionStock(this);
		ObjetStat->ShowDialog();
	}
	private: System::Void button2_MouseEnter_3(System::Object^ sender, System::EventArgs^ e) // Afficher les infos de la modification Client
	{
		this->label6->Text = "Cette gestion de stock permet de voir en temps réel,\r\nla quantité de stock pour chaque produit.";

	}
	private: System::Void button2_MouseLeave_3(System::Object^ sender, System::EventArgs^ e) // Retirer le texte
	{
		this->label6->Text = "";
	}
//--------------------------------------------------------------------------------------------------------------------------------------



//PERSONNEL-----------------------------------------------------------------------------------------------------------------------------
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) //Personnel
	{
		this->Hide();
		GestionPersonnel^ ObjetPersonnel = gcnew GestionPersonnel(this);
		ObjetPersonnel->ShowDialog();
	}
	private: System::Void button4_MouseEnter(System::Object^ sender, System::EventArgs^ e) // Afficher les infos de la modification Client
	{
		this->label7->Text = "Cette gestion de personnel vous permet d'ajouter,\r\nde retirer,de modifier et d'afficher un personnel.";
	}
	private: System::Void button4_MouseLeave(System::Object^ sender, System::EventArgs^ e) // Retirer le texte
	{
		this->label7->Text = "";

	}
//--------------------------------------------------------------------------------------------------------------------------------------



//STAT----------------------------------------------------------------------------------------------------------------------------------

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) //Statistiques
	{
		this->Hide();
		GestionStatistiques^ ObjetStat = gcnew GestionStatistiques(this);
		ObjetStat->ShowDialog();
		
	}
	private: System::Void button5_MouseEnter(System::Object^ sender, System::EventArgs^ e) // Afficher les infos de la modification Client
	{
		this->label8->Text = "Cette gestion de statistique permet d'afficher différentes\r\nconcernant la vente d'article, ...";

	}
	private: System::Void button5_MouseLeave(System::Object^ sender, System::EventArgs^ e) // Retirer le texte
	{
		this->label8->Text = "";

	}
		   
private: System::Void AFFICHE_INFO_AUJ_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void AFFICHAGE_INFO_MAIL_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label9_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LABEL_INFO_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
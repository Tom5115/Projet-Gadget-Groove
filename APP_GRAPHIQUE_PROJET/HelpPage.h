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
	public ref class ManuelUtilisation : public System::Windows::Forms::Form
	{
	public:
		Form^ ObjetManuel;
		ManuelUtilisation(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

		ManuelUtilisation(Form^ Objet)
		{
			ObjetManuel = Objet;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ManuelUtilisation()
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
	private: System::Windows::Forms::Button^ RETURN_MAUNEL_UTILISATION_HOME;
	private: System::Windows::Forms::Label^ TitreManuel;

	private: System::Windows::Forms::PictureBox^ BarreNoir;










	private: System::Windows::Forms::PictureBox^ pictureBox1;






#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->RETURN_MAUNEL_UTILISATION_HOME = (gcnew System::Windows::Forms::Button());
			   this->TitreManuel = (gcnew System::Windows::Forms::Label());
			   this->BarreNoir = (gcnew System::Windows::Forms::PictureBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // RETURN_MAUNEL_UTILISATION_HOME
			   // 
			   this->RETURN_MAUNEL_UTILISATION_HOME->BackColor = System::Drawing::Color::Brown;
			   this->RETURN_MAUNEL_UTILISATION_HOME->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->RETURN_MAUNEL_UTILISATION_HOME->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->RETURN_MAUNEL_UTILISATION_HOME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			   this->RETURN_MAUNEL_UTILISATION_HOME->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->RETURN_MAUNEL_UTILISATION_HOME->Location = System::Drawing::Point(1133, 9);
			   this->RETURN_MAUNEL_UTILISATION_HOME->Name = L"RETURN_MAUNEL_UTILISATION_HOME";
			   this->RETURN_MAUNEL_UTILISATION_HOME->Size = System::Drawing::Size(93, 62);
			   this->RETURN_MAUNEL_UTILISATION_HOME->TabIndex = 243;
			   this->RETURN_MAUNEL_UTILISATION_HOME->Text = L"RETOUR";
			   this->RETURN_MAUNEL_UTILISATION_HOME->UseVisualStyleBackColor = false;
			   this->RETURN_MAUNEL_UTILISATION_HOME->Click += gcnew System::EventHandler(this, &ManuelUtilisation::RETURN_STATS_HOME_Click);
			   // 
			   // TitreManuel
			   // 
			   this->TitreManuel->AutoSize = true;
			   this->TitreManuel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->TitreManuel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TitreManuel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->TitreManuel->Location = System::Drawing::Point(68, 0);
			   this->TitreManuel->Name = L"TitreManuel";
			   this->TitreManuel->Size = System::Drawing::Size(494, 62);
			   this->TitreManuel->TabIndex = 241;
			   this->TitreManuel->Text = L"| Manuel d\'utilisation";
			   this->TitreManuel->Click += gcnew System::EventHandler(this, &ManuelUtilisation::TitreManuel_Click);
			   // 
			   // BarreNoir
			   // 
			   this->BarreNoir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->BarreNoir->Location = System::Drawing::Point(-21, -80);
			   this->BarreNoir->Name = L"BarreNoir";
			   this->BarreNoir->Size = System::Drawing::Size(1291, 159);
			   this->BarreNoir->TabIndex = 242;
			   this->BarreNoir->TabStop = false;
			   // 
			   // ManuelUtilisation
			   // 
			   this->ClientSize = System::Drawing::Size(1256, 725);
			   this->Controls->Add(this->RETURN_MAUNEL_UTILISATION_HOME);
			   this->Controls->Add(this->TitreManuel);
			   this->Controls->Add(this->BarreNoir);
			   this->Name = L"ManuelUtilisation";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }



#pragma endregion
	private: System::Void RETURN_STATS_HOME_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		ObjetManuel->Show();
	}

private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TitreManuel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

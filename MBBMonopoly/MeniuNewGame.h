#pragma once
#include "MeniuHowManyAI.h"
#include "MeniuHowManyAI2.h"
#include "MeniuHowManyAI3.h"
#include "MeniuHowManyAI4.h"
#include "MeniuAssignPlayerNames.h"

namespace MBBMonopoly
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuNewGame
	/// </summary>
	public ref class MeniuNewGame : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form ^ Meniu;
	public:
		MeniuNewGame(System::Windows::Forms::Form ^ o)
		{
			Meniu = o;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MeniuNewGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  HowManyPlayers;
	private: System::Windows::Forms::Button^  btnHumanPlayers0;
	private: System::Windows::Forms::Button^  btnHumanPlayers1;
	private: System::Windows::Forms::Button^  btnHumanPlayers2;
	private: System::Windows::Forms::Button^  btnHumanPlayers3;
	private: System::Windows::Forms::Button^  btnHumanPlayers4;
	private: System::Windows::Forms::Button^  btnBackMeniuNewGame;		
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuNewGame::typeid));
			this->HowManyPlayers = (gcnew System::Windows::Forms::PictureBox());
			this->btnHumanPlayers0 = (gcnew System::Windows::Forms::Button());
			this->btnHumanPlayers1 = (gcnew System::Windows::Forms::Button());
			this->btnHumanPlayers3 = (gcnew System::Windows::Forms::Button());
			this->btnHumanPlayers4 = (gcnew System::Windows::Forms::Button());
			this->btnBackMeniuNewGame = (gcnew System::Windows::Forms::Button());
			this->btnHumanPlayers2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HowManyPlayers))->BeginInit();
			this->SuspendLayout();
			// 
			// HowManyPlayers
			// 
			this->HowManyPlayers->BackColor = System::Drawing::Color::Transparent;
			this->HowManyPlayers->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HowManyPlayers.BackgroundImage")));
			this->HowManyPlayers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HowManyPlayers->Location = System::Drawing::Point(59, 75);
			this->HowManyPlayers->Name = L"HowManyPlayers";
			this->HowManyPlayers->Size = System::Drawing::Size(400, 70);
			this->HowManyPlayers->TabIndex = 0;
			this->HowManyPlayers->TabStop = false;
			// 
			// btnHumanPlayers0
			// 
			this->btnHumanPlayers0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHumanPlayers0.BackgroundImage")));
			this->btnHumanPlayers0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHumanPlayers0->Location = System::Drawing::Point(57, 193);
			this->btnHumanPlayers0->Name = L"btnHumanPlayers0";
			this->btnHumanPlayers0->Size = System::Drawing::Size(100, 50);
			this->btnHumanPlayers0->TabIndex = 1;
			this->btnHumanPlayers0->UseVisualStyleBackColor = true;
			this->btnHumanPlayers0->Click += gcnew System::EventHandler(this, &MeniuNewGame::btnHumanPlayers0_Click);
			// 
			// btnHumanPlayers1
			// 
			this->btnHumanPlayers1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHumanPlayers1.BackgroundImage")));
			this->btnHumanPlayers1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHumanPlayers1->Location = System::Drawing::Point(208, 193);
			this->btnHumanPlayers1->Name = L"btnHumanPlayers1";
			this->btnHumanPlayers1->Size = System::Drawing::Size(100, 50);
			this->btnHumanPlayers1->TabIndex = 2;
			this->btnHumanPlayers1->UseVisualStyleBackColor = true;
			this->btnHumanPlayers1->Click += gcnew System::EventHandler(this, &MeniuNewGame::btnHumanPlayers1_Click);
			// 
			// btnHumanPlayers3
			// 
			this->btnHumanPlayers3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHumanPlayers3.BackgroundImage")));
			this->btnHumanPlayers3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHumanPlayers3->Location = System::Drawing::Point(129, 285);
			this->btnHumanPlayers3->Name = L"btnHumanPlayers3";
			this->btnHumanPlayers3->Size = System::Drawing::Size(100, 50);
			this->btnHumanPlayers3->TabIndex = 4;
			this->btnHumanPlayers3->UseVisualStyleBackColor = true;
			this->btnHumanPlayers3->Click += gcnew System::EventHandler(this, &MeniuNewGame::btnHumanPlayers3_Click);
			// 
			// btnHumanPlayers4
			// 
			this->btnHumanPlayers4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHumanPlayers4.BackgroundImage")));
			this->btnHumanPlayers4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHumanPlayers4->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnHumanPlayers4->Location = System::Drawing::Point(287, 285);
			this->btnHumanPlayers4->Name = L"btnHumanPlayers4";
			this->btnHumanPlayers4->Size = System::Drawing::Size(100, 50);
			this->btnHumanPlayers4->TabIndex = 5;
			this->btnHumanPlayers4->UseVisualStyleBackColor = true;
			this->btnHumanPlayers4->Click += gcnew System::EventHandler(this, &MeniuNewGame::btnHumanPlayers4_Click);
			// 
			// btnBackMeniuNewGame
			// 
			this->btnBackMeniuNewGame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackMeniuNewGame.BackgroundImage")));
			this->btnBackMeniuNewGame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBackMeniuNewGame->Location = System::Drawing::Point(846, 528);
			this->btnBackMeniuNewGame->Name = L"btnBackMeniuNewGame";
			this->btnBackMeniuNewGame->Size = System::Drawing::Size(150, 50);
			this->btnBackMeniuNewGame->TabIndex = 6;
			this->btnBackMeniuNewGame->UseVisualStyleBackColor = true;
			this->btnBackMeniuNewGame->Click += gcnew System::EventHandler(this, &MeniuNewGame::btnBackMeniuNewGame_Click);
			// 
			// btnHumanPlayers2
			// 
			this->btnHumanPlayers2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHumanPlayers2.BackgroundImage")));
			this->btnHumanPlayers2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHumanPlayers2->Location = System::Drawing::Point(359, 193);
			this->btnHumanPlayers2->Name = L"btnHumanPlayers2";
			this->btnHumanPlayers2->Size = System::Drawing::Size(100, 50);
			this->btnHumanPlayers2->TabIndex = 7;
			this->btnHumanPlayers2->UseVisualStyleBackColor = true;
			this->btnHumanPlayers2->Click += gcnew System::EventHandler(this, &MeniuNewGame::btnHumanPlayers2_Click);
			// 
			// MeniuNewGame
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnBackMeniuNewGame);
			this->Controls->Add(this->btnHumanPlayers4);
			this->Controls->Add(this->btnHumanPlayers3);
			this->Controls->Add(this->btnHumanPlayers2);
			this->Controls->Add(this->btnHumanPlayers1);
			this->Controls->Add(this->btnHumanPlayers0);
			this->Controls->Add(this->HowManyPlayers);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Location = System::Drawing::Point(361, 193);
			this->Name = L"MeniuNewGame";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HowManyPlayers))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
		private: System::Void btnBackMeniuNewGame_Click(System::Object^  sender, System::EventArgs^  e)
		{
			this->Hide();
			Meniu->Show();
		}
		private: System::Void btnHumanPlayers0_Click(System::Object^  sender, System::EventArgs^  e)
		{
			MeniuHowManyAI^ form = gcnew MeniuHowManyAI();
			this->Close();
			form->Show();
		}
		private: System::Void btnHumanPlayers1_Click(System::Object^  sender, System::EventArgs^  e)
		{
			MeniuHowManyAI2^ form = gcnew MeniuHowManyAI2();
			this->Close();
			form->Show();
		}
		private: System::Void btnHumanPlayers2_Click(System::Object^  sender, System::EventArgs^  e)
		{
			MeniuHowManyAI3^ form = gcnew MeniuHowManyAI3();
			this->Close();
			form->Show();
		}
		private: System::Void btnHumanPlayers3_Click(System::Object^  sender, System::EventArgs^  e)
		{
			MeniuHowManyAI4^ form = gcnew MeniuHowManyAI4();
			this->Close();
			form->Show();
		}
		private: System::Void btnHumanPlayers4_Click(System::Object^  sender, System::EventArgs^  e)
		{
			MeniuAssignPlayerNames^ form = gcnew MeniuAssignPlayerNames();
			this->Close();
			form->Show();
		}
	};
}

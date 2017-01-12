#pragma once
#include "MeniuNewGame.h"
#include "MeniuMyScore.h"
#include "MeniuCreateUser.h"

using namespace std;

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Meniu
	/// </summary>
	public ref class Meniu : public System::Windows::Forms::Form
	{
		public:
			Meniu(void)
			{
				InitializeComponent();
				//
				//TODO: Add the constructor code here
				//
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~Meniu()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Button^  btnNewGame;
		private: System::Windows::Forms::Button^  btnCreateUser;
		private: System::Windows::Forms::Button^  btnMyScore;
		protected:

		protected:



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
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Meniu::typeid));
				this->btnNewGame = (gcnew System::Windows::Forms::Button());
				this->btnCreateUser = (gcnew System::Windows::Forms::Button());
				this->btnMyScore = (gcnew System::Windows::Forms::Button());
				this->SuspendLayout();
				// 
				// btnNewGame
				// 
				this->btnNewGame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNewGame.BackgroundImage")));
				this->btnNewGame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->btnNewGame->Location = System::Drawing::Point(113, 93);
				this->btnNewGame->Name = L"btnNewGame";
				this->btnNewGame->Size = System::Drawing::Size(300, 70);
				this->btnNewGame->TabIndex = 0;
				this->btnNewGame->UseVisualStyleBackColor = true;
				this->btnNewGame->Click += gcnew System::EventHandler(this, &Meniu::btnNewGame_Click);
				// 
				// btnCreateUser
				// 
				this->btnCreateUser->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCreateUser.BackgroundImage")));
				this->btnCreateUser->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->btnCreateUser->Location = System::Drawing::Point(113, 220);
				this->btnCreateUser->Name = L"btnCreateUser";
				this->btnCreateUser->Size = System::Drawing::Size(300, 70);
				this->btnCreateUser->TabIndex = 1;
				this->btnCreateUser->UseVisualStyleBackColor = true;
				this->btnCreateUser->Click += gcnew System::EventHandler(this, &Meniu::btnCreateUser_Click);
				// 
				// btnMyScore
				// 
				this->btnMyScore->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMyScore.BackgroundImage")));
				this->btnMyScore->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->btnMyScore->Location = System::Drawing::Point(113, 350);
				this->btnMyScore->Name = L"btnMyScore";
				this->btnMyScore->Size = System::Drawing::Size(300, 70);
				this->btnMyScore->TabIndex = 2;
				this->btnMyScore->UseVisualStyleBackColor = true;
				this->btnMyScore->Click += gcnew System::EventHandler(this, &Meniu::btnMyScore_Click);
				// 
				// Meniu
				// 
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
				this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ClientSize = System::Drawing::Size(1006, 593);
				this->Controls->Add(this->btnMyScore);
				this->Controls->Add(this->btnCreateUser);
				this->Controls->Add(this->btnNewGame);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
				this->MaximumSize = System::Drawing::Size(1024, 640);
				this->Name = L"Meniu";
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				this->Text = L"MBB Monopoly";
				this->ResumeLayout(false);

			}
#pragma endregion
		private: System::Void btnNewGame_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			MeniuNewGame^ form = gcnew MeniuNewGame();
			this->Close();
			form->Show();
		}

		private: System::Void btnCreateUser_Click(System::Object^  sender, System::EventArgs^  e)
		{
			MeniuCreateUser^ form = gcnew MeniuCreateUser();
			this->Close();
			form->Show();
		}
		private: System::Void btnMyScore_Click(System::Object^  sender, System::EventArgs^  e)
		{
			MeniuMyScore^ form = gcnew MeniuMyScore();
			this->Close();
			form->Show();
		}
	};
}

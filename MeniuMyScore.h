#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuMyScore
	/// </summary>
	public ref class MeniuMyScore : public System::Windows::Forms::Form
	{
	public:
		MeniuMyScore(void)
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
		~MeniuMyScore()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  ClassicGamesWon;
	private: System::Windows::Forms::PictureBox^  ClassicGamesPlayed;
	protected:

	protected:

	private: System::Windows::Forms::Button^  btn_back3;
	private: System::Windows::Forms::PictureBox^  FunGamesWon;
	private: System::Windows::Forms::PictureBox^  FunGamesPlayed;
	private: System::Windows::Forms::PictureBox^  Score;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuMyScore::typeid));
			this->ClassicGamesWon = (gcnew System::Windows::Forms::PictureBox());
			this->ClassicGamesPlayed = (gcnew System::Windows::Forms::PictureBox());
			this->btn_back3 = (gcnew System::Windows::Forms::Button());
			this->FunGamesWon = (gcnew System::Windows::Forms::PictureBox());
			this->FunGamesPlayed = (gcnew System::Windows::Forms::PictureBox());
			this->Score = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClassicGamesWon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClassicGamesPlayed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FunGamesWon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FunGamesPlayed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Score))->BeginInit();
			this->SuspendLayout();
			// 
			// ClassicGamesWon
			// 
			this->ClassicGamesWon->BackColor = System::Drawing::Color::Transparent;
			this->ClassicGamesWon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ClassicGamesWon.BackgroundImage")));
			this->ClassicGamesWon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClassicGamesWon->Location = System::Drawing::Point(29, 72);
			this->ClassicGamesWon->Name = L"ClassicGamesWon";
			this->ClassicGamesWon->Size = System::Drawing::Size(400, 70);
			this->ClassicGamesWon->TabIndex = 0;
			this->ClassicGamesWon->TabStop = false;
			// 
			// ClassicGamesPlayed
			// 
			this->ClassicGamesPlayed->BackColor = System::Drawing::Color::Transparent;
			this->ClassicGamesPlayed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ClassicGamesPlayed.BackgroundImage")));
			this->ClassicGamesPlayed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClassicGamesPlayed->Location = System::Drawing::Point(29, 186);
			this->ClassicGamesPlayed->Name = L"ClassicGamesPlayed";
			this->ClassicGamesPlayed->Size = System::Drawing::Size(400, 70);
			this->ClassicGamesPlayed->TabIndex = 1;
			this->ClassicGamesPlayed->TabStop = false;
			// 
			// btn_back3
			// 
			this->btn_back3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_back3.BackgroundImage")));
			this->btn_back3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_back3->Location = System::Drawing::Point(846, 528);
			this->btn_back3->Name = L"btn_back3";
			this->btn_back3->Size = System::Drawing::Size(150, 50);
			this->btn_back3->TabIndex = 3;
			this->btn_back3->UseVisualStyleBackColor = true;
			// 
			// FunGamesWon
			// 
			this->FunGamesWon->BackColor = System::Drawing::Color::Transparent;
			this->FunGamesWon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FunGamesWon.BackgroundImage")));
			this->FunGamesWon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FunGamesWon->Location = System::Drawing::Point(29, 303);
			this->FunGamesWon->Name = L"FunGamesWon";
			this->FunGamesWon->Size = System::Drawing::Size(400, 70);
			this->FunGamesWon->TabIndex = 4;
			this->FunGamesWon->TabStop = false;
			// 
			// FunGamesPlayed
			// 
			this->FunGamesPlayed->BackColor = System::Drawing::Color::Transparent;
			this->FunGamesPlayed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FunGamesPlayed.BackgroundImage")));
			this->FunGamesPlayed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FunGamesPlayed->Location = System::Drawing::Point(29, 420);
			this->FunGamesPlayed->Name = L"FunGamesPlayed";
			this->FunGamesPlayed->Size = System::Drawing::Size(400, 70);
			this->FunGamesPlayed->TabIndex = 5;
			this->FunGamesPlayed->TabStop = false;
			// 
			// Score
			// 
			this->Score->BackColor = System::Drawing::Color::Transparent;
			this->Score->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Score.BackgroundImage")));
			this->Score->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Score->Location = System::Drawing::Point(335, 508);
			this->Score->Name = L"Score";
			this->Score->Size = System::Drawing::Size(200, 70);
			this->Score->TabIndex = 6;
			this->Score->TabStop = false;
			// 
			// MeniuMyScore
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->Score);
			this->Controls->Add(this->FunGamesPlayed);
			this->Controls->Add(this->FunGamesWon);
			this->Controls->Add(this->btn_back3);
			this->Controls->Add(this->ClassicGamesPlayed);
			this->Controls->Add(this->ClassicGamesWon);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuMyScore";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClassicGamesWon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClassicGamesPlayed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FunGamesWon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FunGamesPlayed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Score))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

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
	private: System::Windows::Forms::Button^  btnBackMeniuMyScore;
	protected:

	protected:


	private: System::Windows::Forms::PictureBox^  FunGamesWon;
	private: System::Windows::Forms::PictureBox^  FunGamesPlayed;
	private: System::Windows::Forms::PictureBox^  Score;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  SearchTextBox;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  PlayerNameTextBox;
	private: System::Windows::Forms::TextBox^  ScoreTextBox;
	private: System::Windows::Forms::TextBox^  FunGamesWonTextBox;
	private: System::Windows::Forms::TextBox^  FunGamesPlayedTextBox;
	private: System::Windows::Forms::TextBox^  ClassicGamesWonTextBox;
	private: System::Windows::Forms::TextBox^  ClassicGamesPlayedTextBox;




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
			this->btnBackMeniuMyScore = (gcnew System::Windows::Forms::Button());
			this->FunGamesWon = (gcnew System::Windows::Forms::PictureBox());
			this->FunGamesPlayed = (gcnew System::Windows::Forms::PictureBox());
			this->Score = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SearchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PlayerNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ScoreTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FunGamesWonTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FunGamesPlayedTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ClassicGamesWonTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ClassicGamesPlayedTextBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClassicGamesWon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClassicGamesPlayed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FunGamesWon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FunGamesPlayed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Score))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// ClassicGamesWon
			// 
			this->ClassicGamesWon->BackColor = System::Drawing::Color::Transparent;
			this->ClassicGamesWon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ClassicGamesWon.BackgroundImage")));
			this->ClassicGamesWon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClassicGamesWon->Location = System::Drawing::Point(29, 161);
			this->ClassicGamesWon->Name = L"ClassicGamesWon";
			this->ClassicGamesWon->Size = System::Drawing::Size(250, 50);
			this->ClassicGamesWon->TabIndex = 0;
			this->ClassicGamesWon->TabStop = false;
			// 
			// ClassicGamesPlayed
			// 
			this->ClassicGamesPlayed->BackColor = System::Drawing::Color::Transparent;
			this->ClassicGamesPlayed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ClassicGamesPlayed.BackgroundImage")));
			this->ClassicGamesPlayed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClassicGamesPlayed->Location = System::Drawing::Point(29, 245);
			this->ClassicGamesPlayed->Name = L"ClassicGamesPlayed";
			this->ClassicGamesPlayed->Size = System::Drawing::Size(250, 50);
			this->ClassicGamesPlayed->TabIndex = 1;
			this->ClassicGamesPlayed->TabStop = false;
			// 
			// btnBackMeniuMyScore
			// 
			this->btnBackMeniuMyScore->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackMeniuMyScore.BackgroundImage")));
			this->btnBackMeniuMyScore->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBackMeniuMyScore->Location = System::Drawing::Point(846, 528);
			this->btnBackMeniuMyScore->Name = L"btnBackMeniuMyScore";
			this->btnBackMeniuMyScore->Size = System::Drawing::Size(150, 50);
			this->btnBackMeniuMyScore->TabIndex = 3;
			this->btnBackMeniuMyScore->UseVisualStyleBackColor = true;
			// 
			// FunGamesWon
			// 
			this->FunGamesWon->BackColor = System::Drawing::Color::Transparent;
			this->FunGamesWon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FunGamesWon.BackgroundImage")));
			this->FunGamesWon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FunGamesWon->Location = System::Drawing::Point(29, 327);
			this->FunGamesWon->Name = L"FunGamesWon";
			this->FunGamesWon->Size = System::Drawing::Size(250, 50);
			this->FunGamesWon->TabIndex = 4;
			this->FunGamesWon->TabStop = false;
			// 
			// FunGamesPlayed
			// 
			this->FunGamesPlayed->BackColor = System::Drawing::Color::Transparent;
			this->FunGamesPlayed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FunGamesPlayed.BackgroundImage")));
			this->FunGamesPlayed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FunGamesPlayed->Location = System::Drawing::Point(29, 411);
			this->FunGamesPlayed->Name = L"FunGamesPlayed";
			this->FunGamesPlayed->Size = System::Drawing::Size(250, 50);
			this->FunGamesPlayed->TabIndex = 5;
			this->FunGamesPlayed->TabStop = false;
			// 
			// Score
			// 
			this->Score->BackColor = System::Drawing::Color::Transparent;
			this->Score->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Score.BackgroundImage")));
			this->Score->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Score->Location = System::Drawing::Point(29, 497);
			this->Score->Name = L"Score";
			this->Score->Size = System::Drawing::Size(250, 50);
			this->Score->TabIndex = 6;
			this->Score->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(25, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 24);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Search";
			// 
			// SearchTextBox
			// 
			this->SearchTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchTextBox->Location = System::Drawing::Point(122, 17);
			this->SearchTextBox->Name = L"SearchTextBox";
			this->SearchTextBox->Size = System::Drawing::Size(189, 29);
			this->SearchTextBox->TabIndex = 8;
			this->SearchTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(29, 79);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 50);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// PlayerNameTextBox
			// 
			this->PlayerNameTextBox->Font = (gcnew System::Drawing::Font(L"Monopoly", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerNameTextBox->Location = System::Drawing::Point(314, 92);
			this->PlayerNameTextBox->Name = L"PlayerNameTextBox";
			this->PlayerNameTextBox->Size = System::Drawing::Size(193, 27);
			this->PlayerNameTextBox->TabIndex = 10;
			this->PlayerNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ScoreTextBox
			// 
			this->ScoreTextBox->Font = (gcnew System::Drawing::Font(L"Monopoly", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ScoreTextBox->Location = System::Drawing::Point(313, 511);
			this->ScoreTextBox->Name = L"ScoreTextBox";
			this->ScoreTextBox->Size = System::Drawing::Size(193, 27);
			this->ScoreTextBox->TabIndex = 11;
			this->ScoreTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// FunGamesWonTextBox
			// 
			this->FunGamesWonTextBox->Font = (gcnew System::Drawing::Font(L"Monopoly", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FunGamesWonTextBox->Location = System::Drawing::Point(314, 424);
			this->FunGamesWonTextBox->Name = L"FunGamesWonTextBox";
			this->FunGamesWonTextBox->Size = System::Drawing::Size(193, 27);
			this->FunGamesWonTextBox->TabIndex = 12;
			// 
			// FunGamesPlayedTextBox
			// 
			this->FunGamesPlayedTextBox->Font = (gcnew System::Drawing::Font(L"Monopoly", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FunGamesPlayedTextBox->Location = System::Drawing::Point(314, 337);
			this->FunGamesPlayedTextBox->Name = L"FunGamesPlayedTextBox";
			this->FunGamesPlayedTextBox->Size = System::Drawing::Size(193, 27);
			this->FunGamesPlayedTextBox->TabIndex = 13;
			this->FunGamesPlayedTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ClassicGamesWonTextBox
			// 
			this->ClassicGamesWonTextBox->Font = (gcnew System::Drawing::Font(L"Monopoly", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClassicGamesWonTextBox->Location = System::Drawing::Point(314, 256);
			this->ClassicGamesWonTextBox->Name = L"ClassicGamesWonTextBox";
			this->ClassicGamesWonTextBox->Size = System::Drawing::Size(193, 27);
			this->ClassicGamesWonTextBox->TabIndex = 14;
			this->ClassicGamesWonTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ClassicGamesPlayedTextBox
			// 
			this->ClassicGamesPlayedTextBox->Font = (gcnew System::Drawing::Font(L"Monopoly", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClassicGamesPlayedTextBox->Location = System::Drawing::Point(314, 174);
			this->ClassicGamesPlayedTextBox->Name = L"ClassicGamesPlayedTextBox";
			this->ClassicGamesPlayedTextBox->Size = System::Drawing::Size(193, 27);
			this->ClassicGamesPlayedTextBox->TabIndex = 15;
			this->ClassicGamesPlayedTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MeniuMyScore
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->ClassicGamesPlayedTextBox);
			this->Controls->Add(this->ClassicGamesWonTextBox);
			this->Controls->Add(this->FunGamesPlayedTextBox);
			this->Controls->Add(this->FunGamesWonTextBox);
			this->Controls->Add(this->ScoreTextBox);
			this->Controls->Add(this->PlayerNameTextBox);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->SearchTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Score);
			this->Controls->Add(this->FunGamesPlayed);
			this->Controls->Add(this->FunGamesWon);
			this->Controls->Add(this->btnBackMeniuMyScore);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

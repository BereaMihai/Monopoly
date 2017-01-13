#pragma once

namespace MBBMonopoly {

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
	public:
		MeniuNewGame(void)
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
		~MeniuNewGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  HowManyPlayers;
	protected:
	private: System::Windows::Forms::Button^  btn_0;
	private: System::Windows::Forms::Button^  btn_1;
	private: System::Windows::Forms::Button^  btn_2;
	private: System::Windows::Forms::Button^  btn_3;
	private: System::Windows::Forms::Button^  btn_4;
	private: System::Windows::Forms::Button^  btn_back;

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
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_back = (gcnew System::Windows::Forms::Button());
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
			// btn_0
			// 
			this->btn_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_0.BackgroundImage")));
			this->btn_0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_0->Location = System::Drawing::Point(57, 193);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(100, 50);
			this->btn_0->TabIndex = 1;
			this->btn_0->UseVisualStyleBackColor = true;
			// 
			// btn_1
			// 
			this->btn_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_1.BackgroundImage")));
			this->btn_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_1->Location = System::Drawing::Point(208, 193);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(100, 50);
			this->btn_1->TabIndex = 2;
			this->btn_1->UseVisualStyleBackColor = true;
			// 
			// btn_2
			// 
			this->btn_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_2.BackgroundImage")));
			this->btn_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_2->Location = System::Drawing::Point(361, 193);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(100, 50);
			this->btn_2->TabIndex = 3;
			this->btn_2->UseVisualStyleBackColor = true;
			// 
			// btn_3
			// 
			this->btn_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_3.BackgroundImage")));
			this->btn_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_3->Location = System::Drawing::Point(129, 285);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(100, 50);
			this->btn_3->TabIndex = 4;
			this->btn_3->UseVisualStyleBackColor = true;
			// 
			// btn_4
			// 
			this->btn_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_4.BackgroundImage")));
			this->btn_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_4->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_4->Location = System::Drawing::Point(287, 285);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(100, 50);
			this->btn_4->TabIndex = 5;
			this->btn_4->UseVisualStyleBackColor = true;
			// 
			// btn_back
			// 
			this->btn_back->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_back.BackgroundImage")));
			this->btn_back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_back->Location = System::Drawing::Point(846, 528);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(150, 50);
			this->btn_back->TabIndex = 6;
			this->btn_back->UseVisualStyleBackColor = true;
			// 
			// MeniuNewGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->HowManyPlayers);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuNewGame";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HowManyPlayers))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

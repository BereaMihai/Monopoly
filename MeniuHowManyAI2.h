#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuHowManyAI2
	/// </summary>
	public ref class MeniuHowManyAI2 : public System::Windows::Forms::Form
	{
	public:
		MeniuHowManyAI2(void)
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
		~MeniuHowManyAI2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  HowManyAI;
	private: System::Windows::Forms::Button^  btnPlayer1AI1;
	private: System::Windows::Forms::Button^  btnPlayer1AI2;
	private: System::Windows::Forms::Button^  btnPlayer1AI3;
	private: System::Windows::Forms::Button^  btnBackHowManyAI2;










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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuHowManyAI2::typeid));
			this->HowManyAI = (gcnew System::Windows::Forms::PictureBox());
			this->btnPlayer1AI1 = (gcnew System::Windows::Forms::Button());
			this->btnPlayer1AI2 = (gcnew System::Windows::Forms::Button());
			this->btnPlayer1AI3 = (gcnew System::Windows::Forms::Button());
			this->btnBackHowManyAI2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HowManyAI))->BeginInit();
			this->SuspendLayout();
			// 
			// HowManyAI
			// 
			this->HowManyAI->BackColor = System::Drawing::Color::Transparent;
			this->HowManyAI->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HowManyAI.BackgroundImage")));
			this->HowManyAI->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HowManyAI->Location = System::Drawing::Point(101, 70);
			this->HowManyAI->Name = L"HowManyAI";
			this->HowManyAI->Size = System::Drawing::Size(300, 70);
			this->HowManyAI->TabIndex = 1;
			this->HowManyAI->TabStop = false;
			// 
			// btnPlayer1AI1
			// 
			this->btnPlayer1AI1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlayer1AI1.BackgroundImage")));
			this->btnPlayer1AI1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlayer1AI1->Location = System::Drawing::Point(63, 207);
			this->btnPlayer1AI1->Name = L"btnPlayer1AI1";
			this->btnPlayer1AI1->Size = System::Drawing::Size(100, 50);
			this->btnPlayer1AI1->TabIndex = 4;
			this->btnPlayer1AI1->UseVisualStyleBackColor = true;
			// 
			// btnPlayer1AI2
			// 
			this->btnPlayer1AI2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlayer1AI2.BackgroundImage")));
			this->btnPlayer1AI2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlayer1AI2->Location = System::Drawing::Point(210, 207);
			this->btnPlayer1AI2->Name = L"btnPlayer1AI2";
			this->btnPlayer1AI2->Size = System::Drawing::Size(100, 50);
			this->btnPlayer1AI2->TabIndex = 5;
			this->btnPlayer1AI2->UseVisualStyleBackColor = true;
			// 
			// btnPlayer1AI3
			// 
			this->btnPlayer1AI3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlayer1AI3.BackgroundImage")));
			this->btnPlayer1AI3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlayer1AI3->Location = System::Drawing::Point(349, 207);
			this->btnPlayer1AI3->Name = L"btnPlayer1AI3";
			this->btnPlayer1AI3->Size = System::Drawing::Size(100, 50);
			this->btnPlayer1AI3->TabIndex = 6;
			this->btnPlayer1AI3->UseVisualStyleBackColor = true;
			// 
			// btnBackHowManyAI2
			// 
			this->btnBackHowManyAI2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackHowManyAI2.BackgroundImage")));
			this->btnBackHowManyAI2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBackHowManyAI2->Location = System::Drawing::Point(846, 528);
			this->btnBackHowManyAI2->Name = L"btnBackHowManyAI2";
			this->btnBackHowManyAI2->Size = System::Drawing::Size(150, 50);
			this->btnBackHowManyAI2->TabIndex = 8;
			this->btnBackHowManyAI2->UseVisualStyleBackColor = true;
			// 
			// MeniuHowManyAI2
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnBackHowManyAI2);
			this->Controls->Add(this->btnPlayer1AI3);
			this->Controls->Add(this->btnPlayer1AI2);
			this->Controls->Add(this->btnPlayer1AI1);
			this->Controls->Add(this->HowManyAI);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuHowManyAI2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HowManyAI))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuHowManyAI
	/// </summary>
	public ref class MeniuHowManyAI : public System::Windows::Forms::Form
	{
	public:
		MeniuHowManyAI(void)
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
		~MeniuHowManyAI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  HowManyAI;
	private: System::Windows::Forms::Button^  btnPlayer0AI2;
	private: System::Windows::Forms::Button^  btnPlayer0AI3;
	private: System::Windows::Forms::Button^  btnPlayer0AI4;
	private: System::Windows::Forms::Button^  btnBackHowManyAI;











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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuHowManyAI::typeid));
			this->HowManyAI = (gcnew System::Windows::Forms::PictureBox());
			this->btnPlayer0AI2 = (gcnew System::Windows::Forms::Button());
			this->btnPlayer0AI3 = (gcnew System::Windows::Forms::Button());
			this->btnPlayer0AI4 = (gcnew System::Windows::Forms::Button());
			this->btnBackHowManyAI = (gcnew System::Windows::Forms::Button());
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
			this->HowManyAI->TabIndex = 0;
			this->HowManyAI->TabStop = false;
			// 
			// btnPlayer0AI2
			// 
			this->btnPlayer0AI2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlayer0AI2.BackgroundImage")));
			this->btnPlayer0AI2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlayer0AI2->Location = System::Drawing::Point(63, 207);
			this->btnPlayer0AI2->Name = L"btnPlayer0AI2";
			this->btnPlayer0AI2->Size = System::Drawing::Size(100, 50);
			this->btnPlayer0AI2->TabIndex = 4;
			this->btnPlayer0AI2->UseVisualStyleBackColor = true;
			// 
			// btnPlayer0AI3
			// 
			this->btnPlayer0AI3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlayer0AI3.BackgroundImage")));
			this->btnPlayer0AI3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlayer0AI3->Location = System::Drawing::Point(210, 207);
			this->btnPlayer0AI3->Name = L"btnPlayer0AI3";
			this->btnPlayer0AI3->Size = System::Drawing::Size(100, 50);
			this->btnPlayer0AI3->TabIndex = 5;
			this->btnPlayer0AI3->UseVisualStyleBackColor = true;
			// 
			// btnPlayer0AI4
			// 
			this->btnPlayer0AI4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlayer0AI4.BackgroundImage")));
			this->btnPlayer0AI4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlayer0AI4->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnPlayer0AI4->Location = System::Drawing::Point(349, 207);
			this->btnPlayer0AI4->Name = L"btnPlayer0AI4";
			this->btnPlayer0AI4->Size = System::Drawing::Size(100, 50);
			this->btnPlayer0AI4->TabIndex = 6;
			this->btnPlayer0AI4->UseVisualStyleBackColor = true;
			// 
			// btnBackHowManyAI
			// 
			this->btnBackHowManyAI->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackHowManyAI.BackgroundImage")));
			this->btnBackHowManyAI->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBackHowManyAI->Location = System::Drawing::Point(846, 528);
			this->btnBackHowManyAI->Name = L"btnBackHowManyAI";
			this->btnBackHowManyAI->Size = System::Drawing::Size(150, 50);
			this->btnBackHowManyAI->TabIndex = 7;
			this->btnBackHowManyAI->UseVisualStyleBackColor = true;
			// 
			// MeniuHowManyAI
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnBackHowManyAI);
			this->Controls->Add(this->btnPlayer0AI4);
			this->Controls->Add(this->btnPlayer0AI3);
			this->Controls->Add(this->btnPlayer0AI2);
			this->Controls->Add(this->HowManyAI);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuHowManyAI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HowManyAI))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

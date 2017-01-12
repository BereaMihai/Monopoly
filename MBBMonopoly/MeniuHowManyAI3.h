#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuHowManyAI3
	/// </summary>
	public ref class MeniuHowManyAI3 : public System::Windows::Forms::Form
	{
	public:
		MeniuHowManyAI3(void)
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
		~MeniuHowManyAI3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  HowManyAI;
	private: System::Windows::Forms::Button^  btnPlayer2AI0;
	private: System::Windows::Forms::Button^  btnPlayer2AI1;
	private: System::Windows::Forms::Button^  btnPlayer2AI2;
	private: System::Windows::Forms::Button^  btnBackHowManyAI3;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuHowManyAI3::typeid));
			this->HowManyAI = (gcnew System::Windows::Forms::PictureBox());
			this->btnPlayer2AI0 = (gcnew System::Windows::Forms::Button());
			this->btnPlayer2AI1 = (gcnew System::Windows::Forms::Button());
			this->btnPlayer2AI2 = (gcnew System::Windows::Forms::Button());
			this->btnBackHowManyAI3 = (gcnew System::Windows::Forms::Button());
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
			// btnPlayer2AI0
			// 
			this->btnPlayer2AI0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlayer2AI0.BackgroundImage")));
			this->btnPlayer2AI0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlayer2AI0->Location = System::Drawing::Point(63, 207);
			this->btnPlayer2AI0->Name = L"btnPlayer2AI0";
			this->btnPlayer2AI0->Size = System::Drawing::Size(100, 50);
			this->btnPlayer2AI0->TabIndex = 3;
			this->btnPlayer2AI0->UseVisualStyleBackColor = true;
			// 
			// btnPlayer2AI1
			// 
			this->btnPlayer2AI1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlayer2AI1.BackgroundImage")));
			this->btnPlayer2AI1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlayer2AI1->Location = System::Drawing::Point(210, 207);
			this->btnPlayer2AI1->Name = L"btnPlayer2AI1";
			this->btnPlayer2AI1->Size = System::Drawing::Size(100, 50);
			this->btnPlayer2AI1->TabIndex = 4;
			this->btnPlayer2AI1->UseVisualStyleBackColor = true;
			// 
			// btnPlayer2AI2
			// 
			this->btnPlayer2AI2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlayer2AI2.BackgroundImage")));
			this->btnPlayer2AI2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlayer2AI2->Location = System::Drawing::Point(349, 207);
			this->btnPlayer2AI2->Name = L"btnPlayer2AI2";
			this->btnPlayer2AI2->Size = System::Drawing::Size(100, 50);
			this->btnPlayer2AI2->TabIndex = 5;
			this->btnPlayer2AI2->UseVisualStyleBackColor = true;
			// 
			// btnBackHowManyAI3
			// 
			this->btnBackHowManyAI3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackHowManyAI3.BackgroundImage")));
			this->btnBackHowManyAI3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBackHowManyAI3->Location = System::Drawing::Point(846, 528);
			this->btnBackHowManyAI3->Name = L"btnBackHowManyAI3";
			this->btnBackHowManyAI3->Size = System::Drawing::Size(150, 50);
			this->btnBackHowManyAI3->TabIndex = 8;
			this->btnBackHowManyAI3->Text = L"0";
			this->btnBackHowManyAI3->UseVisualStyleBackColor = true;
			// 
			// MeniuHowManyAI3
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnBackHowManyAI3);
			this->Controls->Add(this->btnPlayer2AI2);
			this->Controls->Add(this->btnPlayer2AI1);
			this->Controls->Add(this->btnPlayer2AI0);
			this->Controls->Add(this->HowManyAI);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximumSize = System::Drawing::Size(1024, 640);
			this->Name = L"MeniuHowManyAI3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HowManyAI))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

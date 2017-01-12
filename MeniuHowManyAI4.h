#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuHowManyAI4
	/// </summary>
	public ref class MeniuHowManyAI4 : public System::Windows::Forms::Form
	{
	public:
		MeniuHowManyAI4(void)
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
		~MeniuHowManyAI4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  HowManyAI;
	private: System::Windows::Forms::Button^  btnPlayer3AI0;

	private: System::Windows::Forms::Button^  btnPlayer3AI1;
	private: System::Windows::Forms::Button^  btnBackHowManyAI4;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuHowManyAI4::typeid));
			this->HowManyAI = (gcnew System::Windows::Forms::PictureBox());
			this->btnPlayer3AI0 = (gcnew System::Windows::Forms::Button());
			this->btnPlayer3AI1 = (gcnew System::Windows::Forms::Button());
			this->btnBackHowManyAI4 = (gcnew System::Windows::Forms::Button());
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
			this->HowManyAI->TabIndex = 2;
			this->HowManyAI->TabStop = false;
			// 
			// btnPlayer3AI0
			// 
			this->btnPlayer3AI0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlayer3AI0.BackgroundImage")));
			this->btnPlayer3AI0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlayer3AI0->Location = System::Drawing::Point(101, 207);
			this->btnPlayer3AI0->Name = L"btnPlayer3AI0";
			this->btnPlayer3AI0->Size = System::Drawing::Size(100, 50);
			this->btnPlayer3AI0->TabIndex = 4;
			this->btnPlayer3AI0->UseVisualStyleBackColor = true;
			// 
			// btnPlayer3AI1
			// 
			this->btnPlayer3AI1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlayer3AI1.BackgroundImage")));
			this->btnPlayer3AI1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlayer3AI1->Location = System::Drawing::Point(301, 207);
			this->btnPlayer3AI1->Name = L"btnPlayer3AI1";
			this->btnPlayer3AI1->Size = System::Drawing::Size(100, 50);
			this->btnPlayer3AI1->TabIndex = 5;
			this->btnPlayer3AI1->UseVisualStyleBackColor = true;
			// 
			// btnBackHowManyAI4
			// 
			this->btnBackHowManyAI4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackHowManyAI4.BackgroundImage")));
			this->btnBackHowManyAI4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBackHowManyAI4->Location = System::Drawing::Point(846, 528);
			this->btnBackHowManyAI4->Name = L"btnBackHowManyAI4";
			this->btnBackHowManyAI4->Size = System::Drawing::Size(150, 50);
			this->btnBackHowManyAI4->TabIndex = 8;
			this->btnBackHowManyAI4->UseVisualStyleBackColor = true;
			// 
			// MeniuHowManyAI4
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnBackHowManyAI4);
			this->Controls->Add(this->btnPlayer3AI1);
			this->Controls->Add(this->btnPlayer3AI0);
			this->Controls->Add(this->HowManyAI);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuHowManyAI4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HowManyAI))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

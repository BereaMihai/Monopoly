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
	private: System::Windows::Forms::Button^  btn_05;
	private: System::Windows::Forms::Button^  btn_15;
	private: System::Windows::Forms::Button^  btn_back6;



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
			this->btn_05 = (gcnew System::Windows::Forms::Button());
			this->btn_15 = (gcnew System::Windows::Forms::Button());
			this->btn_back6 = (gcnew System::Windows::Forms::Button());
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
			// btn_05
			// 
			this->btn_05->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_05.BackgroundImage")));
			this->btn_05->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_05->Location = System::Drawing::Point(101, 183);
			this->btn_05->Name = L"btn_05";
			this->btn_05->Size = System::Drawing::Size(100, 50);
			this->btn_05->TabIndex = 4;
			this->btn_05->UseVisualStyleBackColor = true;
			// 
			// btn_15
			// 
			this->btn_15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_15.BackgroundImage")));
			this->btn_15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_15->Location = System::Drawing::Point(301, 183);
			this->btn_15->Name = L"btn_15";
			this->btn_15->Size = System::Drawing::Size(100, 50);
			this->btn_15->TabIndex = 5;
			this->btn_15->UseVisualStyleBackColor = true;
			// 
			// btn_back6
			// 
			this->btn_back6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_back6.BackgroundImage")));
			this->btn_back6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_back6->Location = System::Drawing::Point(846, 528);
			this->btn_back6->Name = L"btn_back6";
			this->btn_back6->Size = System::Drawing::Size(150, 50);
			this->btn_back6->TabIndex = 8;
			this->btn_back6->UseVisualStyleBackColor = true;
			// 
			// MeniuHowManyAI4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btn_back6);
			this->Controls->Add(this->btn_15);
			this->Controls->Add(this->btn_05);
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

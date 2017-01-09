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
	private: System::Windows::Forms::Button^  btn_03;
	private: System::Windows::Forms::Button^  btn_14;
	private: System::Windows::Forms::Button^  btn_24;
	private: System::Windows::Forms::Button^  btn_34;
	private: System::Windows::Forms::Button^  btn_back4;





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
			this->btn_03 = (gcnew System::Windows::Forms::Button());
			this->btn_14 = (gcnew System::Windows::Forms::Button());
			this->btn_24 = (gcnew System::Windows::Forms::Button());
			this->btn_34 = (gcnew System::Windows::Forms::Button());
			this->btn_back4 = (gcnew System::Windows::Forms::Button());
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
			// btn_03
			// 
			this->btn_03->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_03.BackgroundImage")));
			this->btn_03->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_03->Location = System::Drawing::Point(101, 185);
			this->btn_03->Name = L"btn_03";
			this->btn_03->Size = System::Drawing::Size(100, 50);
			this->btn_03->TabIndex = 3;
			this->btn_03->UseVisualStyleBackColor = true;
			// 
			// btn_14
			// 
			this->btn_14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_14.BackgroundImage")));
			this->btn_14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_14->Location = System::Drawing::Point(301, 185);
			this->btn_14->Name = L"btn_14";
			this->btn_14->Size = System::Drawing::Size(100, 50);
			this->btn_14->TabIndex = 4;
			this->btn_14->UseVisualStyleBackColor = true;
			// 
			// btn_24
			// 
			this->btn_24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_24.BackgroundImage")));
			this->btn_24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_24->Location = System::Drawing::Point(101, 275);
			this->btn_24->Name = L"btn_24";
			this->btn_24->Size = System::Drawing::Size(100, 50);
			this->btn_24->TabIndex = 5;
			this->btn_24->UseVisualStyleBackColor = true;
			// 
			// btn_34
			// 
			this->btn_34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_34.BackgroundImage")));
			this->btn_34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_34->Location = System::Drawing::Point(301, 275);
			this->btn_34->Name = L"btn_34";
			this->btn_34->Size = System::Drawing::Size(100, 50);
			this->btn_34->TabIndex = 6;
			this->btn_34->UseVisualStyleBackColor = true;
			// 
			// btn_back4
			// 
			this->btn_back4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_back4.BackgroundImage")));
			this->btn_back4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_back4->Location = System::Drawing::Point(846, 528);
			this->btn_back4->Name = L"btn_back4";
			this->btn_back4->Size = System::Drawing::Size(150, 50);
			this->btn_back4->TabIndex = 8;
			this->btn_back4->UseVisualStyleBackColor = true;
			// 
			// MeniuHowManyAI2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btn_back4);
			this->Controls->Add(this->btn_34);
			this->Controls->Add(this->btn_24);
			this->Controls->Add(this->btn_14);
			this->Controls->Add(this->btn_03);
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

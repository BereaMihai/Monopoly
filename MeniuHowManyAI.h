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
	private: System::Windows::Forms::Button^  btn_02;
	private: System::Windows::Forms::Button^  btn_12;
	private: System::Windows::Forms::Button^  btn_22;
	private: System::Windows::Forms::Button^  btn_32;
	private: System::Windows::Forms::Button^  btn_42;





	private: System::Windows::Forms::Button^  btn_back;
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
			this->btn_02 = (gcnew System::Windows::Forms::Button());
			this->btn_12 = (gcnew System::Windows::Forms::Button());
			this->btn_22 = (gcnew System::Windows::Forms::Button());
			this->btn_32 = (gcnew System::Windows::Forms::Button());
			this->btn_42 = (gcnew System::Windows::Forms::Button());
			this->btn_back = (gcnew System::Windows::Forms::Button());
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
			// btn_02
			// 
			this->btn_02->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_02.BackgroundImage")));
			this->btn_02->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_02->Location = System::Drawing::Point(57, 193);
			this->btn_02->Name = L"btn_02";
			this->btn_02->Size = System::Drawing::Size(100, 50);
			this->btn_02->TabIndex = 2;
			this->btn_02->UseVisualStyleBackColor = true;
			// 
			// btn_12
			// 
			this->btn_12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_12.BackgroundImage")));
			this->btn_12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_12->Location = System::Drawing::Point(208, 193);
			this->btn_12->Name = L"btn_12";
			this->btn_12->Size = System::Drawing::Size(100, 50);
			this->btn_12->TabIndex = 3;
			this->btn_12->UseVisualStyleBackColor = true;
			// 
			// btn_22
			// 
			this->btn_22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_22.BackgroundImage")));
			this->btn_22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_22->Location = System::Drawing::Point(361, 193);
			this->btn_22->Name = L"btn_22";
			this->btn_22->Size = System::Drawing::Size(100, 50);
			this->btn_22->TabIndex = 4;
			this->btn_22->UseVisualStyleBackColor = true;
			// 
			// btn_32
			// 
			this->btn_32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_32.BackgroundImage")));
			this->btn_32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_32->Location = System::Drawing::Point(129, 285);
			this->btn_32->Name = L"btn_32";
			this->btn_32->Size = System::Drawing::Size(100, 50);
			this->btn_32->TabIndex = 5;
			this->btn_32->UseVisualStyleBackColor = true;
			// 
			// btn_42
			// 
			this->btn_42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_42.BackgroundImage")));
			this->btn_42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_42->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_42->Location = System::Drawing::Point(287, 285);
			this->btn_42->Name = L"btn_42";
			this->btn_42->Size = System::Drawing::Size(100, 50);
			this->btn_42->TabIndex = 6;
			this->btn_42->UseVisualStyleBackColor = true;
			// 
			// btn_back
			// 
			this->btn_back->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_back.BackgroundImage")));
			this->btn_back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_back->Location = System::Drawing::Point(846, 528);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(150, 50);
			this->btn_back->TabIndex = 7;
			this->btn_back->UseVisualStyleBackColor = true;
			// 
			// MeniuHowManyAI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->btn_42);
			this->Controls->Add(this->btn_32);
			this->Controls->Add(this->btn_22);
			this->Controls->Add(this->btn_12);
			this->Controls->Add(this->btn_02);
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

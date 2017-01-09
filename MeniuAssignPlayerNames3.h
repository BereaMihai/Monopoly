#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuAssignPlayerNames3
	/// </summary>
	public ref class MeniuAssignPlayerNames3 : public System::Windows::Forms::Form
	{
	public:
		MeniuAssignPlayerNames3(void)
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
		~MeniuAssignPlayerNames3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  AssignPlayerNames;

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::TextBox^  Player2Text3;



	private: System::Windows::Forms::Button^  btn_ok3;
	private: System::Windows::Forms::Button^  btn_cancel3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuAssignPlayerNames3::typeid));
			this->AssignPlayerNames = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Player2Text3 = (gcnew System::Windows::Forms::TextBox());
			this->btn_ok3 = (gcnew System::Windows::Forms::Button());
			this->btn_cancel3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AssignPlayerNames))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// AssignPlayerNames
			// 
			this->AssignPlayerNames->BackColor = System::Drawing::Color::Transparent;
			this->AssignPlayerNames->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AssignPlayerNames.BackgroundImage")));
			this->AssignPlayerNames->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->AssignPlayerNames->Location = System::Drawing::Point(125, 58);
			this->AssignPlayerNames->Name = L"AssignPlayerNames";
			this->AssignPlayerNames->Size = System::Drawing::Size(300, 70);
			this->AssignPlayerNames->TabIndex = 2;
			this->AssignPlayerNames->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(182, 186);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(200, 70);
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// Player2Text3
			// 
			this->Player2Text3->BackColor = System::Drawing::SystemColors::Window;
			this->Player2Text3->Font = (gcnew System::Drawing::Font(L"Monopoly", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Player2Text3->Location = System::Drawing::Point(182, 298);
			this->Player2Text3->Name = L"Player2Text3";
			this->Player2Text3->Size = System::Drawing::Size(199, 27);
			this->Player2Text3->TabIndex = 10;
			this->Player2Text3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_ok3
			// 
			this->btn_ok3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_ok3.BackgroundImage")));
			this->btn_ok3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_ok3->Location = System::Drawing::Point(125, 388);
			this->btn_ok3->Name = L"btn_ok3";
			this->btn_ok3->Size = System::Drawing::Size(100, 50);
			this->btn_ok3->TabIndex = 12;
			this->btn_ok3->UseVisualStyleBackColor = true;
			// 
			// btn_cancel3
			// 
			this->btn_cancel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cancel3.BackgroundImage")));
			this->btn_cancel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_cancel3->Location = System::Drawing::Point(325, 388);
			this->btn_cancel3->Name = L"btn_cancel3";
			this->btn_cancel3->Size = System::Drawing::Size(100, 50);
			this->btn_cancel3->TabIndex = 13;
			this->btn_cancel3->UseVisualStyleBackColor = true;
			// 
			// MeniuAssignPlayerNames3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btn_cancel3);
			this->Controls->Add(this->btn_ok3);
			this->Controls->Add(this->Player2Text3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->AssignPlayerNames);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuAssignPlayerNames3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AssignPlayerNames))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

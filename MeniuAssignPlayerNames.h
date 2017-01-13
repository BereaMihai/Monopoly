#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuAssignPlayerNames
	/// </summary>
	public ref class MeniuAssignPlayerNames : public System::Windows::Forms::Form
	{
	public:
		MeniuAssignPlayerNames(void)
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
		~MeniuAssignPlayerNames()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  AssignPlayerNames;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;



	private: System::Windows::Forms::TextBox^  Player1Text;



	private: System::Windows::Forms::Button^  btn_ok2;
	private: System::Windows::Forms::Button^  btn_cancel2;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuAssignPlayerNames::typeid));
			this->AssignPlayerNames = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Player1Text = (gcnew System::Windows::Forms::TextBox());
			this->btn_ok2 = (gcnew System::Windows::Forms::Button());
			this->btn_cancel2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AssignPlayerNames))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->AssignPlayerNames->TabIndex = 0;
			this->AssignPlayerNames->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(182, 186);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 70);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// Player1Text
			// 
			this->Player1Text->BackColor = System::Drawing::SystemColors::Window;
			this->Player1Text->Font = (gcnew System::Drawing::Font(L"Monopoly", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Player1Text->Location = System::Drawing::Point(182, 298);
			this->Player1Text->Name = L"Player1Text";
			this->Player1Text->Size = System::Drawing::Size(199, 27);
			this->Player1Text->TabIndex = 6;
			this->Player1Text->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_ok2
			// 
			this->btn_ok2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_ok2.BackgroundImage")));
			this->btn_ok2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_ok2->Location = System::Drawing::Point(125, 388);
			this->btn_ok2->Name = L"btn_ok2";
			this->btn_ok2->Size = System::Drawing::Size(100, 50);
			this->btn_ok2->TabIndex = 11;
			this->btn_ok2->UseVisualStyleBackColor = true;
			// 
			// btn_cancel2
			// 
			this->btn_cancel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cancel2.BackgroundImage")));
			this->btn_cancel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_cancel2->Location = System::Drawing::Point(325, 388);
			this->btn_cancel2->Name = L"btn_cancel2";
			this->btn_cancel2->Size = System::Drawing::Size(100, 50);
			this->btn_cancel2->TabIndex = 12;
			this->btn_cancel2->UseVisualStyleBackColor = true;
			// 
			// MeniuAssignPlayerNames
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btn_cancel2);
			this->Controls->Add(this->btn_ok2);
			this->Controls->Add(this->Player1Text);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->AssignPlayerNames);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuAssignPlayerNames";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AssignPlayerNames))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

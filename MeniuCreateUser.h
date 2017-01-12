#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuCreateUser
	/// </summary>
	public ref class MeniuCreateUser : public System::Windows::Forms::Form
	{
	public:
		MeniuCreateUser(void)
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
		~MeniuCreateUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  name;
	protected:
	private: System::Windows::Forms::PictureBox^  checkpass;
	private: System::Windows::Forms::PictureBox^  pass;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  btnOkCreateUser;
	private: System::Windows::Forms::Button^  btnCancelCreateUser;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuCreateUser::typeid));
			this->name = (gcnew System::Windows::Forms::PictureBox());
			this->checkpass = (gcnew System::Windows::Forms::PictureBox());
			this->pass = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->btnOkCreateUser = (gcnew System::Windows::Forms::Button());
			this->btnCancelCreateUser = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->name))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->checkpass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pass))->BeginInit();
			this->SuspendLayout();
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::Color::Transparent;
			this->name->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"name.BackgroundImage")));
			this->name->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->name->Location = System::Drawing::Point(37, 82);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(150, 70);
			this->name->TabIndex = 0;
			this->name->TabStop = false;
			// 
			// checkpass
			// 
			this->checkpass->BackColor = System::Drawing::Color::Transparent;
			this->checkpass->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkpass.BackgroundImage")));
			this->checkpass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->checkpass->Location = System::Drawing::Point(37, 291);
			this->checkpass->Name = L"checkpass";
			this->checkpass->Size = System::Drawing::Size(200, 70);
			this->checkpass->TabIndex = 1;
			this->checkpass->TabStop = false;
			// 
			// pass
			// 
			this->pass->BackColor = System::Drawing::Color::Transparent;
			this->pass->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pass.BackgroundImage")));
			this->pass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pass->Location = System::Drawing::Point(37, 188);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(150, 70);
			this->pass->TabIndex = 2;
			this->pass->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Monopoly", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(264, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 27);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Monopoly", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(264, 315);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(204, 27);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Monopoly", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(264, 213);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(204, 27);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnOkCreateUser
			// 
			this->btnOkCreateUser->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOkCreateUser.BackgroundImage")));
			this->btnOkCreateUser->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnOkCreateUser->Location = System::Drawing::Point(417, 419);
			this->btnOkCreateUser->Name = L"btnOkCreateUser";
			this->btnOkCreateUser->Size = System::Drawing::Size(100, 50);
			this->btnOkCreateUser->TabIndex = 7;
			this->btnOkCreateUser->UseVisualStyleBackColor = true;
			// 
			// btnCancelCreateUser
			// 
			this->btnCancelCreateUser->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelCreateUser.BackgroundImage")));
			this->btnCancelCreateUser->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCancelCreateUser->Location = System::Drawing::Point(576, 419);
			this->btnCancelCreateUser->Name = L"btnCancelCreateUser";
			this->btnCancelCreateUser->Size = System::Drawing::Size(100, 50);
			this->btnCancelCreateUser->TabIndex = 8;
			this->btnCancelCreateUser->UseVisualStyleBackColor = true;
			// 
			// MeniuCreateUser
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnCancelCreateUser);
			this->Controls->Add(this->btnOkCreateUser);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->checkpass);
			this->Controls->Add(this->name);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuCreateUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->name))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->checkpass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pass))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

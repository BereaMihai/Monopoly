#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuUserAlreadyExists
	/// </summary>
	public ref class MeniuUserAlreadyExists : public System::Windows::Forms::Form
	{
	public:
		MeniuUserAlreadyExists(void)
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
		~MeniuUserAlreadyExists()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  btnCancelUserAlreadyExists;
	private: System::Windows::Forms::Button^  btnLogin;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuUserAlreadyExists::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCancelUserAlreadyExists = (gcnew System::Windows::Forms::Button());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(115, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 70);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// btnCancelUserAlreadyExists
			// 
			this->btnCancelUserAlreadyExists->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelUserAlreadyExists.BackgroundImage")));
			this->btnCancelUserAlreadyExists->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCancelUserAlreadyExists->Location = System::Drawing::Point(315, 238);
			this->btnCancelUserAlreadyExists->Name = L"btnCancelUserAlreadyExists";
			this->btnCancelUserAlreadyExists->Size = System::Drawing::Size(100, 50);
			this->btnCancelUserAlreadyExists->TabIndex = 2;
			this->btnCancelUserAlreadyExists->UseVisualStyleBackColor = true;
			// 
			// btnLogin
			// 
			this->btnLogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLogin.BackgroundImage")));
			this->btnLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnLogin->Location = System::Drawing::Point(115, 238);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(100, 50);
			this->btnLogin->TabIndex = 3;
			this->btnLogin->UseVisualStyleBackColor = true;
			// 
			// MeniuUserAlreadyExists
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->btnCancelUserAlreadyExists);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MeniuUserAlreadyExists";
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

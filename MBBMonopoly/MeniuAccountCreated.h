#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuAccountCreated
	/// </summary>
	public ref class MeniuAccountCreated : public System::Windows::Forms::Form
	{
	public:
		MeniuAccountCreated(void)
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
		~MeniuAccountCreated()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Button^  btnOkUserSuccesfullyCreated;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuAccountCreated::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnOkUserSuccesfullyCreated = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(94, 103);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(350, 70);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnOkUserSuccesfullyCreated
			// 
			this->btnOkUserSuccesfullyCreated->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOkUserSuccesfullyCreated.BackgroundImage")));
			this->btnOkUserSuccesfullyCreated->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnOkUserSuccesfullyCreated->Location = System::Drawing::Point(222, 226);
			this->btnOkUserSuccesfullyCreated->Name = L"btnOkUserSuccesfullyCreated";
			this->btnOkUserSuccesfullyCreated->Size = System::Drawing::Size(100, 50);
			this->btnOkUserSuccesfullyCreated->TabIndex = 1;
			this->btnOkUserSuccesfullyCreated->UseVisualStyleBackColor = true;
			// 
			// MeniuAccountCreated
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnOkUserSuccesfullyCreated);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximumSize = System::Drawing::Size(1024, 640);
			this->Name = L"MeniuAccountCreated";
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

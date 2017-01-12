#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuAssignPlayerNames2
	/// </summary>
	public ref class MeniuAssignPlayerNames2 : public System::Windows::Forms::Form
	{
	public:
		MeniuAssignPlayerNames2(void)
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
		~MeniuAssignPlayerNames2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  AssignPlayerNames;

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::TextBox^  g;





	private: System::Windows::Forms::Button^  btnOkAssignPlayerNames2;
	private: System::Windows::Forms::Button^  btnCancelAssignPlayerNames2;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuAssignPlayerNames2::typeid));
			this->AssignPlayerNames = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->g = (gcnew System::Windows::Forms::TextBox());
			this->btnOkAssignPlayerNames2 = (gcnew System::Windows::Forms::Button());
			this->btnCancelAssignPlayerNames2 = (gcnew System::Windows::Forms::Button());
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
			this->AssignPlayerNames->TabIndex = 1;
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
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// g
			// 
			this->g->BackColor = System::Drawing::SystemColors::Window;
			this->g->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->g->Location = System::Drawing::Point(182, 298);
			this->g->Name = L"g";
			this->g->Size = System::Drawing::Size(199, 34);
			this->g->TabIndex = 8;
			this->g->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnOkAssignPlayerNames2
			// 
			this->btnOkAssignPlayerNames2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOkAssignPlayerNames2.BackgroundImage")));
			this->btnOkAssignPlayerNames2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnOkAssignPlayerNames2->Location = System::Drawing::Point(125, 388);
			this->btnOkAssignPlayerNames2->Name = L"btnOkAssignPlayerNames2";
			this->btnOkAssignPlayerNames2->Size = System::Drawing::Size(100, 50);
			this->btnOkAssignPlayerNames2->TabIndex = 10;
			this->btnOkAssignPlayerNames2->UseVisualStyleBackColor = true;
			// 
			// btnCancelAssignPlayerNames2
			// 
			this->btnCancelAssignPlayerNames2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelAssignPlayerNames2.BackgroundImage")));
			this->btnCancelAssignPlayerNames2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCancelAssignPlayerNames2->Location = System::Drawing::Point(325, 388);
			this->btnCancelAssignPlayerNames2->Name = L"btnCancelAssignPlayerNames2";
			this->btnCancelAssignPlayerNames2->Size = System::Drawing::Size(100, 50);
			this->btnCancelAssignPlayerNames2->TabIndex = 11;
			this->btnCancelAssignPlayerNames2->UseVisualStyleBackColor = true;
			// 
			// MeniuAssignPlayerNames2
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1006, 593);
			this->Controls->Add(this->btnCancelAssignPlayerNames2);
			this->Controls->Add(this->btnOkAssignPlayerNames2);
			this->Controls->Add(this->g);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->AssignPlayerNames);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximumSize = System::Drawing::Size(1024, 640);
			this->Name = L"MeniuAssignPlayerNames2";
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

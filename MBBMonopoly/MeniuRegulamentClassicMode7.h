#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuRegulamentClassicMode7
	/// </summary>
	public ref class MeniuRegulamentClassicMode7 : public System::Windows::Forms::Form
	{
	public:
		MeniuRegulamentClassicMode7(void)
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
		~MeniuRegulamentClassicMode7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  btnPreviousPageMeniuRegClassicMode7;
	private: System::Windows::Forms::Button^  btnNextPageMeniuRegClassicMode7;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuRegulamentClassicMode7::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnPreviousPageMeniuRegClassicMode7 = (gcnew System::Windows::Forms::Button());
			this->btnNextPageMeniuRegClassicMode7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(47, 119);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(900, 400);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// btnPreviousPageMeniuRegClassicMode7
			// 
			this->btnPreviousPageMeniuRegClassicMode7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPreviousPageMeniuRegClassicMode7.BackgroundImage")));
			this->btnPreviousPageMeniuRegClassicMode7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPreviousPageMeniuRegClassicMode7->Location = System::Drawing::Point(652, 545);
			this->btnPreviousPageMeniuRegClassicMode7->Name = L"btnPreviousPageMeniuRegClassicMode7";
			this->btnPreviousPageMeniuRegClassicMode7->Size = System::Drawing::Size(150, 50);
			this->btnPreviousPageMeniuRegClassicMode7->TabIndex = 11;
			this->btnPreviousPageMeniuRegClassicMode7->UseVisualStyleBackColor = true;
			// 
			// btnNextPageMeniuRegClassicMode7
			// 
			this->btnNextPageMeniuRegClassicMode7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNextPageMeniuRegClassicMode7.BackgroundImage")));
			this->btnNextPageMeniuRegClassicMode7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNextPageMeniuRegClassicMode7->Location = System::Drawing::Point(833, 545);
			this->btnNextPageMeniuRegClassicMode7->Name = L"btnNextPageMeniuRegClassicMode7";
			this->btnNextPageMeniuRegClassicMode7->Size = System::Drawing::Size(150, 50);
			this->btnNextPageMeniuRegClassicMode7->TabIndex = 12;
			this->btnNextPageMeniuRegClassicMode7->UseVisualStyleBackColor = true;
			// 
			// MeniuRegulamentClassicMode7
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnNextPageMeniuRegClassicMode7);
			this->Controls->Add(this->btnPreviousPageMeniuRegClassicMode7);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximumSize = System::Drawing::Size(1024, 640);
			this->Name = L"MeniuRegulamentClassicMode7";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

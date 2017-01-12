#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuRegulamentClassicMode2
	/// </summary>
	public ref class MeniuRegulamentClassicMode2 : public System::Windows::Forms::Form
	{
	public:
		MeniuRegulamentClassicMode2(void)
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
		~MeniuRegulamentClassicMode2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  btnPreviousPageMeniuRegClassicMode;


	private: System::Windows::Forms::Button^  btnNextPageMeniuRegClassicMode2;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuRegulamentClassicMode2::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnPreviousPageMeniuRegClassicMode = (gcnew System::Windows::Forms::Button());
			this->btnNextPageMeniuRegClassicMode2 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// btnPreviousPageMeniuRegClassicMode
			// 
			this->btnPreviousPageMeniuRegClassicMode->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPreviousPageMeniuRegClassicMode.BackgroundImage")));
			this->btnPreviousPageMeniuRegClassicMode->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPreviousPageMeniuRegClassicMode->Location = System::Drawing::Point(652, 545);
			this->btnPreviousPageMeniuRegClassicMode->Name = L"btnPreviousPageMeniuRegClassicMode";
			this->btnPreviousPageMeniuRegClassicMode->Size = System::Drawing::Size(150, 50);
			this->btnPreviousPageMeniuRegClassicMode->TabIndex = 3;
			this->btnPreviousPageMeniuRegClassicMode->UseVisualStyleBackColor = true;
			// 
			// btnNextPageMeniuRegClassicMode2
			// 
			this->btnNextPageMeniuRegClassicMode2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNextPageMeniuRegClassicMode2.BackgroundImage")));
			this->btnNextPageMeniuRegClassicMode2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNextPageMeniuRegClassicMode2->Location = System::Drawing::Point(832, 545);
			this->btnNextPageMeniuRegClassicMode2->Name = L"btnNextPageMeniuRegClassicMode2";
			this->btnNextPageMeniuRegClassicMode2->Size = System::Drawing::Size(150, 50);
			this->btnNextPageMeniuRegClassicMode2->TabIndex = 4;
			this->btnNextPageMeniuRegClassicMode2->UseVisualStyleBackColor = true;
			// 
			// MeniuRegulamentClassicMode2
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnNextPageMeniuRegClassicMode2);
			this->Controls->Add(this->btnPreviousPageMeniuRegClassicMode);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuRegulamentClassicMode2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuRegulamentClassicMode4
	/// </summary>
	public ref class MeniuRegulamentClassicMode4 : public System::Windows::Forms::Form
	{
	public:
		MeniuRegulamentClassicMode4(void)
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
		~MeniuRegulamentClassicMode4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnPreviousPageMeniuRegClassicMode4;
	protected:

	private: System::Windows::Forms::Button^  btnNextPageMeniuRegClassicMode4;
	protected:



	private: System::Windows::Forms::PictureBox^  pictureBox2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuRegulamentClassicMode4::typeid));
			this->btnPreviousPageMeniuRegClassicMode4 = (gcnew System::Windows::Forms::Button());
			this->btnNextPageMeniuRegClassicMode4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnPreviousPageMeniuRegClassicMode4
			// 
			this->btnPreviousPageMeniuRegClassicMode4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPreviousPageMeniuRegClassicMode4.BackgroundImage")));
			this->btnPreviousPageMeniuRegClassicMode4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPreviousPageMeniuRegClassicMode4->Location = System::Drawing::Point(652, 545);
			this->btnPreviousPageMeniuRegClassicMode4->Name = L"btnPreviousPageMeniuRegClassicMode4";
			this->btnPreviousPageMeniuRegClassicMode4->Size = System::Drawing::Size(150, 50);
			this->btnPreviousPageMeniuRegClassicMode4->TabIndex = 5;
			this->btnPreviousPageMeniuRegClassicMode4->UseVisualStyleBackColor = true;
			// 
			// btnNextPageMeniuRegClassicMode4
			// 
			this->btnNextPageMeniuRegClassicMode4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNextPageMeniuRegClassicMode4.BackgroundImage")));
			this->btnNextPageMeniuRegClassicMode4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNextPageMeniuRegClassicMode4->Location = System::Drawing::Point(833, 545);
			this->btnNextPageMeniuRegClassicMode4->Name = L"btnNextPageMeniuRegClassicMode4";
			this->btnNextPageMeniuRegClassicMode4->Size = System::Drawing::Size(150, 50);
			this->btnNextPageMeniuRegClassicMode4->TabIndex = 6;
			this->btnNextPageMeniuRegClassicMode4->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(47, 119);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(900, 400);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// MeniuRegulamentClassicMode4
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->btnNextPageMeniuRegClassicMode4);
			this->Controls->Add(this->btnPreviousPageMeniuRegClassicMode4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximumSize = System::Drawing::Size(1024, 640);
			this->Name = L"MeniuRegulamentClassicMode4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

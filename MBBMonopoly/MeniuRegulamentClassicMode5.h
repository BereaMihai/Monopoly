#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuRegulamentClassicMode5
	/// </summary>
	public ref class MeniuRegulamentClassicMode5 : public System::Windows::Forms::Form
	{
	public:
		MeniuRegulamentClassicMode5(void)
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
		~MeniuRegulamentClassicMode5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnPreviousPageMeniuRegClassicMode5;
	protected:

	private: System::Windows::Forms::Button^  btnNextPageMeniuRegClassicMode5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuRegulamentClassicMode5::typeid));
			this->btnPreviousPageMeniuRegClassicMode5 = (gcnew System::Windows::Forms::Button());
			this->btnNextPageMeniuRegClassicMode5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnPreviousPageMeniuRegClassicMode5
			// 
			this->btnPreviousPageMeniuRegClassicMode5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPreviousPageMeniuRegClassicMode5.BackgroundImage")));
			this->btnPreviousPageMeniuRegClassicMode5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPreviousPageMeniuRegClassicMode5->Location = System::Drawing::Point(652, 545);
			this->btnPreviousPageMeniuRegClassicMode5->Name = L"btnPreviousPageMeniuRegClassicMode5";
			this->btnPreviousPageMeniuRegClassicMode5->Size = System::Drawing::Size(150, 50);
			this->btnPreviousPageMeniuRegClassicMode5->TabIndex = 6;
			this->btnPreviousPageMeniuRegClassicMode5->UseVisualStyleBackColor = true;
			// 
			// btnNextPageMeniuRegClassicMode5
			// 
			this->btnNextPageMeniuRegClassicMode5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNextPageMeniuRegClassicMode5.BackgroundImage")));
			this->btnNextPageMeniuRegClassicMode5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNextPageMeniuRegClassicMode5->Location = System::Drawing::Point(833, 545);
			this->btnNextPageMeniuRegClassicMode5->Name = L"btnNextPageMeniuRegClassicMode5";
			this->btnNextPageMeniuRegClassicMode5->Size = System::Drawing::Size(150, 50);
			this->btnNextPageMeniuRegClassicMode5->TabIndex = 7;
			this->btnNextPageMeniuRegClassicMode5->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(47, 119);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(900, 400);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// MeniuRegulamentClassicMode5
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->btnNextPageMeniuRegClassicMode5);
			this->Controls->Add(this->btnPreviousPageMeniuRegClassicMode5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximumSize = System::Drawing::Size(1024, 640);
			this->Name = L"MeniuRegulamentClassicMode5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuRegulamentClassicMode9
	/// </summary>
	public ref class MeniuRegulamentClassicMode9 : public System::Windows::Forms::Form
	{
	public:
		MeniuRegulamentClassicMode9(void)
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
		~MeniuRegulamentClassicMode9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  btnPreviousPageMeniuRegClassicMode9;

	private: System::Windows::Forms::Button^  btnNextPageMeniuRegClassicMode9;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuRegulamentClassicMode9::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnPreviousPageMeniuRegClassicMode9 = (gcnew System::Windows::Forms::Button());
			this->btnNextPageMeniuRegClassicMode9 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// btnPreviousPageMeniuRegClassicMode9
			// 
			this->btnPreviousPageMeniuRegClassicMode9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPreviousPageMeniuRegClassicMode9.BackgroundImage")));
			this->btnPreviousPageMeniuRegClassicMode9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPreviousPageMeniuRegClassicMode9->Location = System::Drawing::Point(652, 545);
			this->btnPreviousPageMeniuRegClassicMode9->Name = L"btnPreviousPageMeniuRegClassicMode9";
			this->btnPreviousPageMeniuRegClassicMode9->Size = System::Drawing::Size(150, 50);
			this->btnPreviousPageMeniuRegClassicMode9->TabIndex = 13;
			this->btnPreviousPageMeniuRegClassicMode9->UseVisualStyleBackColor = true;
			// 
			// btnNextPageMeniuRegClassicMode9
			// 
			this->btnNextPageMeniuRegClassicMode9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNextPageMeniuRegClassicMode9.BackgroundImage")));
			this->btnNextPageMeniuRegClassicMode9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNextPageMeniuRegClassicMode9->Location = System::Drawing::Point(833, 545);
			this->btnNextPageMeniuRegClassicMode9->Name = L"btnNextPageMeniuRegClassicMode9";
			this->btnNextPageMeniuRegClassicMode9->Size = System::Drawing::Size(150, 50);
			this->btnNextPageMeniuRegClassicMode9->TabIndex = 14;
			this->btnNextPageMeniuRegClassicMode9->UseVisualStyleBackColor = true;
			// 
			// MeniuRegulamentClassicMode9
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnNextPageMeniuRegClassicMode9);
			this->Controls->Add(this->btnPreviousPageMeniuRegClassicMode9);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuRegulamentClassicMode9";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

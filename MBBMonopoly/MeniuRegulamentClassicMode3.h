#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuRegulamentClassicMode3
	/// </summary>
	public ref class MeniuRegulamentClassicMode3 : public System::Windows::Forms::Form
	{
	public:
		MeniuRegulamentClassicMode3(void)
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
		~MeniuRegulamentClassicMode3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  btnPreviousPageMeniuRegClassicMode3;
	private: System::Windows::Forms::Button^  btnNextPageMeniuRegClassicMode3;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuRegulamentClassicMode3::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnPreviousPageMeniuRegClassicMode3 = (gcnew System::Windows::Forms::Button());
			this->btnNextPageMeniuRegClassicMode3 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// btnPreviousPageMeniuRegClassicMode3
			// 
			this->btnPreviousPageMeniuRegClassicMode3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPreviousPageMeniuRegClassicMode3.BackgroundImage")));
			this->btnPreviousPageMeniuRegClassicMode3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPreviousPageMeniuRegClassicMode3->Location = System::Drawing::Point(652, 545);
			this->btnPreviousPageMeniuRegClassicMode3->Name = L"btnPreviousPageMeniuRegClassicMode3";
			this->btnPreviousPageMeniuRegClassicMode3->Size = System::Drawing::Size(150, 50);
			this->btnPreviousPageMeniuRegClassicMode3->TabIndex = 4;
			this->btnPreviousPageMeniuRegClassicMode3->UseVisualStyleBackColor = true;
			// 
			// btnNextPageMeniuRegClassicMode3
			// 
			this->btnNextPageMeniuRegClassicMode3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNextPageMeniuRegClassicMode3.BackgroundImage")));
			this->btnNextPageMeniuRegClassicMode3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNextPageMeniuRegClassicMode3->Location = System::Drawing::Point(833, 545);
			this->btnNextPageMeniuRegClassicMode3->Name = L"btnNextPageMeniuRegClassicMode3";
			this->btnNextPageMeniuRegClassicMode3->Size = System::Drawing::Size(150, 50);
			this->btnNextPageMeniuRegClassicMode3->TabIndex = 5;
			this->btnNextPageMeniuRegClassicMode3->UseVisualStyleBackColor = true;
			// 
			// MeniuRegulamentClassicMode3
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnNextPageMeniuRegClassicMode3);
			this->Controls->Add(this->btnPreviousPageMeniuRegClassicMode3);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximumSize = System::Drawing::Size(1024, 640);
			this->Name = L"MeniuRegulamentClassicMode3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

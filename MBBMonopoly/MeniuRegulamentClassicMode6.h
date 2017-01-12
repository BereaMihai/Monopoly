#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuRegulamentClassicMode6
	/// </summary>
	public ref class MeniuRegulamentClassicMode6 : public System::Windows::Forms::Form
	{
	public:
		MeniuRegulamentClassicMode6(void)
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
		~MeniuRegulamentClassicMode6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnPreviousPageMeniuRegClassicMode6;
	protected:

	private: System::Windows::Forms::Button^  btnNextPageMeniuRegClassicMode6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuRegulamentClassicMode6::typeid));
			this->btnPreviousPageMeniuRegClassicMode6 = (gcnew System::Windows::Forms::Button());
			this->btnNextPageMeniuRegClassicMode6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnPreviousPageMeniuRegClassicMode6
			// 
			this->btnPreviousPageMeniuRegClassicMode6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPreviousPageMeniuRegClassicMode6.BackgroundImage")));
			this->btnPreviousPageMeniuRegClassicMode6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPreviousPageMeniuRegClassicMode6->Location = System::Drawing::Point(652, 545);
			this->btnPreviousPageMeniuRegClassicMode6->Name = L"btnPreviousPageMeniuRegClassicMode6";
			this->btnPreviousPageMeniuRegClassicMode6->Size = System::Drawing::Size(150, 50);
			this->btnPreviousPageMeniuRegClassicMode6->TabIndex = 7;
			this->btnPreviousPageMeniuRegClassicMode6->UseVisualStyleBackColor = true;
			// 
			// btnNextPageMeniuRegClassicMode6
			// 
			this->btnNextPageMeniuRegClassicMode6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNextPageMeniuRegClassicMode6.BackgroundImage")));
			this->btnNextPageMeniuRegClassicMode6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNextPageMeniuRegClassicMode6->Location = System::Drawing::Point(832, 548);
			this->btnNextPageMeniuRegClassicMode6->Name = L"btnNextPageMeniuRegClassicMode6";
			this->btnNextPageMeniuRegClassicMode6->Size = System::Drawing::Size(150, 50);
			this->btnNextPageMeniuRegClassicMode6->TabIndex = 8;
			this->btnNextPageMeniuRegClassicMode6->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(47, 119);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(900, 400);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// MeniuRegulamentClassicMode6
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->btnNextPageMeniuRegClassicMode6);
			this->Controls->Add(this->btnPreviousPageMeniuRegClassicMode6);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximumSize = System::Drawing::Size(1024, 640);
			this->Name = L"MeniuRegulamentClassicMode6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

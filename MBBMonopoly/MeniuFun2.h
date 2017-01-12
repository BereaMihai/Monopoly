#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuFun2
	/// </summary>
	public ref class MeniuFun2 : public System::Windows::Forms::Form
	{
	public:
		MeniuFun2(void)
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
		~MeniuFun2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  btnYesMeniuFun2;
	private: System::Windows::Forms::Button^  btnNoMeniuFun2;
	private: System::Windows::Forms::Button^  btnBackMeniuFun2;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuFun2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnYesMeniuFun2 = (gcnew System::Windows::Forms::Button());
			this->btnNoMeniuFun2 = (gcnew System::Windows::Forms::Button());
			this->btnBackMeniuFun2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(115, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 70);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(115, 163);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 70);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// btnYesMeniuFun2
			// 
			this->btnYesMeniuFun2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnYesMeniuFun2.BackgroundImage")));
			this->btnYesMeniuFun2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnYesMeniuFun2->Location = System::Drawing::Point(115, 289);
			this->btnYesMeniuFun2->Name = L"btnYesMeniuFun2";
			this->btnYesMeniuFun2->Size = System::Drawing::Size(100, 50);
			this->btnYesMeniuFun2->TabIndex = 3;
			this->btnYesMeniuFun2->UseVisualStyleBackColor = true;
			// 
			// btnNoMeniuFun2
			// 
			this->btnNoMeniuFun2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNoMeniuFun2.BackgroundImage")));
			this->btnNoMeniuFun2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNoMeniuFun2->Location = System::Drawing::Point(315, 289);
			this->btnNoMeniuFun2->Name = L"btnNoMeniuFun2";
			this->btnNoMeniuFun2->Size = System::Drawing::Size(100, 50);
			this->btnNoMeniuFun2->TabIndex = 4;
			this->btnNoMeniuFun2->UseVisualStyleBackColor = true;
			// 
			// btnBackMeniuFun2
			// 
			this->btnBackMeniuFun2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackMeniuFun2.BackgroundImage")));
			this->btnBackMeniuFun2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBackMeniuFun2->Location = System::Drawing::Point(846, 528);
			this->btnBackMeniuFun2->Name = L"btnBackMeniuFun2";
			this->btnBackMeniuFun2->Size = System::Drawing::Size(150, 50);
			this->btnBackMeniuFun2->TabIndex = 8;
			this->btnBackMeniuFun2->UseVisualStyleBackColor = true;
			// 
			// MeniuFun2
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnBackMeniuFun2);
			this->Controls->Add(this->btnNoMeniuFun2);
			this->Controls->Add(this->btnYesMeniuFun2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximumSize = System::Drawing::Size(1024, 640);
			this->Name = L"MeniuFun2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

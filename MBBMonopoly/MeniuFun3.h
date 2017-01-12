#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuFun3
	/// </summary>
	public ref class MeniuFun3 : public System::Windows::Forms::Form
	{
	public:
		MeniuFun3(void)
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
		~MeniuFun3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  btnYesMeniuFun3;
	private: System::Windows::Forms::Button^  btnNoMeniuFun3;
	private: System::Windows::Forms::Button^  btnBackMeniuFun3;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuFun3::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnYesMeniuFun3 = (gcnew System::Windows::Forms::Button());
			this->btnNoMeniuFun3 = (gcnew System::Windows::Forms::Button());
			this->btnBackMeniuFun3 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox1->TabIndex = 2;
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
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// btnYesMeniuFun3
			// 
			this->btnYesMeniuFun3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnYesMeniuFun3.BackgroundImage")));
			this->btnYesMeniuFun3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnYesMeniuFun3->Location = System::Drawing::Point(115, 289);
			this->btnYesMeniuFun3->Name = L"btnYesMeniuFun3";
			this->btnYesMeniuFun3->Size = System::Drawing::Size(100, 50);
			this->btnYesMeniuFun3->TabIndex = 4;
			this->btnYesMeniuFun3->UseVisualStyleBackColor = true;
			// 
			// btnNoMeniuFun3
			// 
			this->btnNoMeniuFun3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNoMeniuFun3.BackgroundImage")));
			this->btnNoMeniuFun3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNoMeniuFun3->Location = System::Drawing::Point(315, 289);
			this->btnNoMeniuFun3->Name = L"btnNoMeniuFun3";
			this->btnNoMeniuFun3->Size = System::Drawing::Size(100, 50);
			this->btnNoMeniuFun3->TabIndex = 5;
			this->btnNoMeniuFun3->UseVisualStyleBackColor = true;
			// 
			// btnBackMeniuFun3
			// 
			this->btnBackMeniuFun3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackMeniuFun3.BackgroundImage")));
			this->btnBackMeniuFun3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBackMeniuFun3->Location = System::Drawing::Point(846, 528);
			this->btnBackMeniuFun3->Name = L"btnBackMeniuFun3";
			this->btnBackMeniuFun3->Size = System::Drawing::Size(150, 50);
			this->btnBackMeniuFun3->TabIndex = 9;
			this->btnBackMeniuFun3->UseVisualStyleBackColor = true;
			// 
			// MeniuFun3
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnBackMeniuFun3);
			this->Controls->Add(this->btnNoMeniuFun3);
			this->Controls->Add(this->btnYesMeniuFun3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximumSize = System::Drawing::Size(1024, 640);
			this->Name = L"MeniuFun3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

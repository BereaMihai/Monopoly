#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuFun4
	/// </summary>
	public ref class MeniuFun4 : public System::Windows::Forms::Form
	{
	public:
		MeniuFun4(void)
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
		~MeniuFun4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  btnYesMeniuFun4;

	private: System::Windows::Forms::Button^  btnNoMeniuFun4;
	private: System::Windows::Forms::Button^  btnBackMeniuFun4;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuFun4::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnYesMeniuFun4 = (gcnew System::Windows::Forms::Button());
			this->btnNoMeniuFun4 = (gcnew System::Windows::Forms::Button());
			this->btnBackMeniuFun4 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox1->TabIndex = 3;
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
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// btnYesMeniuFun4
			// 
			this->btnYesMeniuFun4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnYesMeniuFun4.BackgroundImage")));
			this->btnYesMeniuFun4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnYesMeniuFun4->Location = System::Drawing::Point(115, 289);
			this->btnYesMeniuFun4->Name = L"btnYesMeniuFun4";
			this->btnYesMeniuFun4->Size = System::Drawing::Size(100, 50);
			this->btnYesMeniuFun4->TabIndex = 5;
			this->btnYesMeniuFun4->UseVisualStyleBackColor = true;
			// 
			// btnNoMeniuFun4
			// 
			this->btnNoMeniuFun4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNoMeniuFun4.BackgroundImage")));
			this->btnNoMeniuFun4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNoMeniuFun4->Location = System::Drawing::Point(315, 289);
			this->btnNoMeniuFun4->Name = L"btnNoMeniuFun4";
			this->btnNoMeniuFun4->Size = System::Drawing::Size(100, 50);
			this->btnNoMeniuFun4->TabIndex = 6;
			this->btnNoMeniuFun4->UseVisualStyleBackColor = true;
			// 
			// btnBackMeniuFun4
			// 
			this->btnBackMeniuFun4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackMeniuFun4.BackgroundImage")));
			this->btnBackMeniuFun4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBackMeniuFun4->Location = System::Drawing::Point(846, 528);
			this->btnBackMeniuFun4->Name = L"btnBackMeniuFun4";
			this->btnBackMeniuFun4->Size = System::Drawing::Size(150, 50);
			this->btnBackMeniuFun4->TabIndex = 10;
			this->btnBackMeniuFun4->UseVisualStyleBackColor = true;
			// 
			// MeniuFun4
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnBackMeniuFun4);
			this->Controls->Add(this->btnNoMeniuFun4);
			this->Controls->Add(this->btnYesMeniuFun4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximumSize = System::Drawing::Size(1024, 640);
			this->Name = L"MeniuFun4";
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

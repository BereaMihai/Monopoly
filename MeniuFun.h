#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuFun
	/// </summary>
	public ref class MeniuFun : public System::Windows::Forms::Form
	{
	public:
		MeniuFun(void)
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
		~MeniuFun()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  btn_x1;
	private: System::Windows::Forms::Button^  btn_x2;
	private: System::Windows::Forms::Button^  btn_x3;
	private: System::Windows::Forms::Button^  btn_x4;
	private: System::Windows::Forms::Button^  btn_x5;
	private: System::Windows::Forms::Button^  btn_back8;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuFun::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_x1 = (gcnew System::Windows::Forms::Button());
			this->btn_x2 = (gcnew System::Windows::Forms::Button());
			this->btn_x3 = (gcnew System::Windows::Forms::Button());
			this->btn_x4 = (gcnew System::Windows::Forms::Button());
			this->btn_x5 = (gcnew System::Windows::Forms::Button());
			this->btn_back8 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(12, 200);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 70);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// btn_x1
			// 
			this->btn_x1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_x1.BackgroundImage")));
			this->btn_x1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_x1->Location = System::Drawing::Point(334, 211);
			this->btn_x1->Name = L"btn_x1";
			this->btn_x1->Size = System::Drawing::Size(100, 50);
			this->btn_x1->TabIndex = 2;
			this->btn_x1->UseVisualStyleBackColor = true;
			// 
			// btn_x2
			// 
			this->btn_x2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_x2.BackgroundImage")));
			this->btn_x2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_x2->Location = System::Drawing::Point(462, 211);
			this->btn_x2->Name = L"btn_x2";
			this->btn_x2->Size = System::Drawing::Size(100, 50);
			this->btn_x2->TabIndex = 3;
			this->btn_x2->UseVisualStyleBackColor = true;
			// 
			// btn_x3
			// 
			this->btn_x3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_x3.BackgroundImage")));
			this->btn_x3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_x3->Location = System::Drawing::Point(600, 211);
			this->btn_x3->Name = L"btn_x3";
			this->btn_x3->Size = System::Drawing::Size(100, 50);
			this->btn_x3->TabIndex = 4;
			this->btn_x3->UseVisualStyleBackColor = true;
			// 
			// btn_x4
			// 
			this->btn_x4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_x4.BackgroundImage")));
			this->btn_x4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_x4->Location = System::Drawing::Point(730, 211);
			this->btn_x4->Name = L"btn_x4";
			this->btn_x4->Size = System::Drawing::Size(100, 50);
			this->btn_x4->TabIndex = 5;
			this->btn_x4->UseVisualStyleBackColor = true;
			// 
			// btn_x5
			// 
			this->btn_x5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_x5.BackgroundImage")));
			this->btn_x5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_x5->Location = System::Drawing::Point(862, 211);
			this->btn_x5->Name = L"btn_x5";
			this->btn_x5->Size = System::Drawing::Size(100, 50);
			this->btn_x5->TabIndex = 6;
			this->btn_x5->UseVisualStyleBackColor = true;
			// 
			// btn_back8
			// 
			this->btn_back8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_back8.BackgroundImage")));
			this->btn_back8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_back8->Location = System::Drawing::Point(846, 528);
			this->btn_back8->Name = L"btn_back8";
			this->btn_back8->Size = System::Drawing::Size(150, 50);
			this->btn_back8->TabIndex = 7;
			this->btn_back8->UseVisualStyleBackColor = true;
			// 
			// MeniuFun
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btn_back8);
			this->Controls->Add(this->btn_x5);
			this->Controls->Add(this->btn_x4);
			this->Controls->Add(this->btn_x3);
			this->Controls->Add(this->btn_x2);
			this->Controls->Add(this->btn_x1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuFun";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

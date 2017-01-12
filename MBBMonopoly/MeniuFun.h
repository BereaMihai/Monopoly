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
	private: System::Windows::Forms::Button^  btnx1;
	private: System::Windows::Forms::Button^  btnx2;
	private: System::Windows::Forms::Button^  btnx3;
	private: System::Windows::Forms::Button^  btnx4;
	private: System::Windows::Forms::Button^  btnx5;





	private: System::Windows::Forms::Button^  btnBackMeniuFun;



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
			this->btnx1 = (gcnew System::Windows::Forms::Button());
			this->btnx2 = (gcnew System::Windows::Forms::Button());
			this->btnx3 = (gcnew System::Windows::Forms::Button());
			this->btnx4 = (gcnew System::Windows::Forms::Button());
			this->btnx5 = (gcnew System::Windows::Forms::Button());
			this->btnBackMeniuFun = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox2->Location = System::Drawing::Point(115, 163);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 70);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// btnx1
			// 
			this->btnx1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnx1.BackgroundImage")));
			this->btnx1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnx1->Location = System::Drawing::Point(35, 259);
			this->btnx1->Name = L"btnx1";
			this->btnx1->Size = System::Drawing::Size(100, 50);
			this->btnx1->TabIndex = 2;
			this->btnx1->UseVisualStyleBackColor = true;
			// 
			// btnx2
			// 
			this->btnx2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnx2.BackgroundImage")));
			this->btnx2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnx2->Location = System::Drawing::Point(197, 259);
			this->btnx2->Name = L"btnx2";
			this->btnx2->Size = System::Drawing::Size(100, 50);
			this->btnx2->TabIndex = 3;
			this->btnx2->UseVisualStyleBackColor = true;
			// 
			// btnx3
			// 
			this->btnx3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnx3.BackgroundImage")));
			this->btnx3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnx3->Location = System::Drawing::Point(360, 259);
			this->btnx3->Name = L"btnx3";
			this->btnx3->Size = System::Drawing::Size(100, 50);
			this->btnx3->TabIndex = 4;
			this->btnx3->UseVisualStyleBackColor = true;
			// 
			// btnx4
			// 
			this->btnx4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnx4.BackgroundImage")));
			this->btnx4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnx4->Location = System::Drawing::Point(119, 340);
			this->btnx4->Name = L"btnx4";
			this->btnx4->Size = System::Drawing::Size(100, 50);
			this->btnx4->TabIndex = 5;
			this->btnx4->UseVisualStyleBackColor = true;
			// 
			// btnx5
			// 
			this->btnx5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnx5.BackgroundImage")));
			this->btnx5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnx5->Location = System::Drawing::Point(288, 340);
			this->btnx5->Name = L"btnx5";
			this->btnx5->Size = System::Drawing::Size(100, 50);
			this->btnx5->TabIndex = 6;
			this->btnx5->UseVisualStyleBackColor = true;
			// 
			// btnBackMeniuFun
			// 
			this->btnBackMeniuFun->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackMeniuFun.BackgroundImage")));
			this->btnBackMeniuFun->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBackMeniuFun->Location = System::Drawing::Point(846, 528);
			this->btnBackMeniuFun->Name = L"btnBackMeniuFun";
			this->btnBackMeniuFun->Size = System::Drawing::Size(150, 50);
			this->btnBackMeniuFun->TabIndex = 7;
			this->btnBackMeniuFun->UseVisualStyleBackColor = true;
			// 
			// MeniuFun
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btnBackMeniuFun);
			this->Controls->Add(this->btnx5);
			this->Controls->Add(this->btnx4);
			this->Controls->Add(this->btnx3);
			this->Controls->Add(this->btnx2);
			this->Controls->Add(this->btnx1);
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

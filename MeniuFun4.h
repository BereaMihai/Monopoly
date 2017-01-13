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
	private: System::Windows::Forms::Button^  btn_yes3;
	private: System::Windows::Forms::Button^  btn_no3;
	private: System::Windows::Forms::Button^  btn_back11;



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
			this->btn_yes3 = (gcnew System::Windows::Forms::Button());
			this->btn_no3 = (gcnew System::Windows::Forms::Button());
			this->btn_back11 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox2->Location = System::Drawing::Point(13, 199);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 70);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// btn_yes3
			// 
			this->btn_yes3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_yes3.BackgroundImage")));
			this->btn_yes3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_yes3->Location = System::Drawing::Point(365, 210);
			this->btn_yes3->Name = L"btn_yes3";
			this->btn_yes3->Size = System::Drawing::Size(100, 50);
			this->btn_yes3->TabIndex = 5;
			this->btn_yes3->UseVisualStyleBackColor = true;
			// 
			// btn_no3
			// 
			this->btn_no3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_no3.BackgroundImage")));
			this->btn_no3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_no3->Location = System::Drawing::Point(507, 210);
			this->btn_no3->Name = L"btn_no3";
			this->btn_no3->Size = System::Drawing::Size(100, 50);
			this->btn_no3->TabIndex = 6;
			this->btn_no3->UseVisualStyleBackColor = true;
			// 
			// btn_back11
			// 
			this->btn_back11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_back11.BackgroundImage")));
			this->btn_back11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_back11->Location = System::Drawing::Point(846, 528);
			this->btn_back11->Name = L"btn_back11";
			this->btn_back11->Size = System::Drawing::Size(150, 50);
			this->btn_back11->TabIndex = 10;
			this->btn_back11->UseVisualStyleBackColor = true;
			// 
			// MeniuFun4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btn_back11);
			this->Controls->Add(this->btn_no3);
			this->Controls->Add(this->btn_yes3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuFun4";
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

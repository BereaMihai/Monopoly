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
	private: System::Windows::Forms::Button^  btn_yes;
	private: System::Windows::Forms::Button^  btn_no;
	private: System::Windows::Forms::Button^  btn_back9;



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
			this->btn_yes = (gcnew System::Windows::Forms::Button());
			this->btn_no = (gcnew System::Windows::Forms::Button());
			this->btn_back9 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox2->Location = System::Drawing::Point(13, 199);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 70);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// btn_yes
			// 
			this->btn_yes->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_yes.BackgroundImage")));
			this->btn_yes->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_yes->Location = System::Drawing::Point(365, 210);
			this->btn_yes->Name = L"btn_yes";
			this->btn_yes->Size = System::Drawing::Size(100, 50);
			this->btn_yes->TabIndex = 3;
			this->btn_yes->UseVisualStyleBackColor = true;
			// 
			// btn_no
			// 
			this->btn_no->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_no.BackgroundImage")));
			this->btn_no->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_no->Location = System::Drawing::Point(507, 210);
			this->btn_no->Name = L"btn_no";
			this->btn_no->Size = System::Drawing::Size(100, 50);
			this->btn_no->TabIndex = 4;
			this->btn_no->UseVisualStyleBackColor = true;
			// 
			// btn_back9
			// 
			this->btn_back9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_back9.BackgroundImage")));
			this->btn_back9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_back9->Location = System::Drawing::Point(846, 528);
			this->btn_back9->Name = L"btn_back9";
			this->btn_back9->Size = System::Drawing::Size(150, 50);
			this->btn_back9->TabIndex = 8;
			this->btn_back9->UseVisualStyleBackColor = true;
			// 
			// MeniuFun2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btn_back9);
			this->Controls->Add(this->btn_no);
			this->Controls->Add(this->btn_yes);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
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

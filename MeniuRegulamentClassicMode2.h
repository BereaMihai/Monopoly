#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuRegulamentClassicMode2
	/// </summary>
	public ref class MeniuRegulamentClassicMode2 : public System::Windows::Forms::Form
	{
	public:
		MeniuRegulamentClassicMode2(void)
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
		~MeniuRegulamentClassicMode2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  btn_previouspage;
	private: System::Windows::Forms::Button^  btn_nextpage2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuRegulamentClassicMode2::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_previouspage = (gcnew System::Windows::Forms::Button());
			this->btn_nextpage2 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// btn_previouspage
			// 
			this->btn_previouspage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_previouspage.BackgroundImage")));
			this->btn_previouspage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_previouspage->Location = System::Drawing::Point(652, 545);
			this->btn_previouspage->Name = L"btn_previouspage";
			this->btn_previouspage->Size = System::Drawing::Size(150, 50);
			this->btn_previouspage->TabIndex = 3;
			this->btn_previouspage->UseVisualStyleBackColor = true;
			// 
			// btn_nextpage2
			// 
			this->btn_nextpage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_nextpage2.BackgroundImage")));
			this->btn_nextpage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_nextpage2->Location = System::Drawing::Point(832, 545);
			this->btn_nextpage2->Name = L"btn_nextpage2";
			this->btn_nextpage2->Size = System::Drawing::Size(150, 50);
			this->btn_nextpage2->TabIndex = 4;
			this->btn_nextpage2->UseVisualStyleBackColor = true;
			// 
			// MeniuRegulamentClassicMode2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btn_nextpage2);
			this->Controls->Add(this->btn_previouspage);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuRegulamentClassicMode2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

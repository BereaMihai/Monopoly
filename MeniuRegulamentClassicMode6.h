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
	private: System::Windows::Forms::Button^  btn_previouspage5;
	private: System::Windows::Forms::Button^  btn_nextpage6;
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
			this->btn_previouspage5 = (gcnew System::Windows::Forms::Button());
			this->btn_nextpage6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_previouspage5
			// 
			this->btn_previouspage5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_previouspage5.BackgroundImage")));
			this->btn_previouspage5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_previouspage5->Location = System::Drawing::Point(652, 545);
			this->btn_previouspage5->Name = L"btn_previouspage5";
			this->btn_previouspage5->Size = System::Drawing::Size(150, 50);
			this->btn_previouspage5->TabIndex = 7;
			this->btn_previouspage5->UseVisualStyleBackColor = true;
			// 
			// btn_nextpage6
			// 
			this->btn_nextpage6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_nextpage6.BackgroundImage")));
			this->btn_nextpage6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_nextpage6->Location = System::Drawing::Point(832, 548);
			this->btn_nextpage6->Name = L"btn_nextpage6";
			this->btn_nextpage6->Size = System::Drawing::Size(150, 50);
			this->btn_nextpage6->TabIndex = 8;
			this->btn_nextpage6->UseVisualStyleBackColor = true;
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
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->btn_nextpage6);
			this->Controls->Add(this->btn_previouspage5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuRegulamentClassicMode6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

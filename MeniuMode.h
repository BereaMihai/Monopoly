#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MeniuMode
	/// </summary>
	public ref class MeniuMode : public System::Windows::Forms::Form
	{
	public:
		MeniuMode(void)
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
		~MeniuMode()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnClassicMode;
	private: System::Windows::Forms::Button^  btnFunMode;
	protected:

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Button^  btn_back7;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MeniuMode::typeid));
			this->btnClassicMode = (gcnew System::Windows::Forms::Button());
			this->btnFunMode = (gcnew System::Windows::Forms::Button());
			this->btn_back7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnClassicMode
			// 
			this->btnClassicMode->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClassicMode.BackgroundImage")));
			this->btnClassicMode->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnClassicMode->Location = System::Drawing::Point(89, 164);
			this->btnClassicMode->Name = L"btnClassicMode";
			this->btnClassicMode->Size = System::Drawing::Size(300, 70);
			this->btnClassicMode->TabIndex = 0;
			this->btnClassicMode->UseVisualStyleBackColor = true;
			// 
			// btnFunMode
			// 
			this->btnFunMode->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFunMode.BackgroundImage")));
			this->btnFunMode->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnFunMode->Location = System::Drawing::Point(89, 321);
			this->btnFunMode->Name = L"btnFunMode";
			this->btnFunMode->Size = System::Drawing::Size(300, 70);
			this->btnFunMode->TabIndex = 1;
			this->btnFunMode->UseVisualStyleBackColor = true;
			// 
			// btn_back7
			// 
			this->btn_back7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_back7.BackgroundImage")));
			this->btn_back7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_back7->Location = System::Drawing::Point(846, 528);
			this->btn_back7->Name = L"btn_back7";
			this->btn_back7->Size = System::Drawing::Size(150, 50);
			this->btn_back7->TabIndex = 2;
			this->btn_back7->UseVisualStyleBackColor = true;
			// 
			// MeniuMode
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btn_back7);
			this->Controls->Add(this->btnFunMode);
			this->Controls->Add(this->btnClassicMode);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MeniuMode";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

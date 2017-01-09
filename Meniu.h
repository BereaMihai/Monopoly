#pragma once

namespace MBBMonopoly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Meniu
	/// </summary>
	public ref class Meniu : public System::Windows::Forms::Form
	{
	public:
		Meniu(void)
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
		~Meniu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_newgame;
	protected:
	private: System::Windows::Forms::Button^  btn_createuser;
	private: System::Windows::Forms::Button^  btn_myscore;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Meniu::typeid));
			this->btn_newgame = (gcnew System::Windows::Forms::Button());
			this->btn_createuser = (gcnew System::Windows::Forms::Button());
			this->btn_myscore = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_newgame
			// 
			this->btn_newgame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_newgame.BackgroundImage")));
			this->btn_newgame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_newgame->Location = System::Drawing::Point(113, 93);
			this->btn_newgame->Name = L"btn_newgame";
			this->btn_newgame->Size = System::Drawing::Size(300, 70);
			this->btn_newgame->TabIndex = 0;
			this->btn_newgame->UseVisualStyleBackColor = true;
			// 
			// btn_createuser
			// 
			this->btn_createuser->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_createuser.BackgroundImage")));
			this->btn_createuser->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_createuser->Location = System::Drawing::Point(113, 220);
			this->btn_createuser->Name = L"btn_createuser";
			this->btn_createuser->Size = System::Drawing::Size(300, 70);
			this->btn_createuser->TabIndex = 1;
			this->btn_createuser->UseVisualStyleBackColor = true;
			// 
			// btn_myscore
			// 
			this->btn_myscore->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_myscore.BackgroundImage")));
			this->btn_myscore->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_myscore->Location = System::Drawing::Point(113, 350);
			this->btn_myscore->Name = L"btn_myscore";
			this->btn_myscore->Size = System::Drawing::Size(300, 70);
			this->btn_myscore->TabIndex = 2;
			this->btn_myscore->UseVisualStyleBackColor = true;
			// 
			// Meniu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->btn_myscore);
			this->Controls->Add(this->btn_createuser);
			this->Controls->Add(this->btn_newgame);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Meniu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MBB Monopoly";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

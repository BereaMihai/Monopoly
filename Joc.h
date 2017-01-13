//#include <cstdlib>
#include "Player.h"
#include "Property.h"
#include <list>
#pragma once


namespace MBBMonopoly {
	
	//cine e la rand sa mute. 1= player1, 2=player2 etc samd
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Joc
	/// </summary>
	public ref class Joc : public System::Windows::Forms::Form
	{
	public:
		Joc(void)
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
		~Joc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Button^  button3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Joc::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(176, 609);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Roll Dice";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Joc::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 645);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(127, 22);
			this->textBox1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(1156, 793);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(33, 31);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(344, 609);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 30);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Move";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Joc::button3_Click);
			// 
			// Joc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1281, 1045);
			this->ControlBox = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Joc";
			this->Text = L"Joc";
			this->Load += gcnew System::EventHandler(this, &Joc::Joc_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Property* MediterraneanAvenue =new Property("Mediterranean Avenue", 60, "The bank", 2, 0, false, 1);
		Property* BalticAvenue = new Property("Baltic Avenue", 60, "The bank", 4, 0, false, 2);
		Property* OrientalAvenue = new Property("Oriental Avenue", 100, "The bank", 6, 0, false, 3);
		Property* VermontAvenue = new Property("Vermont Avenue", 100, "The bank", 6, 0, false, 4);
		Property* ConnecticutAvenue = new Property("Connecticut Avenue", 120, "The bank", 8, 0, false, 5);
		Property* StCharlesPlace = new Property("St.Charles Place", 140, "The bank", 10, 0, false, 6);
		Property* StatesAvenue = new Property("States Avenue", 140, "The bank", 10, 0, false, 7);
		Property* VirginiaAvenue = new Property("Virginia Avenue", 160, "The bank", 12, 0, false, 8);
		Property* StJamesPlace = new Property("St.James Place", 180, "The bank", 14, 0, false, 9);
		Property* TennesseeAvenue = new Property("Tennessee Avenue", 180, "The bank", 14, 0, false, 10);
		Property* NewYorkAvenue = new Property("New York Avenue", 200, "The bank", 16, 0, false, 11);
		Property* KentuckyAvenue = new Property("Kentucky Avenue", 220, "The bank", 18, 0, false, 12);
		Property* IndianaAvenue = new Property("Indiana Avenue", 220, "The bank", 18, 0, false, 13);
		Property* IllinoisAvenue = new Property("Illinois Avenue ", 240, "The bank", 20, 0, false, 14);
		Property* AtlanticAvenue = new Property("Atlantic Avenue", 260, "The bank", 22, 0, false, 15);
		Property* VentnorAvenue = new Property("Ventnor Avenue", 260, "The bank", 22, 0, false, 16);
		Property* MarvinGardens = new Property("Marvin Gardens", 280, "The bank", 24, 0, false, 17);
		Property* PacificAvenue = new Property("Pacific Avenue", 300, "The bank", 26, 0, false, 18);
		Property* NorthCarolinaAvenue = new Property("North Carolina Avenue", 300, "The bank", 26, 0, false, 19);
		Property* PennsylvaniaAvenue = new Property("Pennsylvania Avenue", 320, "The bank", 28, 0, false, 20);
		Property* ParkPlace = new Property("Park Place", 350, "The bank", 35, 0, false, 21);
		Property* Boardwalk = new Property("Boardwalk", 400, "The bank", 50, 0, false, 22);
		
		
	
		Player* Gigel = new Player("Gigel", 0, 2000, false, 0, false);
		bool dice_rolled = false;
		int turn = 1, cnt = 0;
		int x, y, poz_curenta;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Random^ randObj = gcnew Random;
		dice_rolled = true;
			Joc::x = randObj->Next(1, 7);
			Joc::y = randObj->Next(1, 7);
		this->textBox1->Text = "You rolled: " + x.ToString() + " and " + y.ToString() + ".";
		//	int posxx, posyy;
		//	posxx = pictureBox1->Left;
			//posyy = pictureBox1->Top;
			//textBox1->Text = posxx + " " + posyy;
	}
	private: System::Void Joc_Load(System::Object^  sender, System::EventArgs^  e) {
		std::list<Property> *lista_prop;
		//lista_prop->insert(ParkPlace);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (turn == 1) {
			
			//Gigel->
			//MessageBox::Show("Gigel e la " + Joc::Gigel->getPosition()+" si tre sa mearga la " + (Joc::Gigel->getPosition()+(x+y)));
		
			// Joc::poz_curenta = Joc::Gigel->getPosition();
		//	 Joc::Gigel->move(2);
			//if (Joc::poz_curenta + x + y <= 11) {
			//	pictureBox1->Top += 55;
			//	MessageBox::Show("Gigel e acum la: " + Joc::Gigel->getPosition());
			//}
		}

	}
/*private: System::Void Joc_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBox::Show("x coord: " + e)
}*/
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//int posx, posy;
	//posx = pictureBox1->Left;
	//posy = pictureBox1->Top;
	//MessageBox::Show("x: " + posx + " y" + posy);
	if (dice_rolled) {
		dice_rolled = false;
		cnt = Gigel->getPosition();
		//int pozitie_veche= Gigel->getPosition();
		Gigel->move(x + y);
		cnt += x + y;
		if (cnt> 40) {
			cnt %= 10;
			//int aux;
			//aux = cnt + x + y;
		//	cnt = aux-cnt;
			//cnt -= x + y;
		//	cnt -= x + y-(40-pozitie_veche);
			//cnt = cnt % 10;
			//cnt = cnt + (x + y - cnt);
			//MessageBox::Show("Tre sa pic pe " + cnt);
		}
		switch (cnt) {
		case 0:
			pictureBox1->Location = Point(840, 622);
			//pictureBox1->Top = 840;
			//pictureBox1->Left = 622;
			cnt++;
			break;
		case 1:
			pictureBox1->Location = Point(763, 622);
			//pictureBox1->Top = 455;
			//pictureBox1->Left = 622;
			cnt++;
			break;
		case 2:
			pictureBox1->Location = Point(686, 622);
			//pictureBox1->Top = 147;
			//pictureBox1->Left = 622;
			cnt++;
			break;
		case 3:
			pictureBox1->Location = Point(609, 622);
			//pictureBox1->Top = 30;
			//pictureBox1->Left = 389;
			cnt++;
			break;
		case 4:
			pictureBox1->Location = Point(532, 622);
			//	pictureBox1->Top = 30;
				//pictureBox1->Left = 334;
			cnt++;
			break;
		case 5:
			pictureBox1->Location = Point(455, 622);
			//pictureBox1->Top = 451;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 6:
			pictureBox1->Location = Point(378, 622);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 7:
			pictureBox1->Location = Point(301, 622);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 8:
			pictureBox1->Location = Point(224, 622);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 9:
			pictureBox1->Location = Point(147, 622);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 10:
			pictureBox1->Location = Point(69, 622);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 11:
			pictureBox1->Location = Point(30, 554);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 12:
			pictureBox1->Location = Point(30, 499);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 13:
			pictureBox1->Location = Point(30, 444);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 14:
			pictureBox1->Location = Point(30, 389);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 15:
			pictureBox1->Location = Point(30, 334);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 16:
			pictureBox1->Location = Point(30, 279);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 17:
			pictureBox1->Location = Point(30, 224);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 18:
			pictureBox1->Location = Point(30, 169);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 19:
			pictureBox1->Location = Point(30, 114);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 20:
			pictureBox1->Location = Point(18, 18);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 21:
			pictureBox1->Location = Point(135, 15);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 22:
			pictureBox1->Location = Point(214, 15);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 23:
			pictureBox1->Location = Point(293, 15);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 24:
			pictureBox1->Location = Point(372, 15);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 25:
			pictureBox1->Location = Point(451, 15);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 26:
			pictureBox1->Location = Point(530, 15);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 27:
			pictureBox1->Location = Point(609, 15);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 28:
			pictureBox1->Location = Point(688, 15);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 29:
			pictureBox1->Location = Point(767, 15);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 30:
			pictureBox1->Location = Point(846, 25);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 31:
			pictureBox1->Location = Point(859, 100);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 32:
			pictureBox1->Location = Point(859, 157);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 33:
			pictureBox1->Location = Point(859, 214);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 34:
			pictureBox1->Location = Point(859, 271);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 35:
			pictureBox1->Location = Point(859, 328);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 36:
			pictureBox1->Location = Point(859, 385);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 37:
			pictureBox1->Location = Point(859, 442);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 38:
			pictureBox1->Location = Point(859, 499);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 39:
			pictureBox1->Location = Point(859, 556);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;
		case 40:
			pictureBox1->Location = Point(859, 613);
			//pictureBox1->Top = 688;
			//pictureBox1->Left = 15;
			cnt++;
			break;


		}
	}
else
MessageBox::Show("Pls roll dice first!");
}
};
}

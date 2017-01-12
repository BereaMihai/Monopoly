#include <iostream>
#include "Property.h"
using namespace std;

//Brown (Dark Purple)
void MediterraneanAvenue()
{
	Property MediterraneanAvenue("Mediterranean Avenue", 60, "The bank", 2, 0, false, 1);
	Property *MA = &MediterraneanAvenue;
	cout << "Mediterranean Avenue costs " << MA->getPrice() <<"$"<< endl;

}

void BalticAvenue()
{
	Property BalticAvenue("Baltic Avenue", 60 , "The bank", 4, 0, false, 2);
}

//Light Blue
void OrientalAvenue()
{
	Property OrientalAvenue("Oriental Avenue", 100, "The bank", 6 , 0, false, 3);
}
void VermontAvenue()
{
	Property VermontAvenue("Vermont Avenue", 100, "The bank", 6, 0, false, 4);
}
void ConnecticutAvenue()
{
	Property ConnecticutAvenue("Connecticut Avenue", 120, "The bank", 8, 0, false, 5);
}

//Pink
void StCharlesPlace()
{
	Property StCharlesPlace("St.Charles Place", 140, "The bank", 10, 0, false, 6);
}
void StatesAvenue()
{
	Property StatesAvenue("States Avenue", 140, "The bank", 10, 0, false, 7);
}
void VirginiaAvenue()
{
	Property VirginiaAvenue("Virginia Avenue", 160, "The bank", 12, 0, false, 8);
}

//Orange
void StJamesPlace()
{
	Property StJamesPlace("St.James Place", 180, "The bank", 14, 0, false, 9);
}
void TennesseeAvenue()
{
	Property TennesseeAvenue("Tennessee Avenue", 180, "The bank", 14, 0, false, 10);
}
void NewYorkAvenue()
{
	Property NewYorkAvenue("New York Avenue", 200, "The bank", 16, 0, false, 11);
}

//Red
void KentuckyAvenue()
{
	Property KentuckyAvenue("Kentucky Avenue", 220, "The bank", 18, 0, false, 12);
}
void IndianaAvenue()
{
	Property IndianaAvenue("Indiana Avenue", 220, "The bank", 18, 0, false, 13);
}
void IllinoisAvenue()
{
	Property IllinoisAvenue("Illinois Avenue ", 240, "The bank", 20, 0, false, 14);
}

//Yellow
void AtlanticAvenue()
{
	Property AtlanticAvenue("Atlantic Avenue", 260, "The bank", 22, 0, false, 15);
}
void VentnorAvenue()
{
	Property VentnorAvenue("Ventnor Avenue", 260, "The bank", 22, 0, false, 16);
}
void MarvinGardens()
{
	Property MarvinGardens("Marvin Gardens", 280, "The bank", 24, 0, false, 17);
}

//Green
void PacificAvenue()
{
	Property PacificAvenue("Pacific Avenue", 300, "The bank", 26, 0, false, 18);
}
void NorthCarolinaAvenue()
{
	Property NorthCarolinaAvenue("North Carolina Avenue", 300, "The bank", 26, 0, false, 19);
}
void PennsylvaniaAvenue()
{
	Property PennsylvaniaAvenue("Pennsylvania Avenue", 320, "The bank", 28, 0, false, 20);
}

//Dark Blue
void ParkPlace()
{
	Property ParkPlace("Park Place", 350, "The bank", 35, 0, false, 21);
}
void Boardwalk()
{
	Property Boardwalk("Boardwalk", 400, "The bank", 50, 0, false, 22);
}

int main()
{

	Property Alabama("Alabama", 100, "None", 150, 0, false, 1);
	Property LasVegas("LasVegas", 300, "None", 300, 0, false, 2);
	Property Dallas("Dallas", 500, "None", 450, 0, false, 3);
	Property Washington("Washington", 900, "None", 500, 0, false, 4);
	Property* alabama = &Alabama;

	cout << "Alabama costs " <<alabama->getPrice() << endl;
	cout << "Alabama's owner is : ";

	string owner = alabama->getOwner();
	/*
	if (Alabama.getNrOfHouses() == 0)
	 {
		cout << "Alabama has no houses! " << endl;
	 }
	 else
	   {
		  cout << "Alabama has " << Alabama.getNrOfHouses() << " houses";
	   }

		 Alabama.addHouse();
		 Alabama.addHouse();

		  if (Alabama.getNrOfHouses() == 0)
		    {
			   cout << "Alabama has no houses" << endl;
		    }
		   else
		    {
			   cout << "Alabama has now " << Alabama.getNrOfHouses() << " houses";
		    }*/
	return 0;
}
#include <iostream>
#include <Property.h>
#include <Card.h>
#include <Player.h>
#include <cstring>
using namespace std;

Property::Property( string name, int price, string owner, int rent, int nrOfHouses, bool hasHotel, int ID)
{
	this->name = name;
	this->price = price;
	this->owner = owner;
	this->rent = rent;
	this->nrOfHouses = nrOfHouses;
	this->hasHotel = hasHotel;
	this->ID = ID;
}

Player::Player(string userName, int position, int money, bool canEvade, short nrEvades, bool inJail)
{
    this->userName = userName;
    this->position = position;
    this->money = money;
    this->canEvade = canEvade;
    this->nrEvades = nrEvades;
    this->inJail = inJail;
}

Card::Card(string name, string description, short cardID)
{
    this->cardName = cardName;
    this->description = description;
    this->cardID = cardID;
}

string Property::getName()
{
	return name;
}

string Property::getOwner()
{
	return owner;
}

void Property::setOwner(string newOwner)
{
	this->owner = newOwner;
}

int Property::getPrice()
{
	return price;
}

int Property::getRent()
{
	return rent;
}

int Property::getNrOfHouses()
{
	return nrOfHouses;
}

bool Property::getHasHotel()
{
	return hasHotel;
}

int Property::getID()
{
	return ID;
}

void Property::addHouse()
{
	nrOfHouses++;
}

void Property::setHasHotel(bool isHotel)
{
	this->hasHotel = isHotel;
}

int main()
{

	Property Alabama("Alabama", 100, "None ", 150, 0, false, 1);
	Property LasVegas("LasVegas", 300, "None ", 300, 0, false, 2);
	Property Dallas("Dallas", 500, "None ", 450, 0, false, 3);
	Property Washington("Washington", 900, "None ", 500, 0, false, 4);
	Property* alabama = &Alabama;

	cout << "Alabama costs " <<alabama->getPrice() <<"$"<< endl;
	cout << "Alabama's owner is : "<<alabama->getOwner()<<endl;

	if (Alabama.getNrOfHouses() == 0)
	 {
		cout << "Alabama has no houses! " << endl;
	 }
	 else
	   {
		  cout << "Alabama has " << alabama->getNrOfHouses() << " houses";
	   }

		 alabama->addHouse();
		 alabama->addHouse();

		  if (alabama->getNrOfHouses() == 0)
		    {
			   cout << "Alabama has no houses" << endl;
		    }
		   else
		    {
			   cout << "Alabama has now " << alabama->getNrOfHouses() << " houses";
		    }
	return 0;
}
//obiect player: atribute(nume,casuta_pe_Care_e,bani,are_evadare?,cate_evadari,este_la_Bulau?)
                //functii(modifica_bani,avanseaza, pune_casa(Property proeprty),pune_hotel,nr_total_case,nr_total_hotel)
                //obiect card (nume,descriere,id)

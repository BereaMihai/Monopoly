#include "Property.h"
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


#ifndef PROPERTY_H
#define PROPERTY_H
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
#pragma once

using namespace std;
class Property 
{
 public:
	Property(string name,int price, string owner, int rent,int nrOfHouses, bool hasHotel,int ID);
	 
	 string getName();
	 string getOwner();
	  int getPrice();
	  int getRent();
	  int getNrOfHouses();
	  int getID();
	//
	 bool getHasHotel();
	//--------------
	  void setName(string);
      void addHouse();
	  void setOwner(string);	
	  void setNrOfHouses(int);
	  void setHasHotel(bool);

 private:
	
	string name;
	int price;
	string owner;
	int rent;
	int nrOfHouses;
	bool hasHotel;
	int ID; //proprietatea are ID. in clasa Player o sa fie un camp "position" care
			//e int si corespunde acestui id.
};

#endif
#ifndef PROPERTY_H
#define PROPERTY_H
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <list>
#pragma once


class Property 
{
 public:
	Property(std::string name,int price, std::string owner, int rent,int nrOfHouses, bool hasHotel,int ID);	 
	std::string getName();
	std::string getOwner();
	  int getPrice();
	  int getRent();
	  int getNrOfHouses();
	  int getID();
	//
	 bool getHasHotel();
	//--------------
	  void setName(std::string);
      void addHouse();
	  void setOwner(std::string);
	  void setNrOfHouses(int);
	  void setHasHotel(bool);
	  std::list<Property> lista_proprietati;

 private:
	
	 std::string name;
	int price;
	std::string owner;
	int rent;
	int nrOfHouses;
	bool hasHotel;
	int ID; //proprietatea are ID. in clasa Player o sa fie un camp "position" care
			//e int si corespunde acestui id.
};

#endif
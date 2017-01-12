#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
#pragma once

using namespace std;

class Player
{
 public :
	 Player(string username, int position, int money, bool canEvade, short nrEvades, bool inJail);

	 void move();
	 void buyHouse(Property property);
	 void buyHotel(Property property);
	  int modifyMoney();
	  int nrHouses();
	  int nrHotels();

 private:

	 string userName;
	 int position;
	 int money;
	 bool canEvade;
	 short nrEvades;
	 bool inJail; 

};

#endif
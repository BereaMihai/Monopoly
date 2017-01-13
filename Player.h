#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
#pragma once



class Player
{
 public :
	 Player(std::string username, int position, int money, bool canEvade, short nrEvades, bool inJail);

	 void move(int);
	 void buyHouse();
	 void buyHotel();
	  int modifyMoney();
	  int nrHouses();
	  int nrHotels();
	  void setMoney(int);
	  int geMoney();
	  int getPosition();

 private:

	 std::string userName;
	 int position;
	 int money;
	 bool canEvade;
	 short nrEvades;
	 bool inJail; 

};

#endif
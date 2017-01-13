#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
#pragma once

using namespace std;

class Card
{
 public:
	 Card(string cardName, string description, short cardID);

	 void cardEvent();



 private:
	 
	 string cardName;
	 string description;
	 short cardID;

};























#endif
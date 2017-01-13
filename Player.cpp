
#include <cstring>
#include <conio.h>
#include <iostream>
#include "MBBMonopoly\Player.h"
using namespace std;


Player::Player(std::string username, int position, int money, bool canEvade, short nrEvades, bool inJail)
{
	this->userName = username;
	this->position = position;
	this->money = money;
	this->canEvade = canEvade;
	this->nrEvades = nrEvades;
	this->inJail = inJail;


}

void Player::move(int pos)
{
	position += pos;

}

void Player::buyHouse()
{
}

void Player::buyHotel()
{
}

int Player::modifyMoney()
{
	return 0;
}

int Player::nrHouses()
{
	return 0;
}

int Player::nrHotels()
{
	return 0;
}

void Player::setMoney(int)
{
}

int Player::geMoney()
{
	return 0;
}

int Player::getPosition()
{
	return position;
}

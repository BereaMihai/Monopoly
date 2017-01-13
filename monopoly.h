#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>

using namespace std;

#define DICE_MOVES 0
#define CHECKS 5
#define DOUBLE_CHECK 0
#define CONTROL_CHECK 1
#define HUMAN HUMAN
#define AI AI
#define MAX_PLAYER_NAME 12

short vecMoves[DICE_MOVES], vecChecks[CHECKS], firstDice, secondDice, diceDouble, playerNumber;
bool roll=true, anotherTurn=false, isJailed=false;
char currentPlayer[MAX_PLAYER_NAME];

struct game
{
    board board;
    userName userName;
    myScore myScore;
    menu menu;
};

struct myScore
{
    unsigned int gamesWon;
    unsigned int gamesPlayed;
};


struct player
{
    myScore myScore;
    char name;
    char password;
    bool registered;
};

struct computerAI
{
    char name;
};

struct theBank
{
    unsigned int money;
};

struct board
{
    cell cell;
    int board[100][100];
    int collumns;
    int rows;

};

struct district
{
    unsigned short propertyParts;
    bool isOwned;
    property property;
};

struct zone
{
    property property;
    communityChest communityChest;
    incomeTax incomeTax;
    railRoad railRoad;
    chance chance;
    jail jail;
    utility utility;
    freeParking freeParking;
    goToJailZone goToJailZone;
    luxuryTax luxuryTax;
    int widthX;
    int heightY;
};

struct property
{
    int axisX;
    int axisY;
    char name;
    unsigned short value;
    unsigned short tax;
    bool canBuild;
};

struct communityChest
{

};

struct incomeTax
{

};

struct railRoad
{

};

struct chance
{

};

struct jail
{

};

struct utility
{

};

struct goToJailZone
{

};

struct luxuryTax
{

};

//bool humanRollDice(short vecMoves[VEC_DICE], bool anotherTurn, bool isJailed, bool roll);
void rollDice(short vecMoves[DICE_MOVES], short vecChecks[CHECKS], bool& anotherTurn);
void moveSquares(short vecMoves[DICE_MOVES]);
void goToJail(zone square);

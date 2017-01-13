#include "monopoly.h"
#include "test.cpp"

using namespace std;

char answer;

int main()
{
    srand(time(0));
    if (rand()%100<50)
    {
        playerNumber=0;
        vecChecks[CONTROL_CHECK]=playerNumber;
        char currentPlayer[MAX_PLAYER_NAME]="AI";
    }
    else
    {
        playerNumber=1;
        vecChecks[CONTROL_CHECK]=playerNumber;
        char currentPlayer[MAX_PLAYER_NAME]="HUMAN";
    }
    cout << vecChecks[CONTROL_CHECK]<<endl<<endl;
    if (playerNumber==1)
    {
        labelHumanRollDice:
            rollDice(vecMoves, vecChecks, anotherTurn);
            if (vecChecks[DOUBLE_CHECK]<3 && anotherTurn==true)
            {
                cout<<"You rolled a double: "<<firstDice<<" & "<<secondDice<<"!\nYou will be able to roll the dice again!\nYou will move "<<vecMoves[DICE_MOVES]<<" squares now!"<<endl;
                //movePlayer(vecMoves, position);
                roll=anotherTurn;
                isJailed=false;
                cout<<"jailed="<<isJailed<<" anotherTurn="<<anotherTurn<<" roll="<<roll<<" vecChecks[DOUBLE_CHECK]="<<vecChecks[DOUBLE_CHECK]<<endl;
            }
            else if (vecChecks[DOUBLE_CHECK]>=3)
            {
                cout<<"You rolled a double: "<<firstDice<<" & "<<secondDice<<" for the third time in a row!\nYou will go directly to jail without passing 'GO' and collecting your salary!"<<endl;
                //jailPlayer(player);
                //vecChecks[DOUBLE_CHECK]=0;
                roll=false;
                isJailed=true;
                cout<<"jailed="<<isJailed<<" anotherTurn="<<anotherTurn<<" roll="<<roll<<" vecChecks[DOUBLE_CHECK]="<<vecChecks[DOUBLE_CHECK]<<endl;
            }
            else if (anotherTurn==false)
            {
                cout<<"You rolled: "<<firstDice<<" & "<<secondDice<<"!\nYou will move "<<vecMoves[DICE_MOVES]<<" squares now!"<<endl;
                //vecChecks[DOUBLE_CHECK]=0;
                roll=anotherTurn;
                isJailed=false;
                cout<<"jailed="<<isJailed<<" anotherTurn="<<anotherTurn<<" roll="<<roll<<" vecChecks[DOUBLE_CHECK]="<<vecChecks[DOUBLE_CHECK]<<endl;
            }
            if (roll==true)
            {
            labelHumanRechoose:
                cout<<"\n\nDo you want to roll the dice again now?"<<endl;
                cin>>answer;
                switch (answer)
                {
                    case 'y':
                        goto labelHumanRollDice;
                    case 'Y':
                        goto labelHumanRollDice;
                    case 'n':
                        goto labelHumanRechoose;
                    case 'N':
                        goto labelHumanRechoose;
                    default:
                        cout<<"You entered an incorrect answer! \nPlease use 'y' or 'Y' for 'YES' and 'n' or 'N' for 'NO'!"<<endl; goto labelHumanRechoose;
                }
            }
    }
    else
    {
        labelAIRollDice:
            rollDice(vecMoves, vecChecks, anotherTurn);
            if (vecChecks[DOUBLE_CHECK]<3 && anotherTurn==true)
            {
                cout<<currentPlayer<<" rolled a double: "<<firstDice<<" & "<<secondDice<<"!\n"<<currentPlayer<<" will be able to roll the dice again!\n"<<currentPlayer<<" will move "<<vecMoves[DICE_MOVES]<<" squares now!"<<endl;
                //movePlayer(vecMoves, position);
                roll=anotherTurn;
                isJailed=false;
                cout<<"jailed="<<isJailed<<" anotherTurn="<<anotherTurn<<" roll="<<roll<<" vecChecks[DOUBLE_CHECK]="<<vecChecks[DOUBLE_CHECK]<<endl;
            }
            else if (vecChecks[DOUBLE_CHECK]>=3)
            {
                cout<<currentPlayer<<" rolled a double: "<<firstDice<<" & "<<secondDice<<"!\n"<<currentPlayer<<" will go directly to jail without passing 'GO' and collecting the salary!"<<endl;
                //jailPlayer(player);
                //vecChecks[DOUBLE_CHECK]=0;
                roll=false;
                isJailed=true;
                cout<<"jailed="<<isJailed<<" anotherTurn="<<anotherTurn<<" roll="<<roll<<" vecChecks[DOUBLE_CHECK]="<<vecChecks[DOUBLE_CHECK]<<endl;
            }
            else if (anotherTurn==false)
            {
                cout<<currentPlayer<<" rolled: "<<firstDice<<" & "<<secondDice<<"!\n"<<currentPlayer<<" will move "<<vecMoves[DICE_MOVES]<<" squares now!"<<endl;
                //vecChecks[DOUBLE_CHECK]=0;
                roll=anotherTurn;
                isJailed=false;
                cout<<"jailed="<<isJailed<<" anotherTurn="<<anotherTurn<<" roll="<<roll<<" vecChecks[DOUBLE_CHECK]="<<vecChecks[DOUBLE_CHECK]<<endl;
            }
            if (roll==true)
            {
            labelAIRechoose:
                cout<<"\n\n"<<currentPlayer<<", do you want to roll the dice again now?"<<endl;
                srand(time(0));
                if (rand()%100<25)
                {
                    answer='y';
                }
                else if (rand()%100>19 && rand()%100<40)
                {
                    answer='Y';
                }
                else if (rand()%100>39 && rand()%100<60)
                {
                    answer='n';
                }
                else if (rand()%100>59 && rand()%100<80)
                {
                    answer='N';
                }
                else if (rand()%100>79 && rand()%100<100)
                {
                    answer='A';
                }
                cout<<answer<<endl<<endl;
                switch (answer)
                {
                    case 'y':
                        goto labelAIRollDice;
                    case 'Y':
                        goto labelAIRollDice;
                    case 'n':
                        goto labelAIRechoose;
                    case 'N':
                        goto labelAIRechoose;
                    default:
                        cout<<currentPlayer<<" entered an incorrect answer!\n Please use 'y' or 'Y' for 'YES' and 'n' or 'N' for 'NO'!"<<endl; goto labelAIRechoose;
                }
            }
    }
}

/*
bool humanRollDice(short vecMoves[VEC_DICE], bool anotherTurn, bool isJailed, bool roll)
{
    isJailed=false;
    anotherTurn=false;
    while(true)
    {
        srand(time(0));
        firstDice[DICE_FACE]=(rand()%6)+1;
        secondDice[DICE_FACE]=(rand()%6)+1;
        if (firstDice[DICE_FACE]==secondDice[DICE_FACE])
        {
            diceDouble+=1;
            if (diceDouble<3)
            {
                cout<<"You rolled "<<firstDice[DICE_FACE]<<" and "<<secondDice[DICE_FACE]<<", a double! You may roll the dice once more!"<<endl;
                vecMoves[DICE_MOVES]=firstDice[DICE_FACE]+secondDice[DICE_FACE];
                vecMoves[DICE_DOUBLE_CHECK]=diceDouble;
                anotherTurn=true;
                isJailed=false;
                roll=false;
            }
            else if (diceDouble>=3)
            {
                cout<<"You rolled "<<firstDice[DICE_FACE]<<" and "<<secondDice[DICE_FACE]<<", a double for the third time! Yo go straight to jail without passing 'GO' and collecting the salary!"<<endl;
                diceDouble=0;
                vecMoves[DICE_MOVES]=STOP;
                vecMoves[DICE_DOUBLE_CHECK]=diceDouble;
                anotherTurn=false;
                isJailed=true;
                roll=false;
            }
        }
        else
        {
            cout<<"You rolled: "<<firstDice[DICE_FACE]<<" and "<<secondDice[DICE_FACE]<<endl;
            diceDouble=0;
            vecMoves[DICE_MOVES]=firstDice[DICE_FACE]+secondDice[DICE_FACE];
            vecMoves[DICE_DOUBLE_CHECK]=diceDouble;
            anotherTurn=false;
            isJailed=false;
            roll=false;
        }
        if (isJailed=false)
        {
            anotherTurn=true;
        }
    break;
    }
    return anotherTurn;
}
*/

void rollDice(short vecMoves[DICE_MOVES], short vecChecks[CHECKS], bool& anotherTurn)
{
    while (roll==true)
    {
        srand(time(0));
        firstDice=5;//(rand()%6)+1;
        secondDice=5;//(rand()%6)+1;
        if (firstDice==secondDice)
        {
            vecChecks[DOUBLE_CHECK]+=1;
            if (vecChecks[DOUBLE_CHECK]<3)
            {
                anotherTurn=true;
                vecMoves[DICE_MOVES]=firstDice+secondDice;
            }
            else if (vecChecks[DOUBLE_CHECK]>=3)
            {
                anotherTurn=false;
                vecMoves[DICE_MOVES]=0;
            }
        }
        else if (firstDice!=secondDice)
        {
            anotherTurn=false;
            vecMoves[DICE_MOVES]=firstDice+secondDice;
        }
        break;
    }
}

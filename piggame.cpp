// The Game of Pig.
// File: piggame.cpp
//       Implementation of PigGame, a class to play a game of Pig.


#include "dice.h"
#include "piggame.h"
#include "player.h"
#include "humanplayer.h"
#include "computerplayer.h"

#include <iostream>

PigGame::PigGame() { }

PigGame::PigGame(Player* x, Player* y)
{
    p1 = x;
    p2 = y;
}

Player* PigGame::play()
{
    Dice coin(2);

    int coinFlip = coin.roll();
    int humanCall = coin.roll();

    if(humanCall == coinFlip)
    {
        std::cout << p1->get_name();
        std::cout << " Won The Toss, And ";
        std::cout << p2->get_name();
        std::cout << " Goes Second.";

        std::cout << std::endl;
        std::cout << std::endl;

        do
        {
            //human player takes turn
            p1->take_turn(d);
            
            //computer player takes turn
            if(p1->get_points() < MAX)
                p2->take_turn(d);
            
        } while((p1->get_points() < MAX) && (p2->get_points() < MAX));
        
        //returns the winner class object
        if ((p1->get_points() > MAX) && (p2->get_points() < MAX))
            return p1;
        else 
            return p2;
    }
    else
    {
        std::cout << p1->get_name();
        std::cout << " Lost The Toss, And ";
        std::cout << p2->get_name();
        std::cout << " Goes First.";

        std::cout << std::endl;
        std::cout << std::endl;

        do
        {
            //computer player take turn
            p2->take_turn(d);
            
            //human player take turn
            if(p2->get_points() < MAX)
                p1->take_turn(d);
            
        } while((p2->get_points() < MAX) && (p1->get_points() < MAX));
        
        //returns the winner class object
        if (p2->get_points() > MAX)
            return p2;
        else 
            return p1;

        return p2;
    }

}





// The Game of Pig.
// File: humanplayer.cpp
//       Implementation of HumanPlayer, a dervied class for a human player 
//       in the game of Pig.

#include "dice.h"
#include "humanplayer.h"

#include <iostream>


HumanPlayer::HumanPlayer(): Player() { }

HumanPlayer::HumanPlayer(std::string h_name): Player(h_name) { }

void HumanPlayer::take_turn(Dice &d)
{

    const int WIN = 100;
    
    unsigned int newPoints = 0;
    unsigned int points = 0;
    
    int i = 1;
    
    char rollAgain;

    std::cout << std::endl;
    std::cout << get_name() << ": it's your turn." << std::endl;
    std::cout << "*** You Have " << get_points() <<" Points ***\n";

    do
    {
        points = d.roll();

        std::cout << std::endl;
        std::cout << "Roll Number " << i << ": You rolled a: " << points;
        std::cout << std::endl;
        
        //if the the random number is !1 then it will add the points
        if(points != 1)
        {
            newPoints += points;
            
            if((get_points() + newPoints) < WIN)
            {
                std::cout << "Do You Want To Roll Again? y/n: ";
                std::cin >> rollAgain;
                i++;
            }

        }
        else
        {
            newPoints = 0;
            
            //if dice rolls 1 then it will tell no points added
            std::cout << "Sorry your turn is over." << std::endl;
            std::cout << "-----------------------------------------\n";
            std::cout << "\tTurn results for " << get_name() << ": \n";
            std::cout << "\tROLLED A: " << points << ", NO POINTS ADDED.\n";
            std::cout << "-----------------------------------------\n";
        }

        
    }while((points != 1)&&((get_points()+newPoints) < WIN)&&(rollAgain=='y'));

    //if the the player says 'n' then it will show the point summary
    if(((get_points()+newPoints) < WIN) && (points != 1))
    {
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << "\tTurn Results For " << get_name() << ": \n";
        std::cout << "\tAdded " << newPoints << " Points." << std::endl;
    
        set_points(newPoints);
    
        std::cout << "\tNew Point Total: " << get_points() << std::endl;
        std::cout << "-----------------------------------------" << std::endl;
    }
    else if(((get_points()+newPoints) >= WIN) && (points != 1))
        set_points(newPoints);

    return;
}


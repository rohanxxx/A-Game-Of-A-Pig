// The Game of Pig.
// File: computerplayer.cpp
//       Implementation of ComputerPlayer, a dervied class for the 
//       computer to play the game of Pig.


#include "dice.h"
#include "computerplayer.h"

#include <iostream>

ComputerPlayer::ComputerPlayer(): Player() { }

ComputerPlayer::ComputerPlayer(std::string c_name): Player(c_name) { }

void ComputerPlayer::take_turn(Dice &d)
{
    unsigned int newPoints = 0;
    unsigned int points = 0;

    int i = 1;

    const int MAX_TURN = 3;
    const int WIN = 100;

    std::cout << std::endl;
    std::cout << get_name() << ": it's your turn." << std::endl;
    std::cout << "*** You Have " << get_points() <<" Points ***\n";

    do
    {
        points = d.roll();

        std::cout << std::endl;
        std::cout << "Roll Number " << i << ": You rolled a: " << points;
        std::cout << std::endl;

        if(points != 1)
        {
            newPoints += points;   
            i++;
        }
        else
        {
            newPoints = 0;
            
            //if computer player rolls 1 it shows no points added
            std::cout << "Sorry your turn is over." << std::endl;
            std::cout << "-----------------------------------------\n";
            std::cout << "\tTurn results for " << get_name() << ": \n";
            std::cout << "\tROLLED A: " << points << ", NO POINTS ADDED.\n";
            std::cout << "-----------------------------------------\n";

        }


    }while((points != 1) && ((get_points()+newPoints)<WIN) && (i<=MAX_TURN));

    //shows the turn point summary and displays the new total
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




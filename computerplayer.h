// CISC 2000   Fordham University
// Instructor: Vincent Mierlak
// Name: Md Fazle Rabbi
// Header file computerplayer.h.
// 
// A derived class for a computer player in the game of Pig.

#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

#include "dice.h"
#include "player.h"


class ComputerPlayer : public Player
{
    public:

        //default constructor
        ComputerPlayer();
        //virtual destructor
        virtual ~ComputerPlayer() { }
        //overloaded constructor
        ComputerPlayer(std::string c_name);
        //virtual function for take_turn
        virtual void take_turn(Dice &d);

};

#endif // COMPUTERPLAYER_H

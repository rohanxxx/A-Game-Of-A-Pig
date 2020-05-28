// Header file humanplayer.h.
// 
// A derived class for a human player in the game of Pig.

#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "player.h"
#include "dice.h"
#include <cmath>


class HumanPlayer : public Player
{
    public:

        // default constructors
        HumanPlayer();
        
        // virtual destructors
        virtual ~HumanPlayer() { }
        
        //overloaded constructors
        HumanPlayer(std::string h_name);

        // virtual function take turns
        virtual void take_turn(Dice &d);

};

#endif //HUMANPLAYER_H

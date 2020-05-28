// CISC 2000   Fordham University
// Instructor: Vincent Mierlak
// 
// Name: Md Fazle Rabbi
// Header file player.h.
// 
// A base class for a player in the game of Pig.

#ifndef PLAYER_H
#define PLAYER_H

#include "dice.h"
#include <string>
#include <iostream>

class Player
{
 public:
     //default constructor
     Player();
     
     //virtual destructor
     virtual ~Player() { }

     //overloaded constructor
     Player(std::string name);

     //gets name
     std::string get_name() const;
     
     //gets point
     int get_points() const;

     //set points    
     void set_points(int newPoints);

     //virtual function take turns   
     virtual void take_turn(Dice &d);

     //ostream operator overloading   
     friend std::ostream& operator<< (std::ostream &os , const Player &x);

 private:
        
     std::string playerName;
     int total_points;

};

#endif //PLAYER_H

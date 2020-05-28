// CISC 2000   Fordham University
// Instructor: Vincent Mierlak
//
// Name: Md Fazle Rabbi
//
// Header file piggame.h.
// 
// A class to play the game of Pig.

#ifndef PIGGAME_H
#define PIGGAME_H

#include "dice.h"
#include "player.h"
#include "humanplayer.h"
#include "computerplayer.h"

class PigGame
{

 public:
      
     //default constructor
     PigGame();
     //overloaded constructor
     PigGame(Player* x, Player* y);
     //play function plays the game
     Player* play();

 private:
        
      Player* p1;
      Player* p2;
      Dice d;
      const  int MAX = 100;

};

#endif // PIGGAME_H

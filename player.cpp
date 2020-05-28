// CISC 2000  Fordham University  Spring 2020
// Instructor: Vincent Mierlak
// Name: Md Fazle Rabbi
// HW 9: The Game of Pig.
// File: player.cpp
//       Implementation of Player, a base class for a player 
//       in the game of Pig.


#include <iostream>
#include <cstdio>
#include "player.h"
#include "dice.h"

Player::Player()
{
    playerName = "No name";
    total_points = 0;
}

Player::Player(std::string name)
{
    playerName = name;
    total_points = 0;
}

std::string Player::get_name() const
{
    return playerName;
}

int Player::get_points() const
{
    return total_points;
}

void Player::set_points(int newPoints)
{
    total_points = total_points + newPoints;
}

void Player::take_turn(Dice &d)
{
    std::cout << "It's the wrong version of take_turn()\n";
}

std::ostream& operator<< (std::ostream &os, const Player &x)
{
    os << x.get_name();
    return os;
}





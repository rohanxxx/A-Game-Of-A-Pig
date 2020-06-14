* A Game Of A Pig:

-> Game Description: Pig is a two player game played with a single 6-sided
die. The object of the game is to accumulate 100 points. A coin flip
determines which player goes first. During each turn, a player repeatedly
rolls the die, earning points equal to face value of each roll, until.
    * The player rolls a 1, in which case the player loses all points earned
      on that turn; or
    * The player decides to hold, adding all the points earned on the turn to
      the player's total.
At the end of a turn, the player hands over the die to the opponent. The
player to accumulate 100 points first wins.

It is a console-driven application that allows a human player to play the game
of Pig against a computer player. The computer player's game strategy is
always hold after 3 rolls.

-> Implementation Requirements:

    - Implement solution to seperate file interface (*.h) files and
      implementation (*.cpp) files.
    - Compile and test your program on erdos.
    - Create Dice class that represents n-sided die. The default number of
      sides is 6; minimum number of sides is 2.
    - Create a Player as your base class. At a minimum, a player will have a
      name and total_points. The Player class should have a virtual function
      for taking a turn. Which you would call whenever it is a Player's turn.
    - Create HumanPlayer a class derived form Player to represent a human
      player. You must implement the virtual funciton for taking a turn.
    - Create ComputerPlayer a class derived from Player to represent the
      computer player. You must implement a virtual function to take turns for
      the computer player.
    - Create PigGame class to play the game of Pig. This class will have, at a
      minimum, two pointer variables that are of type Player* and one member
      funciton, play(), which when called on a PigGame object will play one
      game of Pig. As with any game, there will be only one winner. In your
      implementation of the member function play(), you must use polymorphism.
      Remember either the human player or computer player can go first.
    - Implement the application program for the game of Pig is in main.cpp,
      which is written to play one game of pig with a human player pitted
      against the computer player.


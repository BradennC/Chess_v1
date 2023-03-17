#include <iostream>
#include <cstdlib>

#include "Game.h"

void Game::setBoard() {
    printBoard();
};

void Game::printBoard()
{
    for (int row = 0; row < 8; row++)
    {   
        std::cout << row + 1 << "|";

        for (int col = 0; col < 8; col++)
        {
            if (row == 0)
            {
                std::cout << static_cast<char>('A' + col ) << "|";
            }
            if (row == 7)
            {
                std::cout << static_cast<char>('A' + col ) << "|";
            }
            if (row > 0 && row < 7) 
            {
                std:: cout << " |";
            }
        }
        std::cout << std::endl;
    }
}
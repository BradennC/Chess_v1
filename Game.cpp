#include <iostream>
#include <cstdlib>

#include "Game.h"

void Game::setBoard() {
    printBoard();
};

void Game::printBoard()
{
    for (int row = 0; row < 10; row++)
    {   
        if (row >= 1 && row <=8){
            std::cout << row << "|";
        }
        else {
            std::cout << "  ";
        }

        for (int col = 0; col < 8; col++)
        {
            if (row == 0 || row ==9)
            {
                std::cout << static_cast<char>('A' + col ) << " ";
            }
            if (row > 0 && row < 9) 
            {
                std:: cout << " |";
            }
        }

        if (row >= 1 && row <=8){
            std::cout << row;
        }
        else {
            std::cout << "  ";
        }

        std::cout << std::endl;
    }
}
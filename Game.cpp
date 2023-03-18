#include <iostream>
#include <cstdlib>

#include "Game.h"

void Game::setBoard() {
    printBoard();
};

void Game::printBoard()
{
    bool odds = false;

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
                std::cout << static_cast<char>('A' + col ) << "  ";
            }
            if (row > 0 && row < 9) 
            {
                if (odds)
                {
                    if (col % 2 != 0)
                    {
                        std:: cout << "\u001b[40m  \u001b[0m|";
                    } else
                    {
                        std:: cout << "\u001b[47;1m  \u001b[0m|";
                    }
                    
                }
                else {
                    if (col % 2 == 0)
                    {
                        std:: cout << "\u001b[40m  \u001b[0m|";
                    } else
                    {
                        std:: cout << "\u001b[47;1m  \u001b[0m|";
                    }
                }
                
            }
        }

        if (row >= 1 && row <=8){
            std::cout << row;
        }
        else {
            std::cout << "  ";
        }

        std::cout << std::endl;

        odds = !odds;
    }

    std::cout << "\u2655" << std::endl;
}
#include "Square.h"

Square::Square(int row, int col, std::string colour) 
{   
    this->row = row;
    this->col = col;
    this->colour = colour;
    this->isOccupied = false;
}


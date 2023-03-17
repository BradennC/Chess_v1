#ifndef CHESSGAME_SQUARE
#define CHESSGAME_SQUARE

#include <string>

class Square {
    public:
        //constructor
        Square(int row, int col, std::string colour);

        //Deconstructor
        ~Square();

        //setPiece will set the piece that is on the square
        void setPiece();

        //removePiece will reset the square to not be occupied
        void removePiece();

    private:
        //col of suqare
        std::string colour;
        //co-ords of square
        int row, col;
        //squareOccupiedTracker
        bool isOccupied;
        //TO-DO add pice here when there
};

#endif // CHESSGAME_SQUARE
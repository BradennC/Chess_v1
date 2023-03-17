#ifndef CHESSGAME_main
#define CHESSGAME_main

#define EXIT_SUCESS 0;

#include "Game.h"
#include "Square.h"

int main(void) {

    Game* engine = new Game();

    engine->setBoard();

    return EXIT_SUCESS;
}

#endif //CHESSGAME_main
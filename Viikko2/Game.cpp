#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"

Game::Game(int maxNum)
{
    maxNumber = maxNum;
    std::cout << "GAME CONSTRUCTOR: Peli luotu maksimi arvon kanssa " << maxNumber << std::endl;
    numOfGuesses = 0;
}

Game::~Game()
{
    std::cout << "GAME CONSTRUCTOR: Peli Tuhottu\n";
}

void Game::play()
{
    std::cout << "GAME CONSTRUCTOR: Peli kaynissa\n";
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;

    while(true)
    {
        std::cout << "Arvaa numero 1-" << maxNumber << " valilla: ";
        std::cin >> playerGuess;
        numOfGuesses++;

        if(playerGuess < randomNumber)
        {
            std::cout << "Luku on suurempi!\n";
        }
        else if (playerGuess > randomNumber)
        {
            std::cout << "Luku on pienempi!\n";
        }
        else
        {
            printGameResult();
            break;
        }
    }
}

void Game::printGameResult()
{
    std::cout << "GAME CONSTRUCTOR: Tulostuksessa\n";
    std::cout << "Arvasit oikein!\n";
    std::cout << "Arvausten lukumaara: " << numOfGuesses << std::endl;

}

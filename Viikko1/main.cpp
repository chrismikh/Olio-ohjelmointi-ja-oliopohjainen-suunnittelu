#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxNum)
{
    int guessNum;
    int howManyGuesses = 0;

    // 1-20 random num
    int randomNum = rand() % maxNum + 1;

    while(true)
    {
        std::cout << "Arvaa numero: ";
        std::cin >> guessNum;

        if(guessNum < randomNum)
        {
            std::cout << "Luku on suurempi!\n";
            howManyGuesses++;
        }
        else if (guessNum > randomNum)
        {
            std::cout << "Luku on pienempi!\n";
            howManyGuesses++;
        }
        else
        {
            std::cout << "Arvasit oikein!\n";
            howManyGuesses++;
            break;
        }
    }
    return howManyGuesses;
}

int main() {
    // random every program run
    srand(time(0));

    int guesses = game(40);
    std::cout << "Arvausten lukumaara: " << guesses;

    return 0;
}


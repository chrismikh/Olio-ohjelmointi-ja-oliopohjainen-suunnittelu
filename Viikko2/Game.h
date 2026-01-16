#ifndef GAME_H
#define GAME_H

class Game
{
    private:
    int maxNumber = 0;
    int playerGuess;
    int randomNumber = 0;
    int numOfGuesses = 0;

    public:
    Game(int);
    ~Game();
    void play();
    void printGameResult();

};

#endif // GAME_H

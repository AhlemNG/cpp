#include "game.h"

using namespace std;
bool playGame(int guesses)
{
    cout << "Playing Game...\n";
    int guessCount = 0;
    srand(time(NULL));
    int correct;
    if (guesses == 1)
    {
        correct == rand() % 200;
    }
    else
    {
        correct = rand() % 20;
    }
    while(guessCount < guesses)
    {
        cout << "Gess a number...\n";
        cout << "you get " << guesses - guessCount << " gesses.\n";
        int guess;
        cin >> guess;
        if (guess == correct)
        {
            return (true);
        }
        else if (guess < correct)
        {
            cout << "too low mate\n";
        }
        else
        {
            cout << "too high mate\n";
        }
        guessCount++;
    }
    return (false);
}
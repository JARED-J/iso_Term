
#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();
void PlayGame();
bool AskToPlayAgain();

// entry point for application
int main() {
    PrintIntro();
    PlayGame();
    AskToPlayAgain();
    return 0;
}

void PrintIntro() {
    // introduce the game
    constexpr int WORD_LENGTH = 9;
    cout << "Welcome to Bulls and Cows, a fun word game.\n";
    cout << "Can you guess the "<<WORD_LENGTH;
    cout << " letter isogram I'm thinking of?\n";
    cout << endl;
    return;
}

string GetGuess() {
    // get a guess from the player
    cout << "Enter your guess: ";
    string Guess = "";
    getline(cin, Guess);
    return Guess;
}

void PlayGame() {
    // loop for the amount of guesses a player gets
    constexpr int NUMBER_OF_TURNS = 5;
    for (int count = 0; count < NUMBER_OF_TURNS; count++) {
        string Guess = GetGuess();
        cout << "Your Guess was: "<< Guess << endl;
        cout << endl;
    }
}

bool AskToPlayAgain(){
    cout << "Do you want to play again?: ";
    string Response = "";
    getline(cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
}

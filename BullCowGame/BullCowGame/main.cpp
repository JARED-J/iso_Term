
#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

// using Ftext namespace for unreal engine conventions
using Ftext = std::string;
// using int32 for cross-platform compatability within unreal engine
using int32 = int;

void PrintIntro();
Ftext GetGuess();
void PlayGame();
bool AskToPlayAgain();
FBullCowGame BCGame; //Instantiate a new game

// entry point for application
int main() {
    bool bPlayAgain = false;
    do {
        PrintIntro();
        PlayGame();
        // TODO: add game summary
        bPlayAgain = AskToPlayAgain();
    } while (bPlayAgain);
    
    return 0;
}

void PrintIntro() {
    // introduce the game
    constexpr int32 WORD_LENGTH = 9;
    std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
    std::cout << "Can you guess the "<<WORD_LENGTH;
    std::cout << " letter isogram I'm thinking of?\n";
    std::cout << std::endl;
    return;
}

Ftext GetGuess() {
    int32 CurrentTry = BCGame.GetCurrentTry();
    
    // get a guess from the player
    std::cout << "Try" << CurrentTry << "Enter your guess: ";
    Ftext Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

void PlayGame() {
    int32 MaxTries = BCGame.GetMaxTries();
    std::cout << MaxTries << std::endl;
    
    // loop for the amount of guesses a player gets
    // TODO make the for a while loop with more validations
    for (int32 count = 0; count < MaxTries; count++) {
        Ftext Guess = GetGuess(); // TODO make loop checking valid
        std::cout << "Your Guess was: "<< Guess << std::endl;
        std::cout << std::endl;
    }
}

bool AskToPlayAgain(){
    std::cout << "Do you want to play again?:(y/n) ";
    Ftext Response = "";
    getline(std::cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
}

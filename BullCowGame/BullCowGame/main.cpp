
#include <iostream>
#include <string>

void PrintIntro();
std::string GetGuess();
void PlayGame();
bool AskToPlayAgain();

// entry point for application
int main() {
    bool bPlayAgain = false;
    do {
        PrintIntro();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
    } while (bPlayAgain);
    
    return 0;
}

void PrintIntro() {
    // introduce the game
    constexpr int WORD_LENGTH = 9;
    std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
    std::cout << "Can you guess the "<<WORD_LENGTH;
    std::cout << " letter isogram I'm thinking of?\n";
    std::cout << std::endl;
    return;
}

std::string GetGuess() {
    // get a guess from the player
    std::cout << "Enter your guess: ";
    std::string Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

void PlayGame() {
    // loop for the amount of guesses a player gets
    constexpr int NUMBER_OF_TURNS = 5;
    for (int count = 0; count < NUMBER_OF_TURNS; count++) {
        std::string Guess = GetGuess();
        std::cout << "Your Guess was: "<< Guess << std::endl;
        std::cout << std::endl;
    }
}

bool AskToPlayAgain(){
    std::cout << "Do you want to play again?:(y/n) ";
    std::string Response = "";
    getline(std::cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
}

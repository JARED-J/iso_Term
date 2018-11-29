//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Jared  Jackson on 8/10/18.
//  Copyright © 2018 Jared  Jackson. All rights reserved.
//

#include "FBullCowGame.hpp"
using FString = std::string;
using int32 = int;

FBullCowGame::FBullCowGame() {Reset();}
int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
int32 FBullCowGame::GetHiddenWordLength() const {return MyHiddenWord.length();}

void FBullCowGame::Reset() {
    constexpr int32 MAX_TRIES = 5;
    MyCurrentTry = 1;
    const FString HIDDEN_WORD = "and";
    MyHiddenWord = HIDDEN_WORD;
    MyMaxTries = MAX_TRIES;
    return;
}

bool FBullCowGame::IsGameWon() const {
    return true;
}

bool FBullCowGame::CheckGuessValidity (FString) {
    return true;
}

FBullCowCount FBullCowGame::SubmitGuess(FString Guess) {
    // increment turn number
    MyCurrentTry++;
    
    // setup return structure
    
    FBullCowCount FBullCowCount;
    
    // loop through hidden word and
    int32 HiddenWordLength = MyHiddenWord.length();
    for (int32 i = 0; i < HiddenWordLength; i++) {
        for (int32 j = 0; j < HiddenWordLength; j++) {
            if (MyHiddenWord[i] == Guess[j]) {
                if (i == j) {
                    FBullCowCount.Bulls++;
                } else {
                    FBullCowCount.Cows++;
                };
            }
        };
    };
    
    return FBullCowCount;
}

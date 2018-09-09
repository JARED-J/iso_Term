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

FBullCowGame::FBullCowGame() {
    Reset();
}

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset() {
    constexpr int32 MAX_TRIES = 5;
    MyCurrentTry = 1;
    MyMaxTries = MAX_TRIES;
    return;
}

bool FBullCowGame::IsGameWon() const {
    return true;
}

bool FBullCowGame::CheckGuessValidity(FString) {
    return true;
}

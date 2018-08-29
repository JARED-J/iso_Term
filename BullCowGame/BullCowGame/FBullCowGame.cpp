//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Jared  Jackson on 8/10/18.
//  Copyright © 2018 Jared  Jackson. All rights reserved.
//

#include "FBullCowGame.hpp"

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset() {
    return;
}

bool FBullCowGame::IsGameWon() const {
    return true;
}

bool FBullCowGame::CheckGuessValidity(std::string) {
    return true;
}

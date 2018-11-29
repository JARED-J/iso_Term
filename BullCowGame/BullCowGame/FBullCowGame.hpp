//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Jared  Jackson on 8/10/18.
//  Copyright © 2018 Jared  Jackson. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>

using FString = std::string;
using int32 = int;

#endif /* FBullCowGame_hpp */

struct FBullCowCount {
    int32 Bulls = 0;
    int32 Cows = 0;
};

class FBullCowGame {
public:
    FBullCowGame(); // constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    int32 GetHiddenWordLength() const;
    bool IsGameWon() const;
    bool CheckGuessValidity(FString);
    
    void Reset();
    FBullCowCount SubmitGuess(FString Guess);

private:
    int32 MyCurrentTry;
    int32 MyMaxTries;
    FString MyHiddenWord;
};

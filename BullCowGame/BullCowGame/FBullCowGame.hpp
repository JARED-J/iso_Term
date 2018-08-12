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

#endif /* FBullCowGame_hpp */

class FBullCowGame {
public:
    void Reset();  // TODO make a more rich return value
    int GetMaxTries();
    int GetCurrentTry();
    bool IsGameWon();
    bool CheckGuessValidity(std::string);
    
    
// Ignore this part of interface
private:
    int MyCurrentTry;
    int MyMaxTries;
    
};

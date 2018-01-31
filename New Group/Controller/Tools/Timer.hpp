//
//  Timer.hpp
//  DataStructuresProject
//
//  Created by Bevan, Tyler on 1/31/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <iostream>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
};

#endif /* Timer_hpp */

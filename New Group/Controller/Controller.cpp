//
//  Controller.cpp
//  DataStructuresProject
//
//  Created by Bevan, Tyler on 1/31/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    cout << "Testing the TimeClass" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "print something to the screen!" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
    codeTimer.resetTimer();
    
    codeTimer.startTimer();
    for(int i = 0; i < 100; i++)
    {
        cout << "index is at " << i << "\t";
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}

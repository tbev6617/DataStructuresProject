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
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/tbev6617/Documents/Data Structures/DataStructuresProject/New Group/Data/crime.csv");
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    findMaxAndMin();
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    cout << "Testing findMaxAndMin" << endl;
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/tbev6617/Documents/Data Structures/DataStructuresProject/New Group/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
        if(myData[index] > myData[maxIndex])
        {
            maxIndex = index;
        }
        else if(myData[index] < myData[minIndex])
        {
            minIndex = index;
        }
    }
    cout << "The largest crime stat is at " << maxIndex << " - " << myData[maxIndex] << endl;
    cout << "And the smallest crime stat is at " << minIndex << " - " << myData[minIndex] << endl;
    searchTimer.stopTimer();
    searchTimer.displayInformation();
}



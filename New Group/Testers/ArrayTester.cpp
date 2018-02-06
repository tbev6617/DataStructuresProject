//
//  ArrayTester.cpp
//  DataStructuresProject
//
//  Created by Bevan, Tyler on 2/6/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "ArrayTester.hpp"

using namespace std;

void ArrayTester :: testArray()
{
    Array<int> firstArray(10);
    
    for (int i = 0; i < 10; i++)
    {
        firstArray.setAtIndex(i, i);
    }
    
    for (int i = 0; i < firstArray.getSize(); i++)
    {
        cout << firstArray[index] << endl;
    }
}
void ArrayTester :: testAdvancedArray()
{
    
}


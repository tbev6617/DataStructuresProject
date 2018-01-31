//
//  FileController.cpp
//  DataStructuresProject
//
//  Created by Bevan, Tyler on 1/31/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string fileName)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path
    if (dataFile.is_open())
    {
        //eof means end of file
        while (!dataFile.eof())
        {
            getLine(dataFile, currentCSVLine, '\r');
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line
                if(currentCSVLne.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
                
            }
            rowCount++;
        }
        datafile.close();
    }
    else()
    {
        cerr << "NO FILE" ,, endl;
    }
    
    return crimeVector
}





//Homework 18

/*
 *  Filename:           main.cpp
 * 
 *  Purpose:            The purpose of this program is to read an input
 *                      text file, and write to an output text file. The
 *                      program will allow the user to view statistics of
 *                      an NFL player, as well as manually search for 
 *                      statistics of any player.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               1/31/2017 15:34 PST
 */

#include "updateData.h"
#include "updatePlayer.h"

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>


//Namespace
using namespace std;

//Const int for array size
extern const int N;

//--------------------------------------------------------------------------//

//Main Function
//Inputs:   None
//Outputs:  None
//Purpose:  Execute program with supplied functions

int main(int argc, char** argv) {
    //Declare array of structures (footballPlayerType)
    footBallPlayerType player[N];
    //Variables for switch statement
    int input = 0;
    string inString;
    int inNum = 0;
    int inNum2 = 0;

    //Declare FileStream Variables
    ifstream inFile;
    ofstream outFile;

    //Open Files
    inFile.open("PackersData.txt");
    outFile.open("PackersOutput.txt");

    //Test if inFile is open
    if (!inFile.is_open()) {
        //If not, output error message and terminate program.
        cout << "Data file not found. Program terminating." << endl;
        exit(EXIT_FAILURE);
    }

    //Test if outFile is open
    if (!outFile.is_open()) {
        //If not, output error message and terminate program
        cout << "Data file not found. Program terminating." << endl;
        exit(EXIT_FAILURE);
    }
    
    //Call get Data function to load data from text file
    getData(inFile, player);

    //Switch statement to select menu option
    while (input != 99) 
    {
        //Display menu with various commands, prompt user for input
        showMenu();
        cin >> input;
        switch (input) 
        {
            case 1:
                //Call function to print player data
                printData(player);
                break;

            case 2:
                //Prompt user for name
                cout << "Enter player's name: " << endl;
                cin >> inString;
                //Search for player with matching  name
                //Return array index
                inNum = searchData(player, inString);
                //If no match, invalid player
                if (inNum == 100) 
                {
                    cout << "Invalid Player Number" << endl;
                }
                //Else, print player data
                else
                {
                    printPlayerData(player, inNum);
                }
                break;
            case 3:
                cout << "Enter player's name: " << endl << endl;
                cin >> inString;
                //Search for player with matching  name
                //Return array index
                inNum = searchData(player, inString);
                //If no match, invalid player
                cout << "Enter number of touchdowns added: " << endl;
                cin >> inNum2;
                if (inNum == 100) 
                {
                    cout << "Invalid Player Number" << endl;
                } 
                //Else, update touchdowns
                else 
                {
                    updateTouchDowns(player, inNum2, inNum);
                }
                break;

            case 4:
                cout << "Enter player's name: " << endl << endl;
                cin >> inString;
                //Search for player with matching  name
                //Return array index
                inNum = searchData(player, inString);
                //If no match, invalid player
                cout << "Enter number of catches added: ";
                cin >> inNum2;
                if (inNum == 100)
                {
                    cout << "Invalid Player Number" << endl;
                } 
                //Else, update catches
                else 
                {
                    updateCatches(player, inNum2, inNum);
                }
                break;

            case 5:
                cout << "Enter player's name: ";
                cin >> inString;
                //Search for player with matching  name
                //Return array index
                inNum = searchData(player, inString);
                //If no match, invalid player
                cout << "Enter number of passing yards added: ";
                cin >> inNum2;
                if (inNum == 100) 
                {
                    cout << "Invalid Player Number" << endl;
                } 
                //Else, update Passing Yards
                else
                {
                    updatePassingYards(player, inNum2, inNum);
                }
                break;


            case 6:
                cout << "Enter player's name: " << endl << endl;
                cin >> inString;
                //Search for player with matching  name
                //Return array index
                inNum = searchData(player, inString);
                //If no match, invalid player
                cout << "Enter number of receiving yards added: ";
                cin >> inNum2;
                if (inNum == 100) 
                {
                    cout << "Invalid Player Number" << endl;
                } 
                //Else, update Receiving Yards
                else
                {
                    updateReceivingYards(player, inNum2, inNum);
                }
                break;

            case 7:
                cout << "Enter player's name: ";
                cin >> inString;
                //Search for player with matching  name
                //Return array index
                inNum = searchData(player, inString);
                //If no match, invalid player
                cout << "Enter number of rushing yards added: ";
                cin >> inNum2;
                if (inNum == 100) 
                {
                    cout << "Invalid Player Number" << endl;
                } 
                //Else, update Rushing Yards
                else
                {
                    updateRushingYards(player, inNum2, inNum);
                    cout << endl;
                }
                break;

            default:
                //Exit switch structure if no matching input
                break;
        }
    }
    //Prompt user to save data
    cout << "Would you like to save data (Y/N): ";
    cin >> inString;
    //Save Data to output file
    if (inString == "Y" || inString == "y")
    {
        saveData(outFile, player);
    }
    //Close inFile and outFile
    inFile.close();
    outFile.close();
    //Terminate program upon successful execution
    exit(EXIT_SUCCESS);
}
//--------------------------------------------------------------------------//
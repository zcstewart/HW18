/* 
 * File:   menu.h
 * Author: scooby
 *
 * Created on February 7, 2017, 7:23 AM
 */

#ifndef MENU_H
#define MENU_H

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//--------------------------------------------------------------------------//
//
//This header file is used as the "top level"


//Declaration to be used for other files within program
struct footBallPlayerType 
{
    string player_lastName; //Player Last Name
    string player_position; //Player Position
    int player_numTD; //Total Touchdowns
    int player_numRec; //Total Receptions
    int player_RushYd; //Total Rushing Yards
    int player_RecYd; //Total Receiving Yards
    int player_PassYd; //Total Passing Yards
};

//Declaration of global variable to be used in other programs
//Other programs will refer to it using "extern" identifier
const int N = 10;
//--------------------------------------------------------------------------//

// Display the menu
void showMenu();

// Get team data from the input file
void getData(ifstream &inputFile,
        footBallPlayerType list[N]);

// Save current team data to output file
void saveData(ofstream &outputFile,
        footBallPlayerType list[N]);

// Print entire team data to the screen
void printData(footBallPlayerType list[N]);

// Print a single playerâ€™s data to the screen
void printPlayerData(footBallPlayerType list[N],
        int playerNum);

//--------------------------------------------------------------------------//
#endif /* MENU_H */


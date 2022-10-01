/*
 */

#include "updateData.h"
#include <iomanip>

using namespace std;

// Display the menu
void showMenu() 
//Inputs:   None
//Output:   None, return type void
//Purpose:  Function outputs a menu to the user asking them to enter a 
//          number that correlates to a certain command. The list of these
//          commands will be displayed on the screen as well.

{
    {
        cout << "Select one of the following options." << endl;
        cout << "  (1)  Print the Team's Data" << endl;
        cout << "  (2)  Print a Player's Data" << endl;
        cout << "  (3)  Update a Player's Touchdowns" << endl;
        cout << "  (4)  Update a Player's Catches" << endl;
        cout << "  (5)  Update a Player's Passing Yards" << endl;
        cout << "  (6)  Update a Player's Receiving Yards" << endl;
        cout << "  (7)  Update a Player's Rushing Yards" << endl;
        cout << " (99)  Quit the Program" << endl;
        cout << "Input Selection: ";
    }
}


// Print entire team data to the screen
void printData(footBallPlayerType list[N]) 
{
//Inputs:   footBallPlayerType list[N]
//Outputs:  None, return type void
//Purpose:  The purpose of this function is to print out a full list
//          featuring the name, position, and relevant statistics of all
//          football players from a structure (of type footBallPlayerType)
//          to the output terminal
    
    //Print player data
    cout << "Name      Position Touchdowns Catches Passing";
    cout << " Receiving Rushing" << endl << endl;
    //Cycle through array
    for (int i = 0; i < N; i++)
    {
        cout << setw(10) << list[i].player_lastName;
        cout << setw(8) << list[i].player_position;
        cout << setw(11) << list[i].player_numTD;
        cout << setw(8) << list[i].player_numRec;
        cout << setw(8) << list[i].player_PassYd;
        cout << setw(10) << list[i].player_RecYd;
        cout << setw(8) << list[i].player_RushYd;
        cout << endl;
    }
    cout << endl << endl;
}

// Print a single playerâ€™s data to the screen
void printPlayerData(footBallPlayerType list[N], int playerNum)
{
//Inputs:   footBallPlayerType list[N]
//          int playerNum
//Outputs:  None, return type void
//Purpose:  The purpose of this function is to print the data of a
//          specific football player from a predetermined user input index
//          number. The function will print all the relevant data of that
//          player to the output terminal.
    
    cout << "Name = " << list[playerNum].player_lastName << endl;
    cout << "  Position = " << list[playerNum].player_position << endl;
    cout << "  Touchdowns = " << list[playerNum].player_numTD << endl;
    cout << "  Number of Catches = " << list[playerNum].player_numRec;
    cout << endl;
    cout << "  Passing Yards = " << list[playerNum].player_PassYd << endl;
    cout << "  Receiving Yards = " << list[playerNum].player_RecYd;
    cout << endl;
    cout << "  Rushing Yards = " << list[playerNum].player_RushYd << endl;
    cout << endl << endl;
}

// Get team data from the input file
void getData(ifstream &inputFile, footBallPlayerType list[N])
//Inputs:   ifstream &inputFile
//          footBallPlayertype list[N]
//Output:   None, return type void
//Purpose:  The purpose of this function is to cycle through an array of
//          Structures (of type footBallPlayerType), and read in values
//          to the data members of the structure from a predetermined
//          text file.

{
    //Cycle through array
    for (int i = 0; i < N; i++) 
    {
        //Read in player data
        inputFile >> list[i].player_lastName;
        inputFile >> list[i].player_position;
        inputFile >> list[i].player_numTD;
        inputFile >> list[i].player_numRec;
        inputFile >> list[i].player_PassYd;
        inputFile >> list[i].player_RecYd;
        inputFile >> list[i].player_RushYd;
    }
}

// Save current team data to output file
void saveData(ofstream &outputFile, footBallPlayerType list[N]) 
{
//Inputs:   ofstream &outputFile
//          footBallPlayerType list[N]
//Outputs:  None, return type void
//Purpose:  The purpose of this function is to write an array of structures
//          (of type footBallPlayerType) to a predetermined output text file.
    
    //Cycle through array
    for (int i = 0; i < N; i++) 
    {
        //Read out player data
        outputFile << list[i].player_lastName << " ";
        outputFile << list[i].player_position << " ";
        outputFile << list[i].player_numTD << " ";
        outputFile << list[i].player_numRec << " ";
        outputFile << list[i].player_PassYd << " ";
        outputFile << list[i].player_RecYd << " ";
        outputFile << list[i].player_RushYd << endl;
    }
}
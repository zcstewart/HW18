/*
 */

#include "updatePlayer.h"
#include "updateData.h"

using namespace std;

//Search the data for a player
int searchData(footBallPlayerType list[N], string n) 
{
//Inputs:   footBallPlayerType list[N]
//          string n
//Outputs:  Returns an integer value from variable "index"
//Purpose:  The purpose of this function is to cycle through an array of
//          structures of type footBallPlayerType and search for a member
//          of the array "player_lastName" and compare it to the input
//          string parameter "n". If they are identical, the index of that
//          particular structure is saved to index and returned. Otherwise
//          The original arbitrary index of 100 is returned. 
    
    //Set arbitrary index if player isn't found
    int index = 100;

    //Cycle through array
    for (int i = 0; i < N; i++) 
    {
        //Check if valid player number
        if (list[i].player_lastName.compare(n) == 0)
        {
            //Update found player index
            index = i;
        }
    }
    //Return Index
    return index;
}

//Update the number of touchdowns for a player
void updateTouchDowns(footBallPlayerType list[N], int tDowns, int playerNum)
//Inputs:   footBallPlayerType list[N]
//          int tDowns
//          int playerNum
//Outputs:  None, return type void
//Purpose:  The purpose of this function is to take in the index of a player
//          and add an amount of touchdowns to be added to the particular
//          players statistics. Both the index and amount of touchdowns are
//          parameter arguments of the function, in addition to the array
//          of structures (of type footBallPlayerType). The function will
//          verify the user index is correct (to avoid out of bounds errors
//          with arrays, then find the player with the specified index and
//          modify the total amount of touchdowns.

{
    //Check if valid player number
    if (playerNum >= 0 && playerNum < N)
    {
        //Add to sum
        list[playerNum].player_numTD += tDowns;
    }
}

// Update the number of catches for a player
void updateCatches(footBallPlayerType list[N], int catches, int playerNum)
//Inputs:   footBallPlayerType list[N]
//          int catches
//          int playerNum
//Outputs:  None, return type void
//Purpose:  The purpose of this function is to take in the index of a player
//          and add an amount of catches to be added to the particular
//          players statistics. Both the index and amount of catches are
//          parameter arguments of the function, in addition to the array
//          of structures (of type footBallPlayerType). The function will
//          verify the user index is correct (to avoid out of bounds errors
//          with arrays, then find the player with the specified index and
//          modify the total amount of catches.
{
    //Check if valid player number
    if (playerNum >= 0 && playerNum < N) 
    {
        //Add to sum
        list[playerNum].player_numRec += catches;
    }

}

// Update the number of passing yards for a player
void updatePassingYards(footBallPlayerType list[N], int passYards,
                        int playerNum) 
{
    //Inputs:   footBallPlayerType list[N]
//          int passYards
//          int playerNum
//Outputs:  None, return type void
//Purpose:  The purpose of this function is to take in the index of a player
//          and add an amount of pass yards to be added to the particular
//          players statistics. Both the index and amount of pass yards are
//          parameter arguments of the function, in addition to the array
//          of structures (of type footBallPlayerType). The function will
//          verify the user index is correct (to avoid out of bounds errors
//          with arrays, then find the player with the specified index and
//          modify the total amount of pass yards.
    //Check if valid player number
    if (playerNum >= 0 && playerNum < N) 
    {
        //Add to sum
        list[playerNum].player_PassYd += passYards;
    }
}

// Update the number of receiving yards for a player
void updateReceivingYards(footBallPlayerType list[N], int recYards,
        int playerNum) 
{
    //Inputs:   footBallPlayerType list[N]
//          int recYards
//          int playerNum
//Outputs:  None, return type void
//Purpose:  The purpose of this function is to take in the index of a 
//          player and add an amount of receiving yards to be added to the 
//          particular players statistics. Both the index and amount of 
//          receiving yards are parameter arguments of the function, in 
//          addition to the array of structures (of type footBallPlayerType).
//          The function will verify the user index is correct (to avoid 
//          out of bounds errors with arrays, then find the player with the
//          specified index and modify the total amount of receiving yards.
    
    //Check if valid player number
    if (playerNum >= 0 && playerNum < N) 
    {
        //Add to sum
        list[playerNum].player_RecYd += recYards;
    }
}

// Update the number of rushing yards for a player
void updateRushingYards(footBallPlayerType list[N], int rushYards,
        int playerNum) 
{
    //Inputs:   footBallPlayerType list[N]
//          int rushYards
//          int playerNum
//Outputs:  None, return type void
//Purpose:  The purpose of this function is to take in the index of a player
//          and add an amount of rush yards to be added to the particular
//          players statistics. Both the index and amount of rush yards are
//          parameter arguments of the function, in addition to the array
//          of structures (of type footBallPlayerType). The function will
//          verify the user index is correct (to avoid out of bounds errors
//          with arrays, then find the player with the specified index and
//          modify the total amount of rush yards.
    
    //Check if valid player number
    if (playerNum >= 0 && playerNum < N)
    {
        //Add to sum
        list[playerNum].player_RushYd += rushYards;
    }
}

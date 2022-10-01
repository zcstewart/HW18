/* 
 * File:   updatePlayer.h
 * Author: scooby
 *
 * Created on February 7, 2017, 7:40 AM
 */

#ifndef UPDATEPLAYER_H
#define UPDATEPLAYER_H

#include"updateData.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// Search the data for a player
int searchData(footBallPlayerType list[N], string n);

// Update the number of touchdowns for a player
void updateTouchDowns(footBallPlayerType list[N],
        int tDowns, int playerNum);

// Update the number of catches for a player
void updateCatches(footBallPlayerType list[N], int catches,
        int playerNum);

// Update the number of passing yards for a player
void updatePassingYards(footBallPlayerType list[N],
        int passYards, int playerNum);

// Update the number of receiving yards for a player
void updateReceivingYards(footBallPlayerType list[N],
        int recYards, int playerNum);

// Update the number of rushing yards for a player
void updateRushingYards(footBallPlayerType list[N],
        int rushYards, int playerNum);

#endif /* UPDATEPLAYER_H */


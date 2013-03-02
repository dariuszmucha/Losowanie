#include "StdAfx.h"
#include "DrawClass.h"
#include <stdlib.h>


DrawClass::DrawClass(void)
{
	drawnPlayers = new int[MAX_PLAYER_NUMBER+1];
	for(int i = 0; i < MAX_PLAYER_NUMBER+1; i++)
	{
		drawnPlayers[i] = 0;
	}
	playersNumber = 0;
	playerListElement = 0;

}

DrawClass::~DrawClass()
{
	delete [] drawnPlayers;
}

void DrawClass::setPlayersNumber(int count)
{
	playersNumber = count;
}

int DrawClass::getPlayersNumber( )
{
	return playersNumber;
}

int DrawClass::drawPlayer1( )
{
	int player;
	do
	{
		player = myRandom.Next(1,playersNumber+1);
	} while(drawnPlayers[player]);
	return player;
}

int DrawClass::drawPlayer2( )
{
	int player;

	do
	{
		player = myRandom.Next(1,playersNumber+1);
	} while(drawnPlayers[player]);

	return player;
}

void DrawClass::clearDrawMemory( )
{
	for(int i = 0; i < MAX_PLAYER_NUMBER+1; i++)
	{
		drawnPlayers[i] = 0;
	}
	playerListElement = 0;
}



void DrawClass::addPlayers(int source, int value)
{
	drawnPlayers[value] = 1;
	playerListElement++;
	
}

bool DrawClass::isPossibleToDraw()
{
	int possibleDraws = playersNumber%2 ? playersNumber-1 : playersNumber;
	if(playerListElement < possibleDraws)
	{
		return true;
	}
	else
	{
		return false;
	}
}

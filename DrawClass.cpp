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

int DrawClass::setPlayersMinNumber(int min)
{
	if(min < playersNumber)
	{
		playersNumberMin = min;
		return 0;
	}
	return playersNumberMin;
}

int DrawClass::setPlayersMaxNumber(int max)
{
	if(max > playersNumberMin)
	{
		playersNumber = max;
		return 0;
	}
	return playersNumber;
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
		player = myRandom.Next(playersNumberMin,playersNumber+1);
	} while(drawnPlayers[player]);
	return player;
}

int DrawClass::drawPlayer2( )
{
	int player;

	do
	{
		player = myRandom.Next(playersNumberMin,playersNumber+1);
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
	int possibleDraws = playersNumber - playersNumberMin;
	if(playerListElement <= possibleDraws)
	{
		return true;
	}
	else
	{
		return false;
	}
}

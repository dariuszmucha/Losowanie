#pragma once

#include <random>
using namespace std;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::ComponentModel;

#define PLAYER_A_TAB 0
#define PLAYER_B_TAB 1
#define MAX_PLAYER_NUMBER 200

class PlayerList
{
public:
	int a;
	int b;
};

ref class DrawClass
{
private:
	int playersNumber;
	Random myRandom;
	int *drawnPlayers;
	int playerListElement;
public:
	
	DrawClass(void);
	~DrawClass();
	void setPlayersNumber(int count);
	int getPlayersNumber( );
	int drawPlayer1( );
	int drawPlayer2( );
	void addPlayers(int source, int value);
	void clearDrawMemory( );
	bool isPossibleToDraw();

};


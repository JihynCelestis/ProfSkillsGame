#pragma once
#include "ControlHeader.h"

class CGameMap
{
private:
	
	//SIZES OF MAP ITEMS
//size of most the items are 1x1 
	const float GENERIC_WIDTH = 1.0f;
	//size of most the items are 1x1 
	const float GENERIC_HEIGHT = 1.0f;
public:
	CGameMap();

	const float mapHeight = 13;

	float startCoods[2];
	float checkpointCoords[2];
	float endCoords[2];
	int timeLimit;
	int mapWidth;

	//pile o' vectors
	vector<IModel*> floor;
	vector<IModel*> blocks;
	vector<IModel*> coins;
	vector<IModel*> wheels;		//After messing with all this, I realised I can probably just make a single 2D vector with every single model in it.
	vector<IModel*> spikes;	    //--Nathan
	vector<IModel*> jumpPads3;
	vector<IModel*> jumpPads4;
	vector<IModel*> jumpPads5;
	vector<IModel*> jumpPads6;

	IModel* skyBox;

	using FullLevel = vector<vector<BlockType>>;

	bool LoadTheMap(FullLevel& map, float startCoods[], float checkpointCoords[], float endCoords[], int& timeLimit, int& mapWidth, float mapHeight, string levelName);
	bool LevelBuild(I3DEngine * myEngine, float startCoods[], FullLevel& level, float mapWidth);
	
	//// GETTERS ////
	float GetItemWidth() { return GENERIC_WIDTH; } // Returns entity width
	float GetItemHeight() { return GENERIC_HEIGHT; } // Returns entity height

	int GetMapWidth() { return mapWidth; } // Returns the width of the map

	~CGameMap(); // Class Destructor
};


#pragma once

#include "Error.h"

#include "Map.h"

class Engine
{
public:

	int x, y;
	int yPosition;

	Map map;

	TCOD_key_t lastKey;

	Engine();
	~Engine();

	void term();
	void init();
	void render();
	void update();
};

extern Engine engine;

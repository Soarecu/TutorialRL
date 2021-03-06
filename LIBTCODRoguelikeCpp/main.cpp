// Main.cpp : Defines the entry point for the console application.
//

#include <libtcod.hpp>
#include "engine.hpp"

Engine engine = Engine();

int main()
{
	engine.init();
	while (!TCODConsole::isWindowClosed()) {
		engine.update();
		engine.render();
		TCODConsole::flush();
	}
    return 0;
}


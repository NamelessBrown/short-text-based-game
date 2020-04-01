#pragma once

#include "Room.h"
#include <vector>

class Game
{
public:
	Game();

	void Run();
private:
	bool m_running;
	std::string m_command;

	Room m_rooms[3];


	void SetupRooms(Room* ptr);
	void Update();
};


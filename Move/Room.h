#pragma once

#include <string>
#include <iostream>

class Room
{
public:
	Room* m_room = nullptr;

	Room() = default;
	Room(Room* ptr, const std::string location);

	const std::string& getLocation() const;

private:
	std::string m_location;
};


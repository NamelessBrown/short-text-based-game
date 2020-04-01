#include "Room.h"

Room::Room(Room* ptr, const std::string location)
{
	m_location = location;
}

const std::string& Room::getLocation() const
{
	return m_location;
}

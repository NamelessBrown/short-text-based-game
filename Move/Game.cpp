#include "Game.h"

void Game::SetupRooms(Room* ptr)
{
	m_rooms[0] = Room(&m_rooms[0], "Bedroom");
	m_rooms[1] = Room(&m_rooms[1], "Living room");
	m_rooms[2] = Room(&m_rooms[2], "Outside");

	m_rooms[0].m_room = &m_rooms[1];
	m_rooms[1].m_room = &m_rooms[2];
	m_rooms[2].m_room = &m_rooms[0];
}

Game::Game()
	:m_running(true)
{
	SetupRooms(m_rooms);
	std::cout << m_rooms[0].getLocation() << '\n';
	std::cout << m_rooms[1].getLocation() << '\n';
	std::cout << m_rooms[2].getLocation() << '\n';
}

void Game::Run()
{
	while (m_running)
	{
		Update();
	}

	std::cin.get();
}

void Game::Update()
{
	std::cout << "Where to?\t ";
	std::getline(std::cin, m_command);

	if (m_command == "Bedroom" || m_command == "bedroom" || m_command == "bed" || m_command == "b" || m_command == "B")
	{
		std::cout << "You are in the bedroom; You see a ghost. The ghost quickly flies through the wall! \n";
		std::cout << "You can go to " << m_rooms[0].m_room->getLocation() << '\n';

		std::getline(std::cin, m_command);
		while (m_command != m_rooms[0].m_room->getLocation())
		{
			std::cout << "ERROR not a command!\n";
			std::getline(std::cin, m_command);
		}

		std::cout << "You enter the living room. You see the ghost. 'Get out of here!' you scream. He jumps at you and hops in your body.\n";
		std::cout << "He is taking you to " << m_rooms[1].m_room->getLocation() << '\n';
		std::cout << "He takes you outside. You see the bright skies of Silverview! He then takes your body and jumps in the atlantic ocean. \n";
		std::cout << "Your body sinks! you die.\n";
		m_running = false;
	}
	else if (m_command == "Living Room" || m_command == "Living room" || m_command == "Living" || m_command == "living" || m_command == "LV")
	{
		std::cout << "Your Watching T.V; The T.V is playing all Silverview oldies! 'Black and while sucks!' you said.\n";
		std::cout << "The T.V starting to shake! 'WHAT DID YOU SAY?' the T.V yells and sucks you into it.\n";
		std::cout << "You can go " << m_rooms[1].m_room->getLocation() << '\n';

		std::getline(std::cin, m_command);
		while (m_command != m_rooms[1].m_room->getLocation())
		{
			std::cout << "ERROR not a command!\n";
			std::getline(std::cin, m_command);
		}

		std::cout << "You are outside! It's bright and white! You look at your self, 'I'm Black!' you say.\n";
		std::cout << "You look around. Your in a black and white sitcom! 'Oh, Bobby! you always know how to get me wet!'\n";
		std::cout << "A crowd laugh, but nobody is there. A ghost then came out of nowhere. 'Hey you I know where to go.'\n";
		std::cout << "The ghost tell you to go to " << m_rooms[2].m_room->getLocation() << '\n';

		std::cout << "He takes you to the bedroom. It's dark. 'Turn on the lights 'cause I'm lookin' for you.' you say.\n";
		std::cout << "BEEEP! The lights come on. 'Did I tell you Bobby? That other person in the room ain't one of us' \n";
		std::cout << "'Get them, and take their nails!' A lady said. Bobby lifts you up and started to rip your nails off \n";
		std::cout << "'OUCH!' you scream. Bobby takes your head and tears it off! 'Bleed haha.' he wispers. You died \n";
		m_running = false;
	}
	else if (m_command == "Outside" || m_command == "outside" || m_command == "out" || m_command == "OS" || m_command == "o")
	{
		std::cout << "Silverview is great! The tree stands tall in the center.\n";
		std::cout << "'Tonight is the night' you say. You are going to the center of the cornfield to see the tree.\n";
		std::cout << "LATER...\n\n";
		std::cout << "You begin heading out. You head towards the cornfield where the tree stand tall.\n";
		std::cout << "You walk throught the cornfield pushing the tall corn from side to side until you get to the center.\n";
		std::cout << "You starting to do what everybody do, when people get to the center. You began writing your name on the tree.\n";
		std::cout << "'You can't do that' a voice said. 'Who there?' you replied.\n A ghost flies from within the tree.\n";
		std::cout << "you are being taking to " << m_rooms[0].m_room->getLocation() << '\n';

		std::getline(std::cin, m_command);
		while (m_command != m_rooms[0].m_room->getLocation())
		{
			std::cout << "ERROR not a command!\n";
			std::getline(std::cin, m_command);
		}

		std::cout << "'You are a sin' the ghost says, 'I going to kill you. Not here, but at' " << m_rooms[2].m_room->getLocation() << '\n';
		std::cout << "He forces you onto the bed. Your body is mine now... He takes you outside, and takes you to the tree.\n";
		std::cout << "'You want to be like them? Fine. I let you be' said the ghost. The ghost takes your body and hits your head on the tree a million times.\n";
		std::cout << "Mush...Mush everywhere. You died.\n";
		m_running = false;
	}
}

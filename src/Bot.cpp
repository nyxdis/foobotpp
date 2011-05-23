#include <cstdlib>
#include <errno.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
#include <sys/stat.h>

#include "Bot.h"
#include "Settings.h"

Bot::Bot(void)
	: connected(false)
{
	if (mkdir("logs", S_IRWXU) != 0 && errno != EEXIST) {
		std::cerr << "Failed to create logs direcotry\n";
		exit(EXIT_FAILURE);
	}

	openLog();
}

void Bot::openLog(void)
{
	std::string filename = "logs/" + Settings::get("network") + ".log";
	logFp.open(filename.c_str(), std::ios_base::app);
	if (!logFp.is_open()) {
		std::cerr << "Failed to open log file\n";
		exit(EXIT_FAILURE);
	}
}

void Bot::parse(void)
{
	// Update userlist on JOIN, NICK and WHO events
	// Parse PRIVMSG
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::getUserlist(void)
{
	// find userlist entry
	// return userlist entry or new user
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::registerAlias(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::loadAliases(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::removeAlias(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::getAlias(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

bool Bot::connect(void)
{
	log(DEBUG, "Connecting");
	// open socket
	socket = 0;
	if (!socket)
		return true;
	// connect
	// send USER
	// send NICK
	// check for 001
	// log(DEBUG, "Connected");
	// connected = true;
	// return true;
	return false;
}

void Bot::postConnect(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::join(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::send(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::write(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::read(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::log(log_level level, std::string message)
{
	char ts[17];
	time_t now = time(NULL);
	std::string tmp;

	if (level < 0)
		return;

	strftime(ts, sizeof ts, "%Y-%m-%d %H:%M", localtime(&now));
	tmp = ts;
	tmp += ": " + message;
	std::cout << tmp << std::endl;
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::logCmd(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::wait(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::say(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::notice(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::act(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

void Bot::shutdown(void)
{
	std::cerr << __func__ <<  ": Not implemented\n";
	exit(EXIT_FAILURE);
}

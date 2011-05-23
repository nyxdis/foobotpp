#include <iostream>

#include "Settings.h"
#include "Plugins.h"
#include "Bot.h"
#include "User.h"

int main(void)
{
	// load settings
	Settings::load();
	// load plugins
	// initialize bot
	Bot *bot = new Bot;
	// load aliases
	// create empty user
	// connect bot
	bot->connect();
	bot->postConnect();
	for (;;) {
		bot->wait();
	}
}

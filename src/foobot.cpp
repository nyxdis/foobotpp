#include <iostream>

#include <glibmm.h>

#include "Settings.h"
#include "Plugins.h"
#include "Bot.h"
#include "User.h"

Glib::RefPtr<Glib::MainLoop> loop;

int main(void)
{
	loop = Glib::MainLoop::create();

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

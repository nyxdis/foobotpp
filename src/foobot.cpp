/*
 * Copyright (C) 2011 Christoph Mende

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <iostream>

#include <glibmm.h>

#include "Settings.h"
#include "Plugins.h"
#include "Bot.h"
#include "User.h"

Glib::RefPtr<Glib::MainLoop> loop;
Settings *settings;

int main(void)
{
	loop = Glib::MainLoop::create();
	settings = new Settings;

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

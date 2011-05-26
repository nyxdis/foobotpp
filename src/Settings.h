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


#ifndef HAVE_SETTINGS_H
#define HAVE_SETTINGS_H

#include <string>


class Settings {
	private:
		void *command_char;
		void *protocol;
		void *nick;
		void *username;
		void *realname;
		void *server;
		void *port;
		void *network;
		void *channels;
		void *authpass;
		void *authnick;
		void *authserv;
		void *authcmd;
		void *debug_mode;
		void *debug_channel;
		void *mainChannel;
		void *listenAddr;
		void *dccPort;
		void *pluginBlacklist;

	public:
		static void load(void);
		static std::string get(std::string);
};

#endif // HAVE_SETTINGS_H

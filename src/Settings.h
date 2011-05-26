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

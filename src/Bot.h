#ifndef HAVE_BOT_H
#define HAVE_BOT_H

#include <fstream>

#include "Protocol.h"

enum log_level {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Bot {
	private:
		void *userlist;
		bool connected;
		void *channel;
		void *usr;
		Protocol *protocol;
		void *channels;
		void *socket;
		std::ofstream logFp;
		void *aliases;

		void openLog(void);
		void parse(void);

	public:
		Bot(void);
		void getUserlist(void);
		void registerAlias(void);
		void loadAliases(void);
		void removeAlias(void);
		void getAlias(void);
		bool connect(void);
		void postConnect(void);
		void join(void);
		void send(void);
		void write(void);
		void read(void);
		void log(log_level, std::string);
		void logCmd(void);
		void wait(void);
		void say(void);
		void notice(void);
		void act(void);
		void shutdown(void);
};

#endif // HAVE_BOT_H

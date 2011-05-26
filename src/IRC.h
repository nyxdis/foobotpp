#include "Protocol.h"

class IRC : public Protocol
{
	public:
		bool connect() = 0;
		void postConnect() = 0;
		void join() = 0;
		void send() = 0;
		void say() = 0;
		void notice() = 0;
		void act() = 0;
		void quit() = 0;
};

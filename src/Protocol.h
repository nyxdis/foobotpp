class Protocol
{
	public:
		virtual bool connect() = 0;
		virtual void postConnect() = 0;
		virtual void join() = 0;
		virtual void send() = 0;
		virtual void say() = 0;
		virtual void notice() = 0;
		virtual void act() = 0;
		virtual void quit() = 0;
};

#ifndef HAVE_PLUGINS_H
#define HAVE_PLUGINS_H

class Plugins {
	private:
		void *loaded;
		void *help;
		void *events;
		void *recurring;
		void *timed;

	public:
		bool isLoaded(void);
		void load(void);
		void unload(void);
		void registerEvent(void);
		void runEvent(void);
		void registerRecurring(void);
		void runRecurring(void);
		void registerTimed(void);
		void loadTimed(void);
		void runTimed(void);
		void registerHelp(void);
		void getHelp(void);
};

#endif // HAVE_PLUGINS_H

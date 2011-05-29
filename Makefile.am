bin_PROGRAMS =	foobot

foobot_SOURCES = src/foobot.cc \
		 src/Bot.cc src/Bot.h \
		 src/Db.cc src/Db.h \
		 src/IRC.h src/IRC.cc \
		 src/Plugins.cc src/Plugins.h \
		 src/Protocol.h \
		 src/Settings.cc src/Settings.h \
		 src/User.cc src/User.h

foobot_LDADD = $(glibmm_LIBS) \
	       $(giomm_LIBS)

foobot_CXXFLAGS = $(glibmm_CFLAGS) \
		  $(giomm_CFLAGS)

bin_PROGRAMS =	foobot

foobot_SOURCES = src/foobot.cpp \
		 src/Bot.cpp src/Bot.h \
		 src/Db.cpp src/Db.h \
		 src/IRC.h src/IRC.cpp \
		 src/Plugins.cpp src/Plugins.h \
		 src/Protocol.h \
		 src/Settings.cpp src/Settings.h \
		 src/User.cpp src/User.h

foobot_LDADD = $(glibmm_LIBS) \
	       $(giomm_LIBS)

foobot_CXXFLAGS = $(glibmm_CFLAGS) \
		  $(giomm_CFLAGS)

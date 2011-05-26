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


#ifndef HAVE_IRC_H
#define HAVE_IRC_H

#include "Protocol.h"

class IRC : public Protocol
{
	public:
		bool connect();
		void postConnect();
		void join();
		void send() const;
		void say() const;
		void notice() const;
		void act() const;
		void quit();
};

#endif // HAVE_IRC_H

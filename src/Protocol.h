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


#ifndef HAVE_PROTOCOL_H
#define HAVE_PROTOCOL_H

class Protocol
{
	public:
		virtual ~Protocol() {}
		virtual bool connect() = 0;
		virtual void postConnect() = 0;
		virtual void join() = 0;
		virtual void send() const = 0;
		virtual void say() const = 0;
		virtual void notice() const = 0;
		virtual void act() const = 0;
		virtual void quit() = 0;
};

#endif // HAVE_PROTOCOL_H

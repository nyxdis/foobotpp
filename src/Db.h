#ifndef HAVE_DB_H
#define HAVE_DB_H

class Db {
	private:
		void *instance;

		void initialize(void);

	public:
		Db(void);
		void getInstance(void);
		void query(void);
		void getSingleProperty(void);
		void quote(void);
};

#endif // HAVE_DB_H

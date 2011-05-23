class User {
	private:
		void *id;
		void *name;
		void *level;
		void *nick;
		void *ident;
		void *host;
		void *realname;
		void *title;
		void *userdata;

	public:
		User(void);
		void get(void);
		void set(void);
};

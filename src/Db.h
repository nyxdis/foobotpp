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

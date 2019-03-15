#ifndef HUNGER_H
#define HUNGER_H

class Singleton
{
public:
	static Singleton *getInstance()
	{
		static Singleton instance;
		return &instance;	
	}

protected:
	struct ObjCreator
	{
		ObjCreator()
		{
			Singleton::getInstance();
		}
	};
	static ObjCreator obj_creator;

private:
	Singleton(){};
	Singleton(const Singleton &);
	Singleton& operator=(const Singleton &);

};

Singleton::ObjCreator Singleton::obj_creator; 


#endif

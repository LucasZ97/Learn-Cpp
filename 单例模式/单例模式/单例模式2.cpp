#include <iostream>
using namespace std;


class Singleton {
public:
	static Singleton* GetInstance();
private:
		Singleton() {};
	Singleton(const Singleton&) {};//½ûÖ¹¿½±´
	Singleton& operator = (const Singleton&) {};//½ûÖ¹¸³Öµ

	static Singleton* instance;
};
//³õÊ¼»¯
Singleton* Singleton::instance = NULL;
Singleton* Singleton::GetInstance() {
	if (instance == NULL) {
		instance = new Singleton();
	}
	return instance;
}

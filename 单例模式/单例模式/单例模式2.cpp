#include <iostream>
using namespace std;


class Singleton {
public:
	static Singleton* GetInstance();
private:
		Singleton() {};
	Singleton(const Singleton&) {};//��ֹ����
	Singleton& operator = (const Singleton&) {};//��ֹ��ֵ

	static Singleton* instance;
};
//��ʼ��
Singleton* Singleton::instance = NULL;
Singleton* Singleton::GetInstance() {
	if (instance == NULL) {
		instance = new Singleton();
	}
	return instance;
}

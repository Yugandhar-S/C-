
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;
template<typename Base, typename T>
inline bool instanceof(const T *ptr) {
    return dynamic_cast<const Base*>(ptr) != nullptr;
}

class Course
{
public:

	Course(){}

	virtual void start()
	{
	}
};
class Predac:public Course
{
public:
	void start()
	{
		cout<<"predac start"<<endl;
	}
};
class Mscit:public Course
{
public:
	void start()
	{
		cout<<"Mscit start"<<endl;
	}
};
class Dac:public Course
{
public:
	void start()
	{
		cout<<"Dac start"<<endl;
	}
	void orientation()
	{
		cout<<"Dac orientation"<<endl;
	}
};

void Perform(Course *ptr){
	if(instanceof<Dac>(ptr)){
		Dac *d=(Dac*)ptr;
		d->orientation();
	}
	ptr->start();
}

int main(){
	Perform(new Mscit);
	Perform(new Dac);
	getchar();
	return 0;
}





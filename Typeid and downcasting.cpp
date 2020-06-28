
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include<typeinfo>
using namespace std;


class Course{
public:
	virtual void start()=0;
};

class PreDac:public Course{
public:
	void start(){
	cout<<"PreDac starts"<<endl;
	}
};

class Basic:public Course{
public:
	void start(){
		cout<<"basic starts"<<endl;
	}
};

class Dac:public Course{
public:
	void start(){
		cout<<"DAC starts"<<endl;
	}

	void Orientation(){
		cout<<"Welcome to DAC course"<<endl;
	}
};

void Caller(Course *ref){
	if(typeid(*ref)==typeid(Dac)){
		Dac *d=(Dac*)ref;
		d->Orientation();
	}

	ref->start();
	delete ref;
}

int main(){
	Caller(new Dac);
	Caller(new PreDac);
	Caller(new Basic);
	getchar();
	return 0;
}

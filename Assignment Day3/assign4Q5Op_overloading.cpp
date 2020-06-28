/*
5) Define a class with constructor and  member function

	create object, call member function
	now create a reference to that object, and using that reference try to call member function
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyClass{
public:
	void disp1();

	void disp2(){
		disp1();
		cout<<"inside disp2"<<endl;
	}
};

void MyClass::disp1(){
	cout<<"Inside disp1"<<endl;
}

int main(){
	MyClass m1;
	m1.disp2();

	MyClass &ref=m1;
	ref.disp1();
	ref.disp2();
	getchar();
	return 0;
}
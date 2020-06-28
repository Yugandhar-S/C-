/*
4) Define a class , write two member functions 
	void disp1(){ //some code }
	void disp2(){ // some code }

	Try to call disp1   from    disp2.
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
	getchar();
	return 0;
}
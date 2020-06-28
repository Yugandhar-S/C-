//This is the client side
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "E:\Yugandhar Salvi\MyC++\Client\inherit.h"
using namespace std;

class Child1:public Base1{
public:
	Child1():Base1(27){
	}

	Child1(int num):Base1(num){
	}
	
	Base1::disp1; //Including display1 of Parent in Child

	void disp2(){
		Base1::disp1();
		cout<<"Inside child of base1 display"<<endl;
	}
};

class Child2:public Base2{
public:
	Child2():Base2("test"){
	}

	Child2(char* ptr):Base2(ptr){
	}

	void disp3(){
		Base2::disp2();
		cout<<"Inside child of base2 display"<<endl;
	}

	Base2::disp2; //Including Display 2 method of Parent in child
};

int main(){
	Child1 s1(20),s2(15),s3(300);
	Child2 c1("Yugandhar Salvi"),c2("Vita");
	s1.disp1();
	s3.disp1();	
	s2.disp1();
	c1.disp2();
	c2.disp2();
	getchar();
	return 0;
}

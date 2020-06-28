//This is the lib file
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "inherit.h"
using namespace std;

//Base 1 class definition.
Base1::Base1(){
	num1=10;
}

Base1::Base1(int k){
	num1=k;
}

void Base1:: disp1(){
	cout<<"Inside Base 1 display"<<endl;
	cout<<"Num1 : "<<num1<<endl;
}

Base1::~Base1(){
	cout<<"Base 1 Destructor"<<endl;
}

//Base 2 class deinition.
Base2::Base2(){
	char *name="Yugandhar";
}

Base2::Base2(char *ptr){
	this->name=new char[strlen(ptr)+1];
	strcpy(name,ptr);
}

void Base2::disp2(){
	cout<<"Inside Base 2 display"<<endl;
	cout<<"Char is "<<name<<endl;
}

Base2::~Base2(){
	cout<<"Inside Base 2 destructor"<<endl;
}

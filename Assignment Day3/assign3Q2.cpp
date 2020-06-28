/* 2) 
class First
{
	int a;
};
class Second
{
	public:
		void fun1(){}
		void fun2(){}
		void fun3(){}
};

Above code is incomplete.
Make sure that all the member functions of "Second" will access "a".
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Second;

class First{
	int a;

public:
	First(){
		a=10;
	}

	First(int num){
		this->a=num;
	}

	friend class Second;
};

class Second{
public:
	void fun1(First &ref){
		cout<<"Inside fun1 "<<ref.a<<endl;
	}

	void fun2(First &ref1){
		cout<<"Inside fun2 "<<ref1.a<<endl;
	}

	void fun3(First &ref2){
		cout<<"Inside fun3 "<<ref2.a<<endl;
	}

};

int main(){
	First f1(311);
	Second s1;
	s1.fun1(f1);
	s1.fun3(f1);
	s1.fun2(f1);
	getchar();
	return 0;
}

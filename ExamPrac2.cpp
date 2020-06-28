/*1) define a class "MyClass2"
	with member function "disp2().
   then define another class "MyClass1"
	with member function "disp1().

now try to invoke disp1() from disp2().

in the main() function, invoke "disp2".
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include<typeinfo>
using namespace std;

class MyClass1;

class MyClass2{
public:
	
	void disp2(MyClass1 &);
};

class MyClass1{
public:
	void disp1(){
		cout<<"Inside disp1"<<endl;
	}
};

void MyClass2::disp2(MyClass1 &ref){
	ref.disp1();
	cout<<"Inside disp2"<<endl;
}

int main(){
	MyClass1 m1;
	MyClass2 m2;
	m2.disp2(m1);
	getchar();
	return 0;
}


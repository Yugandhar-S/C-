/*3)create a class "MyClass1"
with members and member function "disp1().
create another class "MyClass2"
with members and member function "disp2().
now try to invoke disp1() from disp2()
in the main() function, create instances of both the classes and invoke their member functions.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyClass1
{
public:
	MyClass1();
	~MyClass1();
	void disp1();

private:

};

MyClass1::MyClass1()
{
}

MyClass1::~MyClass1()
{
}



class MyClass2
{
public:
	MyClass2();
	~MyClass2();
	void disp2(MyClass1 &);

private:

};

MyClass2::MyClass2()
{
}

MyClass2::~MyClass2()
{
}

void MyClass2::disp2(MyClass1 &ref){
	ref.disp1();
	cout<<"Inside disp2"<<endl;
}

void MyClass1::disp1(){
	cout<<"Inside disp1"<<endl;
}

int main(){
	MyClass1 m1;
	MyClass2 m2;
	m2.disp2(m1);
	getchar();
	return 0;
}
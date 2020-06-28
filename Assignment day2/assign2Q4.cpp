/*4) create a class.
accept from user, how many instances are required.
Accordingly create array of instances dynamically.
Now make sure that u call destructor for each and every instances.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyClass
{
public:
	MyClass();
	~MyClass();
	void disp();

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void MyClass::disp(){
	cout<<"inside display"<<endl;
}

int main(){
	MyClass *m1;
	int cnt;
	cout<<"enter number of copies"<<endl;
	cin>>cnt;
	m1=new MyClass[cnt];
	for(int i=0;i<cnt;i++){
		m1[i].disp();
	}
	delete[] m1;
	getchar();
	return 0;
}
/*2) create a class with constructors and destructor.
create 2 instances on stack and 1 instance on heap. observe the invocation of constructors and destructors.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyClass
{
public:
	MyClass();
	MyClass(int);
	~MyClass();
	MyClass(MyClass &);
	int getNum();
	void setNum(int);

private:
	int num;

};

MyClass::MyClass()
{
	this->num=9;
}

MyClass::~MyClass()
{
	cout<<"inside destructor"<<endl;
}

MyClass::MyClass(int num){
	this->num=num;
}

MyClass::MyClass(MyClass &ref){
	this->num=ref.num;
}

int MyClass::getNum(){
	return num;
}

void MyClass::setNum(int num){
	this->num=num;
}

int main(){
	MyClass *ptr;
	int copies;
	MyClass m1, m2(20);
	m1.setNum(30);
	cout<<m1.getNum()<<endl;
	cout<<m2.getNum()<<endl;

	cout<<"Enter number of Instances"<<endl;
	cin>>copies;
	ptr=new MyClass[copies];

	for(int i=0;i<copies;i++){
		cout<<ptr[i].getNum()<<endl;
	}
	delete[] ptr;

	MyClass *m3=new MyClass(30);
	cout<<m3->getNum()<<endl;

	delete m3;
	getchar();
	return 0;
}
	

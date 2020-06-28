/*1) create a class with constructors and destructors.
create array of instances and observe how program behaves.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyClass{
	int num;

public:
	MyClass(){
		num=4;
		cout<<"Inside default const"<<endl;
	}

	MyClass(int n){
		num=n;
	}

	MyClass(MyClass &r){
		num=r.num;
	}

	void setNum(int n){
		this->num=n;
	}

	int getNum(){
		return num;
	}

	void displayNum(){
		cout<<num<<endl;
	}
	
	~MyClass(){
		cout<<"Inside destructor"<<endl;
	}


};

int main(){
	MyClass *m1; //always create a pointer of class type
	int cnt;
	cout<<"Enter number of instances"<<endl;//take inputs from user
	cin>>cnt;
	m1=new MyClass[cnt];//create array of instances/object in heap

	for(int i=0;i<cnt;i++){
		if(i==6 || i==9){
			m1[i].setNum(9);
		}
		m1[i].displayNum();
	}

	delete[] m1;
	getchar();
	return 0;
}
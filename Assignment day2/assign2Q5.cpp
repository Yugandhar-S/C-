/*5) create a class, 
define different types of constructors. 
in main create n number of objects.
At the end display how many constructors are created for a class.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyClass{
	int age;
	char* name;

public:
	MyClass(){
		cout<<"Inside default const"<<endl;
	}

	MyClass(int num, char* str){
		this->age=num;
		this->name=new char[strlen(str)+1];
		strcpy(name,str);
		cout<<"Inside para const"<<endl;
	}

	MyClass(MyClass &copy){
		this->age=copy.age;
		this->name=copy.name;
		cout<<"Inside copy const"<<endl;
	}

	void display(){
		cout<<name<<" "<<age<<endl;
	}


};

int main(){
	MyClass clone;
	MyClass m1(221,"Yugandhar"), m2;
	clone=m1;
	m1.display();
	m2=clone;
	m2.display();
	clone.display();
	getchar();
	return 0;
}

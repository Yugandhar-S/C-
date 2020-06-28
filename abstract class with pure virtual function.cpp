
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

class Person{
public:
	virtual void performDuties()=0;

	void talk(){
		cout<<"talk"<<endl;
	}

	void walk(){
		cout<<"walk"<<endl;
	}

	void eat(){
		cout<<"Eat"<<endl;
	}

	void sleep(){
		cout<<"Sleep"<<endl;
	}

};

class Soldier : public Person{
	
	void performDuties(){
		cout<<"Fight"<<endl;
	}
};

class Teacher : public Person{

	void performDuties(){
		cout<<"Teach"<<endl;
	}
};

class Student : public Person{

	void performDuties(){
		cout<<"Study"<<endl;
	}
};

void Perform(Person *p){
		p->performDuties();
		p->talk();
	}

int main(){
	/*Perform(new Teacher);
	Perform(new Student);
	Perform(new Soldier);
*/
	Person *arr[3]={new Soldier, new Teacher, new Student};

	for(int i=0;i<3;i++){
		arr[i]->performDuties();
	}
	getchar();
	return 0;
}










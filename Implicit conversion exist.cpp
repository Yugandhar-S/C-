#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

class Entity{
	int age;
	string Name;

public:
	Entity(){
	}

	 Entity(int age){
		this->age=age;
		Name="Unknown";
	}

	 Entity(string Name){
		this->Name=Name;
		age=-1;
	}

	/*for Primitive to User define we need Parameterized constructor
	which is not explicit*/
	
	explicit Entity(int age, string Name){
		this->age=age;
		this->Name=Name;
	}

	/*if Parameterized constructor is defined as Explicit
	then we need to overload Operator= operator
	*/

	Entity operator=(Entity &e)
	{
		age=e.age;
		Name=e.Name;
		return *this;
	}


	//copy constructor
	Entity(Entity &e){
		this->age=e.age;
		this->Name=e.Name;
	}
	
	void display();

	friend void PrintEntity(const Entity &);
};

void Entity::display(){
	cout<<Name<<endl<<age<<endl;
}

void PrintEntity(const Entity &ref){
	cout<<ref.age<<" "<<ref.Name<<endl;
}

int main(){
	//this is just another way of creating another object
	Entity a=60;
	a.display();

	Entity b="Yugandhar";
	b.display();

	Entity c(24,"Yugandhar SALVI");
	c.display();
	
	PrintEntity(c);
	PrintEntity(a);
	PrintEntity(b);
	
	getchar();
	return 0;
}
	















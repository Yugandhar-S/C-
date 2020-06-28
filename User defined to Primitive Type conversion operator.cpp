/*Inorder to convert from User define/class type to Primitive type we need
to use TYPE conversion operator

it is declared and defined inside Class like this:

operator <datatype of what u want to return>(){
	
	return <what u want to return>
}

*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

class Complex{
	int x,y;

public:

	Complex(int x, int y){
		this->x=x;
		this->y=y;
	}


	void setData(int x, int y){
		this->x=x;
		this->y=y;
	}

	void showData(){
		cout<<x<<" "<<y<<endl;
	}

	operator int(){		//Type conversion operator
		return x;
	}
};

int main(){
	Complex c1(100,300);
	c1.showData();
	int a,b;
	a=c1;		//c1.operator int();
	b=c1.y;
	cout<<x<<endl;
	getchar();
	return 0;
}

















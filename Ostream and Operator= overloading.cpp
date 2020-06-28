
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

class Base{
	int x,y;

public:

	Base(){
		x=10;
		y=20;
	}

	Base(int x, int y){
		this->x=x;
		this->y=y;
	}

	Base& operator+(Base &ref){
		Base temp;
		temp.x=x+ref.x;
		temp.y=y+ref.y;
		return temp;
	}

	void operator=(Base &assign){
		x=assign.x;
		y=assign.y;
	}

	void display(){
		cout<<x<<" and "<<y<<endl;
	}

	friend ostream &operator<<(ostream& o,const Base b){
		o<<b.x<<" "<<b.y<<endl;
		return o;
	}
};

int main(){
	Base b1;
	Base b2(200,350);
	b1=b2;
	Base b3;
	cout<<"b1+b2 "<<b1+b2<<endl;
	b3.display();
	getchar();
	return 0;
}


	










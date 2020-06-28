/*1)class base
{
	public:
		base(char ptr)
		{
		}
};
class sub:public base
{
};

Following statements should be possible

sub s;

sub *s1=new sub(40);

sub *s2=new sub('a',4.5);

*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base{
	char ch;

public:

	//Base(){
	//	cout<<"Base default const"<<endl;
	//}

	Base(char ptr){
		this->ch=ptr;
		cout<<"Base para const"<<endl;
	}

	~Base(){
		cout<<"Base Destructor"<<endl;
	}

	void baseDisp(){
		cout<<ch<<endl;
	}
};

class Sub:public Base{
	float num;

public:
	Sub():Base('y')
	{
	this->num=10;
	cout<<"Sub default const"<<endl;
	}

	Sub(char c, float n):Base(c){
		this->num=n;
		cout<<"sub para const"<<endl;
	}

	Sub(float n):Base('Y'){
		this->num=n;
		cout<<"Inside sub const"<<endl;
	}

	void subDisp(){
		Base::baseDisp();
		cout<<num<<endl;
	}

	~Sub(){
		cout<<"Sub destructor"<<endl;
	}
};

int main(){
	Sub s;

	Sub *s1=new Sub(40);
	s1->subDisp();
	Sub *s2=new Sub('a',4.5);
	s2->subDisp();
	getchar();
	delete s1;
	delete s2;
	return 0;
}

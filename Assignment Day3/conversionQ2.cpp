/*

2)write a number class with
int num;
void disp(){}

u should be able to do following

number n1(20);
int k=-n1;

n1+=5;
n1.disp()

number n2(35);
if(n1!=n2)
{
	some message
}



number n3(12);

if(n3 < n1)
{
	some message
}

number n4;

n4=n2*n3;
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Number{
	int num;

public:
	Number(){
		num=0;
	}

	Number(int num){
		this->num=num;
	}

	void disp()
		{
			cout<<num<<endl;
		}

	//int k=-n1;UD to Primitive

	operator int(){
		return num;
	}

	//n1+=5; Overloading

	void operator+=(int k){
		this->num=num+k;
	}

	/*
	if(n1!=n2)
	*/

	bool operator!=(Number &ref){
	return (this->num != ref.num)?true:false;
	}

	/*
	if(n3 < n1)
	*/
	bool operator<=(Number &ref){
		return (this->num < ref.num)? true:false;
	}

	Number operator*(Number &ref){
		return Number(this->num*ref.num);
	}
};

int main(){
	Number n1(20);
	int k=-n1;
	cout<<k<<endl;
	n1+=5;
	n1.disp();

	Number n2(35);
	if(n1!=n2)
	{
		cout<<"not equal verified"<<endl;
	}

	Number n3(12);

	if(n3 < n1)
	{
		cout<<"Less than verified"<<endl;
	}

	Number n4;

	n4=n2*n3;
	n4.disp();

	getchar();
	return 0;
}
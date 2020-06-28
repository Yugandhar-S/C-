/*)4) 
5)
Define a class MyNum having a member variable int num and void disp();	
	From main function, perform following				
	a) MyNum m1(20);						
	b) m1=100; //Do not use Constructor for this purpose			
	c) int k;						
	d) k=m1;							
	e) cout<<endl<<k<<endl;
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyNum{
	int num;

public:
	MyNum(){
		num=0;
	}

	explicit MyNum(int k){
		num=k;
	}

	MyNum& operator=(int k){
		num=k;
		return *this;
	}

	operator int(){
		return num;
	}

	~MyNum(){
	}

};

int main(){
	MyNum m1(20);						
	m1=100; //Do not use Constructor for this purpose			
	int k;						
	k=m1;							
	cout<<endl<<k<<endl;
	getchar();
	return 0;
}




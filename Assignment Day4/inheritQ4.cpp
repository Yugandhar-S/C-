/*)4) 
Create a base class FourWheeler. Declare pure virtual function void start() in it. 			
Define following sub classes for this class. 
A) Qualis b) Sumo c) Volvo 					
Define start function in these classes.			
In main function , create array of pointer to FourWheeler which will contain objects of these three sub classes. 
Now traverse the array and call all the child class methods.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class FourWheeler{
public:
	virtual void start()=0;
};

class Qualis : public FourWheeler{
public:void start(){
		cout<<"Qualis starts"<<endl;
	}
};

class Sumo : public FourWheeler{
public:void start(){
		cout<<"Sumo starts"<<endl;
	}
};

class Volvo : public FourWheeler{
public:void start(){
		cout<<"Volvo starts"<<endl;
	}
};

int main(){
	FourWheeler *f1[3]={new Qualis, new Sumo, new Volvo};
	for(int i=0;i<3;i++){
		f1[i]->start();
	}
	//delete[] f1;
	return 0;
}


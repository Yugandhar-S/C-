/*)8)
Create a base class Subject.Declare pure virtual function void maxmarks() in it.
Define following sub classes for this class. A) Maths b) History c) English.	
Define maxmarks in these classes.

now write a global function "show" which will accept "subject class pointer" as an argument. 
this function should be able to call "maxmarks()" of any child class which is passed.
From main function try to call this function by passing various child classes.


same as above except it has to be done using reference of parent class.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Subject{
public:
	virtual void maxMarks()=0;
};

class Maths:public Subject{
	void maxMarks(){
		cout<<"Maths : 450."<<endl;
	}
};

class History:public Subject{
	void maxMarks(){
		cout<<"History : 300."<<endl;
	}
};
class English:public Subject{
	void maxMarks(){
		cout<<"English : 250."<<endl;
	}
};

void showMaxMarks(Subject *ptr){
	cout<<"using pointer"<<endl;
	ptr->maxMarks();
}

void showMaxMarks(Subject &ref){   //Overloaded showMaxMarks
	cout<<"Using reference"<<endl;
	ref.maxMarks();
}

int main(){
	showMaxMarks(new Maths);
	showMaxMarks(new English);
	showMaxMarks(new History);

	Maths m1;
	English e1;
	History h1;

	showMaxMarks(m1);
	showMaxMarks(e1);
	showMaxMarks(h1);

	getchar();
	return 0;
}



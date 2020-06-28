/*)7)
Create a base class Subject.Declare pure virtual function void maxmarks() in it.
Define following sub classes for this class. A) Maths b) History c) English.	
Define maxmarks in these classes.

now write a global function "show" which will accept "subject class pointer" as an argument. 
this function should be able to call "maxmarks()" of any child class which is passed.
From main function try to call this function by passing various child classes.
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

void showMaxMarks(Subject *ref){
	ref->maxMarks();
}

int main(){
	showMaxMarks(new Maths);
	showMaxMarks(new English);
	showMaxMarks(new History);
	getchar();
	return 0;
}







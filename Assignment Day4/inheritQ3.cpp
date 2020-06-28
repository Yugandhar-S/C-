/*) 3) 
class course
{
	//here
};
class DacCourse:public course
{
	// here
};

you should be able to say following

course *c=new course;
c->fees(); // course version should be called
c=new DacCourse;
c->fees();  // DacCourse version should be called
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Course{
	int cFees;

public:
	Course(){
		cFees=100;
	}

	virtual void fees(){
		cout<<"Main Course fee : "<<cFees<<endl;
	}

};

class DacCourse:public Course{
	int dFees;

public:

	DacCourse(){
		dFees=1500;
	}

	void fees(){
		cout<<"Dac Course fee : "<<dFees<<endl;
	}
};

int main(){
	
Course *c=new Course;
c->fees(); // course version should be called
c=new DacCourse;
c->fees();  // DacCourse version should be called
getchar();
return 0;
}




/*2) create a class.
accept from user, how many instances are required.
Accordingly create array of instances dynamically.
Now make sure that u call destructor for each and every instances.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include<typeinfo>
using namespace std;

class MyClass{
	int num;
public:
	void disp(){
		cout<<"disp"<<endl;
	}
};

int main(){
	int cnt;
	MyClass *ptr;

	cout<<"How many instances"<<endl;
	cin>>cnt;

	ptr=new MyClass[cnt];

	for(int i=0;i<cnt;i++){
		ptr->disp();
	}
	getchar();
	delete []ptr;
	
	return 0;
}




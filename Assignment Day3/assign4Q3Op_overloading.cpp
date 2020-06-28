/*3) Given

class Module1
{
	int duration;
	public:
		Module1(int k)
		{
			duration=k;
		}
};

class Module2
{
	int duration;
	public:
		Module2(int k)
		{
			duration=k;
		}
};		
	
write a global function "check" which will take 2 modules (i.e. Module1 and Module2 ) and check whether Modules are same or not.
call this "check" function from main function.	
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Module2;
class Module1
{
	int duration;
	public:
		Module1(int k)
		{
			duration=k;
		}
		friend void check(Module1 &,Module2&);
};

class Module2
{
	int duration;
	public:
		Module2(int k)
		{
			duration=k;
		}
		friend void check(Module1 &,Module2&);
};	
void check(Module1 &x,Module2&y){
	(x.duration==y.duration)?cout<<"Same"<<endl:cout<<"Not Same"<<endl;
}

int main(){
	Module1 m1(200), m3(150);
	Module2 m2(200),m4(150);
	check(m1,m2);
	check(m3,m2);
	check(m3,m4);
	check(m1,m4);
	getchar();
	return 0;
}
	
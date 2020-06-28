/*) 
class parent
{
	public:
		disp1()
		disp2()
		disp3()
		disp4()
};
class sub:private parent
{
	public:
		disp5()
};

make sure u can do the following

sub s(30);
s.disp5();
s.disp3();
s.disp1();

*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class parent
{
	public:
		void disp1(){
			cout<<"Inside disp1"<<endl;
		}

		void disp2(){
			cout<<"Inside disp2"<<endl;
		}

		void disp3(){
			cout<<"Inside disp3"<<endl;
		}

		void disp4(){
			cout<<"Inside disp4"<<endl;
		}
};
class sub:private parent
{
	int num;
	public:

		sub(int k){
			this->num=k;
		}
		void disp5(){
			cout<<"Inside disp5"<<endl;
		}

		parent::disp1;
		parent::disp3;
};

int main(){
sub s(30);
s.disp5();
s.disp3();
s.disp1();
getchar();
return 0;
}


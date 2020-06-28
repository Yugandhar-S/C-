/*
1) class Hour
{
	private:
		int hr;
	public:
		parameterized constructor
		disp method
}
class Minute
{
	private:
		int mnt;
	public:
		parameterized constructor
		disp method

write a program to convert minutes to hours.
(Use operator= for conversion.)
}*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Hour
{
	private:
		int hr;
	public:


		//parameterized constructor
		Hour(int k){
			this->hr=k;
		}

		//disp method
		void disp(){
			cout<<hr<<endl;
		}

		int getHr(){
			return hr;
		}
};


class Minute
{
	private:
		int mnt;
	public:
		//parameterized constructor
		Minute(int k){
			this->mnt=k;
		}

		Minute operator*(Minute &ref){
			return Minute(mnt*ref.mnt);
		}

		void operator=(Hour &h){
			mnt=h.getHr()*60;
		}

		//disp method
		void disp(){
			cout<<mnt<<endl;
		}
};

int main(){
	Hour a1(3);
	Minute m1(20);
	m1=a1;
	m1.disp();
	getchar();
	return 0;
}


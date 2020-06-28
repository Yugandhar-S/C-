/* class First
   {
      char str1[20];
   };
   class Second
   {
      char str2[20];
   };
write a friend function,which will create a  new string containing str1,str2 and also display it.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Second;
class First{
	char *str1;

public:
	First(char *name){
		this->str1=new char[strlen(name)+1];
		strcpy(str1,name);
	}

	friend void joinString(First &, Second&);
};


class Second{
	char *str2;
public:
	Second(char *str2){
		this->str2=new char[strlen(str2)+1];
		strcpy(this->str2, str2);
	}
	friend void joinString(First &, Second &);
};


void joinString(First &x, Second &y){
	char str[60];
	strcpy(str,x.str1);
	strcat(str, y.str2);
	cout<<str<<endl;
}

int main(){
	First f1("Yugandhar");
	Second s1(" Salvi");
	joinString(f1,s1);
	getchar();
	return 0;
}
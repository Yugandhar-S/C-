
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "E:\Yugandhar Salvi\MyC++\Client\book.h"
using namespace std;

int main(){
	book b1(1,"C++ Primer", 1322), b2(2,"JavaScript",1496);
	book *b3=new book(3,"Java",1745);
	b1.getBookId();
	b2.getBookName();
	b3->getBookName();
	b3->getBookPrice();
	getchar();
	return 0;
}

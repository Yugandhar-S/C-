
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "book.h"
using namespace std;


book::book(int id, char *str, int price){
	this->bookId=id;
	this->bookName=new char[strlen(str)+1];
	strcpy(bookName,str);
	this->bookprice=price;
	cout<<"Inside para const"<<endl;
}

book::book(book &ref){
	this->bookId=ref.bookId;
	this->bookName=ref.bookName;
	this->bookprice=ref.bookprice;
	cout<<"Inside copy construct"<<endl;
}

void book::getBookId(){
	cout<<"The book id is "<<this->bookId<<endl;
}

void book::getBookName(){
	cout<<"The book name is "<<this->bookName<<endl;
}

void book::getBookPrice(){
	cout<<"The price of book is "<<this->bookprice<<endl;
}

book::~book(){
	cout<<"inside destructor"<<endl;
}
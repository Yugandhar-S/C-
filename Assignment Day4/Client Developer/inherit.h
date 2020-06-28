/*6) create a base1 and base2 classes in the library.
constructors, member variables and functions you can have in the above classes of your choice.

now create an application where you have to create a child class of above classes.
in the main function create an instance of child class and try to access methods of base1 and base2.

*/

class Base1{
	int num1;
public:
	Base1();
	Base1(int);
	void disp1();
	~Base1();
};

class Base2{
	char *name;
public:
	Base2();
	Base2(char *);
	void disp2();
	~Base2();

};



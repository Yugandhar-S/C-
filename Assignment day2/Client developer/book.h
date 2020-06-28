/*Developer Side
	create a class "book" with
		int bookid
		char *bookname
		int price

	define parameterized constructor only for this class.
	define 3 getter functions.
*/

class book{
private:
	int bookId;
	char *bookName;
	int bookprice;

public:
	book(int, char*,int);
	book(book &);
	void getBookId();
	void getBookName();
	void  getBookPrice();
	~book();
};

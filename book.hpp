//
// Why have we included a copy constructor? Are we hedging for duplicate books?
//

#ifndef book_hpp
#define book_hpp

#include <stdio.h>
#include <string>
#include "pQueue.hpp" // ditch this
#include "Date.h"
#include "employee.hpp"

using namespace std;

class Book{
private:
	string name;
	Date startDate;
	Date endDate;
	bool archived;
	pQueue waiting; // this needs to be changed to the pqueue
public:
	Book();
	Book(string bookName);
	Book(string bookName, Date start);
	Book(Book& other);

	string getname();
	Date getstartDate();
	Date getendDate();
	bool getarchived();

	void setname(string newName);
	void setstartDate(Date newDate);
	void setendDate(Date newDate);
	void setarchived(bool newBool);
};

#endif /* book_hpp */

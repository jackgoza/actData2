//
//  book.hpp
//  data2
//
//  Created by John Goza on 7/4/16.
//  Copyright © 2016 JohnGoza. All rights reserved.
//

#ifndef book_hpp
#define book_hpp

#include <stdio.h>
#include <string>
#include <queue>
#include "Date.h"

struct employee{
public:
	string name;
	int waitTime;
	int retainTime;
};

using namespace std;

class book{
private:	string name;
	Date startDate;
	Date endDate;
	bool archived;
	queue<employee> waiting;
public:
	book();
	book(book& other);

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

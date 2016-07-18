//
//  library.hpp
//  data2
//
//  Created by John Goza on 7/4/16.
//  Copyright © 2016 JohnGoza. All rights reserved.
//

#ifndef library_hpp
#define library_hpp

#include <stdio.h>
#include <string>
#include <queue>
#include <list>
#include "Date.h"
#include "book.hpp"

class Library{
private:
	list<Book> toBeCirculated;
	list<Book> archived;
	list<Employee*> employeeList; // list of pointers to employees
public:
	Library();
	~Library();

	void add_book(string newBook);
	void add_employee(string newPerson);
	void circulate_book(string bookToMove, Date dayOfMove);
	void pass_on(string bookToMove, Date date);
};

#endif /* library_hpp */

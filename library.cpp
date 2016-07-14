//
// Again, why copy constructor?

#include "library.hpp"


/*
	library();
	add_book(string newBook);
	add_employee(string newPerson);
	circulate_book(string bookToMove, Date dayOfMove);
	pass_on(string bookToMove);
 */

Library::Library(){
}

void Library::add_book(string newBook){
	book tempBook(newBook);
	bookList.push_back(tempBook);
}

void Library::add_employee(string newPerson){
	employee tempPerson(newPerson);
	employeeList.push_back(tempPerson);
}

void Library::circulate_book(string bookToMove, Date dayOfMove){
	
}

void Library::pass_on(string bookToMove, Date date){
}

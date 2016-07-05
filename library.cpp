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

library::library(){
}

library::library(library& other){ // Is this necessary?
	bookList = other.bookList;
}

void library::add_book(string newBook){
	book tempBook(newBook);
	bookList.push_back(tempBook);
}

void library::add_employee(string newPerson){
	employee tempPerson(newPerson);
	employeeList.push_back(tempPerson);
}

void library::circulate_book(string bookToMove, Date dayOfMove){
	
}

void library::pass_on(string bookToMove){
}

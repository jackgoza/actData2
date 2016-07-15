//
// Again, why copy constructor?

#include "library.hpp"

Library::Library(){
}

void Library::add_book(string newBook){
	Book tempBook(newBook);
	toBeCirculated.push_back(tempBook);
}

void Library::add_employee(string newPerson){
	Employee tempPerson(newPerson);
	employeeList.push_front(tempPerson);
}

void Library::circulate_book(string bookToMove, Date dayOfMove){
	list<Book>::iterator it;
	for (it = toBeCirculated.begin(); it != toBeCirculated.end(); it++){ // find book
		if (it->getname() == bookToMove){
			it->populate_queue(employeeList); // create queue
			it->setstartDate(dayOfMove); // save start date
			break;
		}
	}	
}

void Library::pass_on(string bookToMove, Date date){
	Employee next, prev;
	list<Book>::iterator it;
	for (it = toBeCirculated.begin(); it != toBeCirculated.end(); it++){ // find book
		if (it->getname() == bookToMove){
			prev = it->pop_next(); // pop highest priority, save to prev
			prev.setWait(date - it->getstartDate()); // wait = current date - book start date
			prev.setRetain(date - prev.getStart()); // retain = current date - employee start
			if (!it->isEmpty()){
				next = it->top(); // next is top of queue
				next.setStart(date); // save current date for next employee
			}
			else{
				it->setarchived(true);
				archived.push_back(*it); // add to archived
				toBeCirculated.erase(it); // erase from toBeCirculated
				
			}
			break;
		}
	}
}
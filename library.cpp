// Joshua Ford, John Goza, Scott Peery
// Project 2B

#include "library.hpp"

Library::Library(){
}

Library::~Library(){
	list<Employee*>::iterator it;
	for (it = employeeList.begin(); it != employeeList.end(); it++){
		delete *it;
	}
}

void Library::add_book(string newBook){
	Book tempBook(newBook);
	toBeCirculated.push_back(tempBook);
}

void Library::add_employee(string name){
	Employee *temp; 
	temp = new Employee(name);
	employeeList.push_front(temp);
}

void Library::circulate_book(string bookToMove, Date dayOfMove){
	list<Book>::iterator it;
	for (it = toBeCirculated.begin(); it != toBeCirculated.end(); it++){ // find book : O(n)
		if (it->getname() == bookToMove){ // this is the book
			it->populate_queue(employeeList); // create queue
			it->setstartDate(dayOfMove); // save start date
			Employee *next = it->top();
			break;
		}
	}
}

void Library::pass_on(string bookToMove, Date date){
	Employee *next, *prev; // prev is employee that is popped
	list<Book>::iterator it;
	for (it = toBeCirculated.begin(); it != toBeCirculated.end(); it++){ // find book : O(n)
		if (it->getname() == bookToMove){
			prev = it->pop_max(); // pop max, save to prev
			if (!it->isEmpty()){
				next = it->top(); // next is now max
				next->setWait(date - it->getstartDate()); // wait = current date - book start date
				prev->setRetain(next->getWait() - prev->getWait()); // retain = the wait of next employee - wait of this employee
			}
			else{ // circulation complete
				prev->setRetain((date - it->getstartDate()) - prev->getWait()); // if last employee, retain is difference of start and end date - wait
				it->setarchived(true);
				it->setendDate(date);
				archived.push_back(*it); // archive
				toBeCirculated.erase(it); // erase
			}
			break;
		}
	}
}
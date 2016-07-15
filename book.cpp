//
//  book.cpp
//  data2
//
//  Created by John Goza on 7/4/16.
//  Copyright © 2016 JohnGoza. All rights reserved.
//

#include "book.hpp"

Book::Book(){

}

Book::Book(string bookName){
	name = bookName;
}

Book::Book(string bookName,Date start){
	name = bookName;
	startDate = start;
}

Book::Book(const Book& other){
	name = other.name;
	startDate = other.startDate;
	endDate = other.endDate;
	archived = other.archived;
	waiting = other.waiting;
}

string Book::getname(){
	return name;
}
Date Book:: getstartDate(){
	return startDate;
}
Date Book::getendDate(){
	return endDate;
}
bool Book::getarchived(){
	return archived;
}

void Book::setname(string newName){
	name = newName;
}
void Book::setstartDate(Date newDate){
	startDate = newDate;
}
void Book::setendDate(Date newDate){
	endDate = newDate;
}
void Book::setarchived(bool newBool){
	archived = newBool;
}

void Book::populate_queue(const list<Employee> empList){
	list<Employee>::const_iterator it;
	for (it = empList.begin(); it != empList.end(); it++){ // add all current employees to queue
		waiting.addEmployee(*it);
	}
}

Employee Book::pop_next(){
	return waiting.pop();
}

Employee Book::top(){
	return waiting.top();
}

bool Book::isEmpty(){
	return waiting.empty();
}
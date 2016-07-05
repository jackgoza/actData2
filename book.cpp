//
//  book.cpp
//  data2
//
//  Created by John Goza on 7/4/16.
//  Copyright © 2016 JohnGoza. All rights reserved.
//

#include "book.hpp"

book::book(){

}

book::book(string bookName){
	name = bookName;
}

book::book(string bookName,Date start){
	name = bookName;
	startDate = start;
}

book::book(book& other){ // Why?
	name = other.name;
	startDate = other.startDate;
	endDate = other.endDate;
	archived = other.archived;
}

string book::getname(){
	return name;
}
Date book:: getstartDate(){
	return startDate;
}
Date book::getendDate(){
	return endDate;
}
bool book::getarchived(){
	return archived;
}

void book::setname(string newName){
	name = newName;
}
void book::setstartDate(Date newDate){
	startDate = newDate;
}
void book::setendDate(Date newDate){
	endDate = newDate;
}
void book::setarchived(bool newBool){
	archived = newBool;
}
//
//  employee.cpp
//  data2
//
//

#include "employee.hpp"

employee::employee(){
	name = "unknown";
	waitTime = 0;
	retainTime = 0;
}

employee::employee(string newName){
	name = newName;
	waitTime = 0;
	retainTime = 0;
}

string employee::getName(){
	return name;
}

void employee::setName(string newName){
	name = newName;
}


void employee::setWait(int wait){
	waitTime = wait;
}

void employee::setRetain(int retain){
	retainTime = retain;
}

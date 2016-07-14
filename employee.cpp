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
	priority = 0;
}

employee::employee(string newName){
	name = newName;
	waitTime = 0;
	retainTime = 0;
	priority = 0;
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

void employee::refreshPriority(){ // hate the fact that this is O(n). I doubt that's fixable though.
	
	priority = waitTime - retainTime;
}

bool operator<(const employee& lhs, const employee& rhs){
	return (lhs.priority < rhs.priority);
}

bool operator>(const employee& lhs, const employee& rhs){
	return (lhs.priority > rhs.priority);
}
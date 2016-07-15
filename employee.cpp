//
//  employee.cpp
//  data2
//
//

#include "employee.hpp"

Employee::Employee(){
	name = "unknown";
	waitTime = 0;
	retainTime = 0;
	priority = 0;
}

Employee::Employee(string newName){
	name = newName;
	waitTime = 0;
	retainTime = 0;
	priority = 0;
}

const Employee& Employee::operator = (const Employee& rhs){
	name = rhs.name;
	waitTime = rhs.waitTime;
	retainTime = rhs.retainTime;
	priority = rhs.priority;
	start = rhs.start;
	return *this;
}

void Employee::setName(string newName){
	name = newName;
}


void Employee::setWait(int wait){
	waitTime = wait;
}

void Employee::setRetain(int retain){
	retainTime = retain;
}

void Employee::setStart(Date date){
	start = date;
}

void Employee::refreshPriority(){ // hate the fact that this is O(n). I doubt that's fixable though.
	
	priority = waitTime - retainTime;
}

string Employee::getName(){
	return name;
}

int Employee::getWait(){
	return waitTime;
}

int Employee::getRetain(){
	return retainTime;
}

Date Employee::getStart(){
	return start;
}

int Employee::getPriority(){
	return priority;
}

bool operator<(const Employee& lhs, const Employee& rhs){
	return (lhs.priority < rhs.priority);
}

bool operator>(const Employee& lhs, const Employee& rhs){
	return (lhs.priority > rhs.priority);
}
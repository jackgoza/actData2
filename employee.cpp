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

string Employee::getName(){
	return name;
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

void Employee::refreshPriority(){ // hate the fact that this is O(n). I doubt that's fixable though.
	
	priority = waitTime - retainTime;
}

bool operator<(const Employee& lhs, const Employee& rhs){
	return (lhs.priority < rhs.priority);
}

bool operator>(const Employee& lhs, const Employee& rhs){
	return (lhs.priority > rhs.priority);
}
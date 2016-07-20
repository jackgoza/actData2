/* 
 
	Joshua Ford, John Goza, Scott Peery
	Project 2b
 
*/

#include "pQueue.hpp"

pQueue::pQueue(){}

void pQueue::addEmployee(Employee* temp){
	WorkQueue.push_back(temp);
}

Employee* pQueue::pop_max(){ // pulls highest priority from queue : O(n)
	Employee *max = *WorkQueue.begin(); // assume max is first element
	vector<Employee*>::iterator it, toErase;
	it = toErase = WorkQueue.begin(); 
	it++; // start at second element so we don't compare max to itself
	for (it; it != WorkQueue.end(); it++){
		if ((max->getWait() - max->getRetain()) < ((*it)->getWait() - (*it)->getRetain())){ // if new max is found, update pointers
			max = *it;
			toErase = it;
		}
	}
	WorkQueue.erase(toErase);
	return max;
}

Employee* pQueue::top(){ // O(n)
	Employee *max = *WorkQueue.begin(); // assume max is first element
	vector<Employee*>::iterator it = WorkQueue.begin();
	it++; // start at second element so we don't compare max to itself
	for (it; it != WorkQueue.end(); it++){
		if ((max->getWait() - max->getRetain()) < ((*it)->getWait() - (*it)->getRetain())){ // if new max is found, update pointer
			max = *it;
		}
	}
	return max;
}

bool pQueue::empty(){
	return WorkQueue.size() < 1;
}
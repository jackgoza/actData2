/* 
 
	SUPER IMPORTANT NOTE:
		There is no sorting until we need it. Sorting costs money. Using 
		stable_sort guarantees O(nlog^2(n)), which is fairly freaking good.
		And it saves us a ton of head scratching.
 
*/

#include "pQueue.hpp"

using namespace std;

pQueue::pQueue(){}

void pQueue::addEmployee(Employee* temp){
	WorkQueue.push_back(temp);
}

bool pQueue::removeEmployee(string nameOf){

	for (int i=0; i<WorkQueue.size(); i++){
		if (WorkQueue[i]->getName() == nameOf){
			WorkQueue.erase(WorkQueue.begin()+i);
			return true;
		}
	}
	return false;
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
		if ((max->getWait() - max->getRetain()) < ((*it)->getWait() - (*it)->getRetain())){ // if new max is found, update pointers
			max = *it;
		}
	}
	return max;
}

bool pQueue::empty(){
	return (WorkQueue.size() < 1);
}
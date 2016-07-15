/* 
 
	SUPER IMPORTANT NOTE:
		There is no sorting until we need it. Sorting costs money. Using 
		stable_sort guarantees O(nlog^2(n)), which is fairly freaking good.
		And it saves us a ton of head scratching.
 
*/

#include "pQueue.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

pQueue::pQueue(){}

const pQueue& pQueue::operator=(const pQueue& rhs){
	WorkQueue = rhs.WorkQueue;
	return *this;
}

void pQueue::addEmployee(Employee temp){
	WorkQueue.push_back(temp);
}

bool pQueue::removeEmployee(string nameOf){

	for (int i=0; i<WorkQueue.size(); i++){
		if (WorkQueue[i].getName()==nameOf){
			WorkQueue.erase(WorkQueue.begin()+i);
			return true;
		}
	}
	return false;
}

void pQueue::setQueueOrder(){
	for (int i=0; i<WorkQueue.size(); i++){
		WorkQueue[i].refreshPriority();
		cout << WorkQueue[i].getName() << " " << WorkQueue[i].getPriority() << endl;
	}
	stable_sort(WorkQueue.begin(), WorkQueue.end()); // This *should* work.
}

Employee pQueue::pop(){
	setQueueOrder(); // prioritize
	Employee next = WorkQueue.back(); // save highest priority
	WorkQueue.pop_back(); // delete from queue
	return next;
}

bool pQueue::empty(){
	return (WorkQueue.size() < 1);
}

Employee pQueue::top(){
	return WorkQueue.back();
}
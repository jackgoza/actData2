/* 
 
	SUPER IMPORTANT NOTE:
		There is no sorting until we need it. Sorting costs money. Using 
		stable_sort guarantees O(nlog^2(n)), which is fairly freaking good.
		And it saves us a ton of head scratching.
 
*/

#include "pQueue.hpp"
#include <vector>
#include <algorithm>

using namespace std;

/*
pQueue();
void addEmployee(employee temp);
bool removeEmployee(string nameOf);
void setQueueOrder();
*/

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
	}
	stable_sort(WorkQueue.begin(), WorkQueue.end()); // This *should* work.
}
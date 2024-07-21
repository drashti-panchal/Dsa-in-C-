

#include<bits/stdc++.h>
using namespace std;

int main(){
	//Priority Queue is a container that is similar to queue but it has the ability to sort the elements in ascending order.
	//All the operations in priority queue have time complexity 0(logn)
	//It does not allows you to iterate like vector.

	priority_queue<int> p;
	p.push(1);//{1}
	p.push(2);//{2}
	p.push(9);//{9,2,1}
	p.push(10);//{10,9,2,1}

	cout<<p.top()<<endl;//10
	p.pop();//{9,2,1}
	cout<<p.top()<<endl;//9

	//Even minimum priority queue can be made.

	priority_queue<int,vector<int>,greater<int> > pq;
	pq.push(1);//{1}
	pq.push(2);//{1,2}
	pq.push(9);//{1,2,9}
	pq.push(0);//{0,1,2,9}

	cout<<pq.top()<<endl;//0





	

}
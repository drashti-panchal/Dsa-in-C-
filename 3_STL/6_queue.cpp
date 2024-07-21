#include<bits/stdc++.h>
using namespace std;

int main(){
	//Queue is a container that is similar to stack but it has the ability to push the elements in front as well.
	//All the operations in queue have time complexity 0(1)
	queue<int> q;
	q.push(1);//{1}
	q.push(2);//{1,2}
	q.push(3);//{1,2,3}
	q.emplace(4);//{1,2,3,4}
	
	cout<<q.front()<<endl;//1
	cout<<q.back()<<endl;//4
	
	q.pop();//{2,3,4}
	
	cout<<q.front()<<endl;//2
	cout<<q.back()<<endl;//4
	
	queue<int> q1,q2;
	q1.swap(q2);
	
	return 0;
}
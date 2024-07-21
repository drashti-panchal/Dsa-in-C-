#include<bits/stdc++.h>
using namespace std;

int main(){
	//Deque is a container that is similar to vector but it has the ability to push the elements in front as well.
	deque<int> dq;
	dq.push_back(1);//{1}
	dq.emplace_back(2);//{1,2}
	dq.push_front(3);//{3,1,2}
	dq.emplace_front(4);//{4,3,1,2}
	
	for(auto it: dq){
		cout<<it<<" ";
	}
	
	return 0;
}
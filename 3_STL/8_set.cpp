#include<bits/stdc++.h>
using namespace std;

int main(){
	//Set is a container that stores unique elements and in sorted order.
	//takes cimplexity of logn.

	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(2);

	//find 

	auto it = s.find(3);

	//count

	int count = s.count(1);
	cout<<count<<endl;

	//erase
	s.erase(it);
	

	for(auto it:s){
		cout<<it<<" ";
	}

	return 0;
}
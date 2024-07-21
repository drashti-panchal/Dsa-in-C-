#include<bits/stdc++.h>
using namespace std;

int main(){


	//List is also an container and it has the ability to push the elements in front as well;

	list<int> ls;

	ls.push_back(1);//{1}
	ls.emplace_back(2);//{1,2}
	ls.push_front(3);//{3,1,2}
	ls.emplace_front(4);//{4,3,1,2}

	for(auto it: ls){
		cout<<it<<" ";
	}

	return 0;
}
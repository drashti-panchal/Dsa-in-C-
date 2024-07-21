#include<bits/stdc++.h>
using namespace std;

int main(){
	//Multiset is a container that stores elements in sorted order.

	multiset<int>s;

	s.insert(1);
	s.insert(1);
	s.insert(1);
	s.insert(2);


	// count

	cout<<s.count(1)<<endl;
	//deleting

	//s.erase(s.find(1));//only erases 1

	// s.erase(1);//erases all 1


	s.erase(s.find(1), s.find(2));//{2}



	



	for(auto it:s){
		cout<<it<<" ";
	}
	return 0;



	//unordered set  -> unique but not ordered

}
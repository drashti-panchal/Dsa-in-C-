#include<bits/stdc++.h>
using namespace std;

int main(){

	//Multimap is a container that stores elements in key value pair.
	//But the key can be non unique as well.

	//UnorderedMap is a container that stores elements in key value pair.
	//But in unordered manner and unique.

	multimap<int,int> m;

	m.insert(0,1);
	m.insert(0,1);


	for(auto it : m){
		cout<<it.first<<" "<<it.second<<endl;
	}


	return 0;
}
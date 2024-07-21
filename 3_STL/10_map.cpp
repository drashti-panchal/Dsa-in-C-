

#include<bits/stdc++.h>
using namespace std;
int main(){

	//Map is a container that stores elements in key value pair.
	//Keys are unique and values can be non unique
	//Stores in sorted order.

	map<int,int>m;
	m.insert({1,2});
	m.insert({2,2});
	m.insert({3,2});

	map<int , pair<string,int> >mp;
	mp.insert({1,{"Drashti",20}});
	mp.insert({2,{"Parth",21}});



	for(auto it:mp){
		cout<<it.first<<":"<<it.second.first<<" "<<it.second.second<<endl;
	}


	return 0;
}
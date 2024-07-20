#include<bits/stdc++.h>

using namespace std;


// STL is usually made up of 4 components.
// 1) Algorithms
// 2) Functions
// 3) Containers
// 4) Iterators




//About pairs: 
//Stores values in any data type in form of a pair.
int main(){
//Declaring a pair

pair<int,int> p ={1,3};
cout<<p.first<<" "<<p.second<<endl;

// Nested pairs

pair<int, pair<int,int> > p1={1,{3,4}};
cout<<p1.first<<" "<<p1.second.second<<endl;

// Make pair arrays

pair <float,int> arr[]={{5.5,2},{3.5,3},{4.5,4}};
cout<<arr[0].first;

return 0;

}
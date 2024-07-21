

#include<bits/stdc++.h>
using namespace std;

//VECTOR is a container also known as dynamic array.
//Even after declaring the size of an array whe can change it in runtime.


int main(){

// A) Declaring a vector.

vector<int> v;
vector<int> v1(5); //Declaring with vector size 5. {5}
vector<int> v2(5,10);//{5,5,5,5,5} //Declaring with vector size 5 and each with element 10v.push_back({3,4}).
vector<pair<int,int>> v3; 


//B) Add elements into vector.


//Adding single element.
v.push_back(1); //{1}
v.emplace_back(2); //{1,2}better than push back.

//Adding multiple elements

v3.push_back({3,4}); //{{3,4}}
v3.emplace_back(5,6);//{{3,4},{5,6}}

//Adding elements at a particular position.

v.insert(v.begin(),300); //{300,1,2} Inserts at the beginning.
v.insert(v.begin()+1,2,10); //{300,10,10,1,2} Inserts 10,10 at 1st position.

//C) Copying elements into one another
vector<int> v4(v2);


//D)Accessing elements of vector.

//Using indexing

cout<<v[0]<<endl; //{1}

//Using loop
// a) Using for each 
for(auto it:v3){
	cout<< it.first<<" "<<it.second<<endl;
}

// b) Using normal loop

for(auto it= v.begin(); it<v.end(); it++){
	cout<<*it<<endl;
}

cout<<v.back()<<endl; //{2} Last element


//E) Deleting elements from vector

v.erase(v.begin()); //{10,10,2}
v.erase(v.begin()+1);
v.pop_back();


//Other functions:
v.size();//Specifies the size of the vector.
v1.swap(v2);//Swaps the elements of the vector.
v1.clear();//Clears the vector.
v.empty();//Returns true if the vector is empty.

}
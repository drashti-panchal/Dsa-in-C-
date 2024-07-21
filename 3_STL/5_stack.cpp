

#include<bits/stdc++.h>
using namespace std;
int main(){

	// Stack is also a container which uses LIFO property.

	//All the operations in stack have time complexity 0(n)
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.emplace(4);

	cout<<s.top()<<endl; //4

	cout<<s.empty()<<endl; //false

	s.pop();

	cout<<s.top()<<endl; //3

	stack<int> st1,st2;
	st1.swap(st2);
}
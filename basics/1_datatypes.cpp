
#include<iostream>
using namespace std;

int main(){
	

	//int data type
	int num =10;
	cout<<"The number is: "<<num<<endl;

	//long 
	long nums = 100000000;
	cout<<"The number is: "<<nums<<endl;

	//long long
	long long number = 10000000000000000;
	cout<<"The number is: "<<number<<endl;

	//float
	float a =  1.23412342343;  // prints till 5 decimal
	cout<<"The number is: "<<a<<endl;

	//double
	double b = 1.23412342343; // prints till 5 decimal
	cout<<"The number is: "<<b<<endl;

	//string
	// string name;
	// cin>>name;
	// cout<<"The name is: "<<name<<endl; // Only prints before space
	

	//getline
	string name2;
	getline(cin,name2);
	cout<<"The name is: "<<name2<<endl;


	
	return 0;
}
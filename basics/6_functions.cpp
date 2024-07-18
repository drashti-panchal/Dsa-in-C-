#include<iostream>
using namespace std;

//Types of functions:
//Void
//Return type
//Parameterized
//Non-Parameterized

//PASS BY VALUE

int add(int a ,int b){
	return a+b;
}

//PASS BY Reference

void printNum(int &num){
	num=num+10;
	cout<<num<<endl;

}
int main(){

        // cout<<add(6,7)<<endl;

	int num = 10;
	printNum(num);
	cout<<num<<endl;

}


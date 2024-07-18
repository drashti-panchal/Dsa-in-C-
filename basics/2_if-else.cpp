#include<iostream>
using namespace std;

int main(){

	// adult or not

	int age;
	cout<<"Enter your age:";
	cin>>age;
	if(age<=18){
		cout<<"You are an adult";
	}
	else{
		cout<<"You are not an adult";
	}

	// grading system

	int marks;
	cout<<"Enter your marks:";
	cin>>marks;
	if(marks<25){
		cout<<"You received F grade";
	}
	else if(marks>=25 && marks<=44){
		cout<<"You received E grade";
	}
	else if(marks>=45 && marks<=49){
		cout<<"You received D grade";
	}
	else if(marks>=50 && marks<=59){
		cout<<"You received C grade";
	}
	else if(marks>=60 && marks<=79){
		cout<<"You received B grade";
	}
	else{
		cout<<"You received A grade";
	}

	// Retired or not

	int age;
	cout<<"Enter your age:";
	cin>>age;
	if(age<18){
		cout<<"You are not eligible for job";
	}
	else if(age>=18 && age<=54){
		cout<<"You are eligible for job";

		if(age>=55 && age<=57){

		cout<<", but retirement soon";
		}
		
		
	}
	else{
		cout<<"Retirement time";
	} 
			
		
			
		
}
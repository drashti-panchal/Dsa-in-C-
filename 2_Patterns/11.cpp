//1
//0 1
//1 0 1
//0 1 0 1
//1 0 1 0 1

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number:";
	cin>>n;
	for(int i=0;i<n;i++){

		int stars=1;
		if(i%2==0){
			stars=1;
		}
		else{
			stars=0;
		}
		for(int j=0;j<i+1;j++){
			cout<<stars<<" ";
			stars=1-stars;

		}
		cout<<endl;

	}

	return 0;
}
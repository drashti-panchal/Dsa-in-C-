
//       A
//     A B A
//   A B C B A
// A B C D C B A
//A B C D E D C B A


#include<iostream>
using namespace std;

int main(){

	int n= 5;
	for(int i=0;i<n;i++){


		//space
		for(int j=0;j<=n-i-1;j++){
			cout<<" ";
		}
	int breakpoint=(2*i+1)/2;
	char start='A';

		//print
		for(int j=1;j<=2*i+1;j++){
			cout<<start<<" ";
			if(j<=breakpoint){

				start++;
			}
			else{
				start--;
			}
			
		}

		
		//space
		for(int j=0;j<=n-i-1;j++){
			cout<<" ";
		}
	cout<<endl;
	
	}
	return 0;
}
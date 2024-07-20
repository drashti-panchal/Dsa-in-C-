



// * * * * * * * * * * 
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *




#include<iostream>
using namespace std;

int main(){

	int start=0;
	int n=5;

	for(int i=0;i<n;i++){
		//stars
		for(int j=0;j<n-i;j++){
			cout<<"*";
		}

		//spaces
		for(int j=0;j<start;j++){
			cout<<" ";
		}

		//stars
		for(int j=0;j<n-i;j++){
			cout<<"*";
		}

		cout<<endl;
		start+=2;
		}
	
	start=8;
	for(int i=0;i<n;i++){

		//stars
		for(int j=0;j<i+1;j++){
			cout<<"*";
		}

		//spaces
		for(int j=0;j<start;j++){
			cout<<" ";
		}

		//stars
		for(int j=0;j<i+1;j++){
			cout<<"*";
		}

		cout<<endl;
		start-=2;
	}



		return 0;
	}


	
	

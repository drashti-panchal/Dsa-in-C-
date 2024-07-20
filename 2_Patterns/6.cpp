



// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1



#include<iostream>

using namespace std;

int a=1;
int main(){
	for (int i=0;i<5;i++){
		a=1;
		for(int j=5;j>i;j--){
			cout<<a++<<" ";
		}

		cout<<endl;
		                      
	}
}

// A B C D E
// A B C D
// A B C
// A B
// A

#include <iostream>
using namespace std;

int main(){

	char start ='A';
	for(int i=0;i<5;i++){
		for(int j=5;j>i;j--){
			cout<<start<<" ";
			start++;
		}

		cout<<endl;
		start ='A';
	}
	return 0;
}
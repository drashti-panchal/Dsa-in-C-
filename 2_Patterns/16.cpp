
// A
// B B
// C C C
// D D D D
// E E E E E

#include <iostream>
using namespace std;
int main(){
	char start='A';

	for(int i=0;i<5;i++){
		for(int j=0;j<i+1;j++){
			cout<<start<<" ";
			
		}
	cout<<endl;
	start++;
	}
	return 0;

}
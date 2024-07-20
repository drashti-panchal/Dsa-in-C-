
// A
// A B
// A B C
// A B C D
// A B C D E

#include <iostream>
using namespace std;
int main(){
	char start='A';

	for(int i=0;i<5;i++){
		for(int j=0;j<i+1;j++){
			cout<<start<<"";
			start++;
		}
	cout<<endl;
	start='A';
	}
	return 0;

}
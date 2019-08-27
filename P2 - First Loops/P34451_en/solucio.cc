#include <iostream>

using namespace std;

int main() {
	int x,num;
	cin >>x;
	int multiples=0;
	while (cin >>num) {
		if(num%x==0) ++multiples;
	}
	cout<<multiples<<endl;
}

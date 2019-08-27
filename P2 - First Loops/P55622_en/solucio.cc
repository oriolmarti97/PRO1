#include <iostream>

using namespace std;

int main() {
	int n;
	cin >>n;
	int digits=0;
	cout<<"The number of digits of "<<n<<" is ";
	while(n!=0) {
		++digits;
		n/=10;
	}
	if (digits==0) digits=1;
	cout<<digits<<'.'<<endl;
}

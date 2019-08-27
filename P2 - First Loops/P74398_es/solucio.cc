#include <iostream>

using namespace std;

int main() {
	int n;
	cin >>n;
	for (int i=2;i<=16;++i) {
		int nn=n;
		int digits=0;
		while (nn!=0) {
			++digits;
			nn/=i;
		}
		if (digits==0) digits=1;
		cout<<"Base "<<i<<": "<<digits<<" cifras."<<endl;
	}
}

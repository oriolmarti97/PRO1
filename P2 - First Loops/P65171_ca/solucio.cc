#include <iostream>

using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	int n;
	cin >>n;
	double suma, sumaq;
	suma=sumaq=0;
	for (int i=0;i<n;++i) {
		double x;
		cin >>x;
		suma+=x;
		sumaq+=x*x;
	}
	double res=1.0/(n-1)*sumaq-1.0/(n*(n-1))*(suma*suma);
	cout<<res<<endl;
}

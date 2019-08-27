#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >>x>>y;
	int xx, yy; //xx serà el més gran. yy el més petit
	if (x>y) {
		xx=x;
		yy=y;
	}
	else {
		xx=y;
		yy=x;
	}
	for (int i=xx;i>=yy;--i)
		cout<<i<<endl;
}

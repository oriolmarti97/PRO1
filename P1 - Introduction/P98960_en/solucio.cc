#include <iostream>

using namespace std;

int main(){
	char c, res;
	cin >>c;
	if (c>='a' and c<='z'){
		res=c-'a'+'A';
	}
	else {
		res=c-'A'+'a';
	}
	cout<<res<<endl;
}

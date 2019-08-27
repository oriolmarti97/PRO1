#include <iostream>

using namespace std;

/*
 * Opció 1: declarar a i b com a double
 * Opció 2: conversió explícita de la suma (double(a+b)/2)
 * Opció 3: desar-la en un double
 * Opció 4: dividir entre 2.0
 */
int main() {
	int a, b;
	cin >>a>>b;
	cout<<(a+b)/2.0<<endl;
}

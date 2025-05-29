#include <iostream>
using namespace std;

int main(){
	int a, b, n, t, suma, i;
	a = 0;
	b = 1;
    suma = 0;
	
	cout << "Ingrese el valor de n" << endl;
	cin >> n;
	cout << "Los primeros n terminos de la serie Fibonacci son:" << endl;
	
	for (i=1; i<=n; i++) {
		t = a + b;
		cout << t << " ";
		a = b;
		b = t;
        suma = suma + t;
	}
	
    cout << endl << "La suma de los terminos generados es: " << suma;
	return 0;
}
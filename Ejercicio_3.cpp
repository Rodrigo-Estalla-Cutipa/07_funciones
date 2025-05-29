#include <iostream>
using namespace std;

void operacion(int);
void suma(int);

int main(){
	int n;
	
	cout << "Ingrese el valor de n" << endl;
	cin >> n;
	cout << "Los primeros n terminos de la serie Fibonacci son:" << endl;
	
	operacion(n);

	return 0;
}

void operacion(int n){
	int a, b, t, s, i;
	a = 0;
	b = 1;
	s = 0;

	for (i=1; i<=n; i++) {
		t = a + b;
		cout << t << " ";
		a = b;
		b = t;
        s = s + t;
	}
	suma(s);
}

void suma(int s){
	cout << endl << "La suma de los terminos generados es: " << s;
}
#include <iostream>
using namespace std;

int factorial(int);

int main(){
	int m, n, c;
    cout << "CALCULAR COMBINATORIA DE DOS NUMEROS" << endl;
    cout << "Ingrese el valor de m: ";
	cin >> m;
    cout << "Ingrese el valor de n: ";
    cin >> n;

	c = factorial(m) / (factorial(n) * factorial (m-n));

	cout << "El resultado de la combinatoria es: " << c;
	return 0;
}

int factorial(int n){
	int f, i;
    f = 1;
	for (i=2; i<=n; i++){
		f = f*i;
	}
    return f;
}
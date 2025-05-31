#include <iostream>
using namespace std;

int comprobar(int);
int calculo(int);

int main(){
    int a,b,r1,r2;

    cout << "Ingrese el primer numero:" << endl;
    cin >> a;
    cout << "Ingrese el segundo numero:" << endl;
    cin >> b;

    a = comprobar(a);
    b = comprobar(b);

    r1 = calculo(a);
    r2 = calculo(b);

    if (r1==b && r2==a) {
        cout << "RESULTADO:" << endl << "Los numeros son amigos";
    } else {
        cout << "RESULTADO:" << endl << "Los numeros no son amigos";
    }

    return 0;
}

int comprobar(int n){
    while (n<=0) {
        cout << "ERROR: debe ingresar numeros enteros positivos" << endl;
        cout << "No se acepta " << n << " Ingrese otro numero en su lugar: ";
        cin >> n;
    }
    return n;
}

int calculo(int n){
    int s,i;
    s = 0;

    for (i=1; i<n;i++) {
        if (n % i == 0) {
            s = s + i;
        }
    }
    return s;
}
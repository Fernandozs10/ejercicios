#include <iostream>

using namespace std;

int main()
{
    //ejercicio 2.16
    int x;
    int y;
    cout << "ingresa un numero" << endl;
    cin >> x;
    cout << "ingresa un segundo numero" << endl;
    cin >> y;
    int sum=x+y;
    int res=x-y;
    int mul=x*y;
    int div= x/y;
    cout << "la suma es : " << sum <<endl;
    cout << "la diferencia es : " << res<< endl;
    cout << "el producto es : " << mul<< endl;
    cout << "el cociente es : " << div<< endl;
    //ejercicio 2.17
    /*char a[] = "1   2   3   4";
    char b= '1';
    char c= '2';
    char d= '3';
    char e= '4';
    //a
    cout << a << endl;
    //b
    cout << b << "\t" << c << "\t" << d << "\t" << e << endl;
    //c
    cout << b << "\t";
    cout << c << "\t";
    cout << d << "\t";
    cout << e << "\t"<< endl;*/
    //ejercicio 2.18
    /*int r;
    int t;
    cout << "ingresa un numero"<<endl;
    cin >> r;
    cout << "ingresa un segundo numero"<<endl;
    cin >> t;
    if (r > t) {
        cout << r << "es el mayor" << endl;
    }
    if (r == t) {
        cout << "son iguales" << endl;
    }
    else
        cout << t << "es el mayor ";*/
    //ejercicio 2.19
    /*int h;
    int n;
    int m;
    cout << "ingresa tres numero diferentes : ";
    cin >> h  >> n >> m;
    int suma=h+n+m;
    cout << "la suma es: " << suma<< endl;
    int promedio=(h+n+m)/3;
    cout << "el promedio es: " << promedio<< endl;
    int producto=h*n*m;
    cout << "el producto es: " << producto<<endl;
    if (h > n && h > m) {
        cout << h << "  es el mayor"<<endl;
    }
    else if (n > h && n > m) {
        cout << n << "  es el mayor"<<endl;
    }
    else
        cout << m << "  es el mayor  "<<endl;*/
    //ejercicio 2.27
    /*char q;
    cout << "ingresa un caracter: " << endl;
    cin >> q;
    cout << static_cast<int>(q)<< endl;*/
    //ejercicio 2.28
    /*int i;
    cout << "ingresa un entero de 5 digitos: "<<endl;
    cin>>i;
    int pri = i / 10000;
    int seg = (i % 10000)/1000;
    int tri = (i % 10000)%1000/100;
    int cua =  ((i % 10000)%1000)% 100 / 10;
    int quin = (((i % 10000)%1000)%100)%10;
    cout << pri << "\t" << seg << "\t" << tri << "\t" << cua << "\t" << quin << endl;*/
    //ejercicio 2.29
    int a=0;
    int b = a * a;
    int c = a * a * a;
    for (a = 1; a <= 10; a++) {
        cout << a << "\t"<< a * a << "\t" << a * a * a << "\t" <<endl;
    }
    return 0;
}
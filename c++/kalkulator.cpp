/*
 * kalkulator.cpp
 */


#include <iostream>

using namespace std;

void dodaj(){
    int a, b;
    cout <<"Podaj dwie liczby: "<< endl;
    cin >> a >> b;
    cout << "Suma: " << a + b<<endl;
    }
void odejmij(){
    int a, b;
    cout <<"Podaj dwie liczby: "<< endl;
    cin >> a >> b;
    cout << "Różnica: " << a - b<<endl;
    }
void pomnoz(){
    int a, b;
    cout <<"Podaj dwie liczby: "<< endl;
    cin >> a >> b;
    cout << "Iloczyn: " << a * b<<endl;
    }
    void podziel(){
    int a, b;
    cout <<"Podaj dwie liczby: "<< endl;
    cin >> a >> b;
    cout << "Iloraz: " << a / b<<endl;
    }
int main(int argc, char **argv)
{
	char operacja;
    cout << "Podaj działanie jakie chcesz wykonać(+, -, *, /)?" << endl;
    cin >> operacja;
    switch(operacja){
        case '+':
            dodaj();
        break;
        case'-':
            odejmij();
        break;
        case '*':
            pomnoz();
        break;
        case'/';
            podziel();
        break;
        default:
            cout << "Nie rozumiem!" << endl;
        break;
        }
	return 0;
}


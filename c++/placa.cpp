/*
 * placa.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	float a, b, p;
    cout << "Podaj liczbę nadgodzin: ";
    cin >> a;
    cout << "Podaj stawkę za jedną nadgodzine: ";
    cin >> b;
    if ( a < 30) {
        p = a * b;
        cin >> p;
        cout << p; 
        } else if ( a > 30){
            p = a * (b * 0,5);
            cin >> p;
            cout << p;
            }
    
	return 0;
}


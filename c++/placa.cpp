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
    if ( a <= 30) {
        cin >> p = (a * b);
        cout << p; 
        } else if ( a > 30){
            cin >> p = a * (b * 1,5);
            cout << p;
            } 
    
	return 0;
}


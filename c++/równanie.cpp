/*
 * równanie.cpp
 * 
 * Copyright 2019  <> 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    
    int a;
    int b;
    float x;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "Nieskończenie wiele rozwiązań";
            } else {
                cout << "równanie sprzeczne";
            }
            
    } else {
        x = -b/(float)a;
        cout << x;
    }
	return 0;
}


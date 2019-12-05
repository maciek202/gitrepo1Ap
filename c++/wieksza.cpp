/*
 * wieksza.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int a, b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "podaj liczbe b: ";
    cin >> b;
    if (a > b) {
        cout << "a > b";
    } else if(b > a) { 
        cout << " a < b";
    } else {
        cout << " a = b";
        }
       
	return 0;
}


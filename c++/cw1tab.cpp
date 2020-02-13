/*
 * cw1tab.cpp
 */


#include <iostream>
using namespace std;

void pobierzLiczby(int t[], int n){
    for (int i = 0; i < n; i++){
        cout << "Podaj liczbe: ";
        cin >> t[i];
        }
    
    }
void drukuj(int t[], int n){
     for (int i = 0; i < n; i++){
         cout << t[i] << " ";
    cout << endl;
         }
    
    }    
void sumujTab(int t[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++){
        suma = suma + t[i];
        cout << suma << endl;
        }
    
    }
int main(int argc, char **argv)
{
	int n = 5;
    int t1[n];
    int t2[n];
    pobierzLiczby(t1, n);
    pobierzLiczby(t2, n);
    drukuj(t1, n);
    drukuj(t2, n);
    sumujTab(t1, n);
    sumujTab(t2, n);
	return 0;
}


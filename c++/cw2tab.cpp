/*
 * cw2tab.cpp
 */


#include <iostream>
using namespace std;

void wypelnij(int t[][10], int w, int k, int n){
    srand(time(NULL));
    cout << rand() % (n + 1) << endl;
    }

int main(int argc, char **argv)
{
	int n = 0;
    cout << "Podaj wartość max: ";
    cin >> n;
    int w = 5;
    int k = 10;
    int tab[w][10];
    wypelnij(tab, w, k, n);
    
	return 0;
}


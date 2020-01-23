#!/usr/bin/env python
# -*- coding: utf-8 -*-

def pobierzliczbe():
    liczba1 = int(input("Podaj pierwszą liczbe: "))
    return liczba1
    
def pobierzliczbe2():
    liczba2 = int(input("Podaj drugą liczbe: "))
    return liczba2
    
def dodawanie():
    liczba1 = pobierzliczbe()
    liczba2 = pobierzliczbe2()
    suma = liczba1 + liczba2
    print("Suma: ",suma)
    
def odejmowanie():
    liczba1 = pobierzliczbe()
    liczba2 = pobierzliczbe2()
    roznica = liczba1 - liczba2
    print("Różnica: ",roznica)
    
def mnozenie():
    liczba1 = pobierzliczbe()
    liczba2 = pobierzliczbe2()
    iloczyn = liczba1 * liczba2
    print("Iloczyn: ",iloczyn)
    
def dzielenie():
    liczba1 = pobierzliczbe()
    liczba2 = pobierzliczbe2()
    iloraz = liczba1 / liczba2
    print("Iloraz: ",iloraz)
    
    
def main(args):    
    oper = input("Podaj operacje jaką schcesz wykonać +, -, /, * ")
    if oper == "+":
        dodawanie()
    elif oper == "-":
        odejmowanie()
    elif oper == "/":
        dzielenie()
    elif oper == "*":
        mnozenie()
    elif oper != "+" or oper != "-" or oper != "*" or oper != "/":
        print("Nie rozumiem!")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

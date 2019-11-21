#!/usr/bin/env python
# -*- coding: utf-8 -*-

def main(args):
    liczba = int(input("Podaj liczbę do której chcesz kwadraty liczb: "))
    for i in range(0, liczba  + 1):
        print(i*i)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

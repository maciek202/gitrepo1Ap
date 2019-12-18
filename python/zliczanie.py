#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    a = int(input("Podaj liczbe: "))
    licz5 = 0
    licz7 = 0        
    while a != 0:
        if a % 5 == 0:
            licz5 = licz5 + 1
        if a % 7 == 0:
            licz7 = licz7 + 1
        a = int(input("Podaj liczbe: "))
    print("Podzielonych przez 5: ", licz5)
    print("Podzielonych przez 7: ", licz7)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

#!/usr/bin/env python
# -*- coding: utf-8 -*-



def main(args):
    a = int(input("Podaj liczbe:"))
    b = int(input("Podaj liczbe:"))
    if a > b:
        print("a > b")
    elif b > a:
        print("b > a")
    else:
        print("a = b")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

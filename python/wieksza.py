#!/usr/bin/env python
# -*- coding: utf-8 -*-



def main(args):
    a = input("Podaj liczbe:")
    b = input("Podaj liczbe:")
    if a > b:
        print(a)
    else:
        print(b)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

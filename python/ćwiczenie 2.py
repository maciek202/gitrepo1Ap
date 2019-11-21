#!/usr/bin/env python
# -*- coding: utf-8 -*-

def main(args):
    n = int(input("Podaj liczbę n: "))
    m = int(input("Podaj liczbę m: "))
    if n >0 and m>0 and m > n:
        for i in range(n, m + 1):
            print(i," ",end = "")
    else:        
         print("Miała być naturalna!!!")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

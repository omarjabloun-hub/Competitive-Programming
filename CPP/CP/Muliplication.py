
from ast import While
from re import X


t=input();
number1 = input()
number2 = input()
   
    
if number1.length > number2.length:
    multiply(number1, number2) 

def multiply(a , b):
    x=int (a)
    ans = b
    while x > 0 :
        ansi= ""
        for item in b[::-1]:
            c= int(b[item]) + int(ans[ item])
            if c > 9:            
                c=str(c)
                ansi[-1]
        x=x-1          
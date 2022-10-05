
from array import *

tc = int(input())
while(tc >= 0) :
    tc-=1 
    
    n = int(input())
    
    l = []
    M = [[]]
    
    for i in range(3) :
        
        for j in range(n) :
            word = input()
            l.append(word)
            M[i]+=
    
    score = [0]*3
    
    for i  in range (3) :
        for i in range(n) :
            c = l.count(M[i][j])
            if c == 1 :
                score[i] += 3
            elif c == 2 : 
                score[i] += 1 
            elif c == 3 :
                score[i] +=0
    
    for i in range(3 ) : 
        print(score[i] , " ")
       
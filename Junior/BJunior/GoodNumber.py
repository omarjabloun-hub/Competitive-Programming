n = int (input ( ))
k = int (input ( ))
nb = 0
for i in range(n) :
        c = input( )
        ok = True
        
        for j in c :
            if int(j) not in range(0 , k+1)  :
                ok =False
        if ok : 
            nb +=1

print (nb)

n = input()

nb = 0
while len(str(n)) > 1 :
    nb += 1
    s= 0 
    for i in range(len(n)) :
        s+= int(n[i])
    n =str ( s ) 

print(nb)
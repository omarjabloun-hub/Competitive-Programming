n = 10
primeFactor = set()
i = 2

while (n > 1) :
    print(n)
    if(n % i == 0) :
        primeFactor.add(i)
        n=int(n/i)
    else :
        i+=1

print(primeFactor)
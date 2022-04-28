
def Comb(N , M):
    C = 1.0
    f = 1
    y = M
    x = N
    for i in range(M) :
        C = C * x/y
        x -=1
        y -=1
        
    return C 



N=1
M = 0
while  N!= 0   :
    N , M =map(int , input().split())
    if M > N /2 :
        C = Comb(N, N - M)
    else :
        C =  Comb(N, M)
        
    if N != 0 :    
        print("%d things taken %d at a time is %d exactly." % (N , M , C))
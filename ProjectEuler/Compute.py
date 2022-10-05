#solution in O(1000)
s=0
for i in range(1000) :
    if i % 3 == 0 or  i % 5 == 0 :
        s+= i 
print( s )

#Solution in O(1)
Three = 333*334*3/2 

Five = 200*199*5/2
ThreeFive = 66 * 67 * 15 / 2

s =int( Three + Five - ThreeFive )
print (s)
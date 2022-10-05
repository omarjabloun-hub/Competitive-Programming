import math
lastLCM = 1
for i in range(1,20) : 
    lastLCM = math.lcm(i,lastLCM)
    
print(lastLCM)
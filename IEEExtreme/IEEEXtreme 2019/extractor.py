str = raw_input();
n = len(str)

def position(string,let):
    for i in range(len(string)-1,-1,-1):
        if(string[i] == let):
            return i
out = 0
check = True
for i in range(n):
    print (str[n-1:i:-1]) 
     
    if str[i] in str[n-1:i:-1]:
        n = position(str,str[i])
        #print pos
        if(n==0):
            check = False
            break  
        out+=1
if check== False:
    print 2*out
else:
    print 2*out+1

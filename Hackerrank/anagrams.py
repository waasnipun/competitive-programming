s = list(raw_input().strip())
#s = sorted(s)
out = 0
taken = []
for i in range(len(s)):
    for j in range(i+1,len(s)+1):
        tempx = "".join(sorted(s[i:j]))
        tempy = "".join(sorted(s[0:i]+s[j:]))
        #print tempx,tempy
        if tempx in tempy and tempx not in taken:
            out+=1
            #print tempx,tempy
            taken.append(tempx)
print out
            

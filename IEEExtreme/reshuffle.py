n = input()
arr = []
for i in range(n):
    it = 0
    count = 0
    sr = list(raw_input())
    while it<5:
        for j in range(len(sr)-1):
            for l in range(len(sr)-1,0,-1):
                if sr[l]==sr[0]:
                    temp = sr.pop()
                    sr.insert(0,temp)
                else:
                    break
            if j==len(sr)-1:
                a = sr[j]
                b = sr[0]
                c = sr[j-1]
            if j==0:
                a = sr[j]
                b = sr[j+1]
                c = sr[len(sr)-1]
            else:
                a = sr[j]
                b = sr[j+1]
                c = sr[j-1]
            if a!=b and a!=c:
                for k in range(j+1,len(sr)):
                    if a==sr[k]:
                        sr[j+1] = sr[k]
                        sr[k] = b
                        count+=1
                        break
            elif a!=b and a==c and j>0 and j<len(sr)-1:
                for k in range(j+1,len(sr)):
                    if a==sr[k]:
                        sr[j+1] = sr[k]
                        sr[k] = b
                        count+=1
                        break
                
            #print sr
            it+=1
    print count*2

            
                    
            

        
           
       

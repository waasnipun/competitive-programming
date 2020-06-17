t = int(input())
for i in range(t):
    n,r,c,sr,sc = list(map(int,input().split()))
    arr = list(str(input()))
    dic = {}
    dic[str(sr)+str(sc)]=1
    for j in range(n):
    	if arr[j]=="E":
    		sc+=1
    		if str(sr)+str(sc) in dic:
    			while True:
    				sc+=1
    				if str(sr)+str(sc) not in dic:
    					dic[str(sr)+str(sc)]=1
    					break
    		else:
    			dic[str(sr)+str(sc)]=1    		
    	elif arr[j]=="W":
    		sc-=1
    		if str(sr)+str(sc) in dic:
    			while True:
    				sc-=1
    				if str(sr)+str(sc) not in dic:
    					dic[str(sr)+str(sc)]=1
    					break
    		else:
    			dic[str(sr)+str(sc)]=1    
    	elif arr[j]=="N":
    		sr-=1
    		if str(sr)+str(sc) in dic:
    			while True:
    				sr-=1
    				if str(sr)+str(sc) not in dic:
    					dic[str(sr)+str(sc)]=1
    					break
    		else:
    			dic[str(sr)+str(sc)]=1    
    	else:
    		sr+=1
    		if str(sr)+str(sc) in dic:
    			while True:
    				sr+=1
    				if str(sr)+str(sc) not in dic:
    					dic[str(sr)+str(sc)]=1
    					break
    		else:
    			dic[str(sr)+str(sc)]=1    
    print("Case #"+str(i+1)+": "+str(sr)+" "+str(sc))
    
n = int(input())
s = list(input())
q = int(input())
out = []
for i in range(q):
	c,x,y = list(map(str,input().split()))
	if int(c)==1:
		s[int(x)-1]= y
	else:
		arr = set(s[int(x)-1:int(y)])
		out.append((len(arr)))
for i in out:
	print(i)

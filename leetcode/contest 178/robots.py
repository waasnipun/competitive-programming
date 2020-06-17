n = int(input())
robo = list(map(int,input().split()))
bio  = list(map(int,input().split()))
r = []
b = []
same = []
for i in range(n):
	if robo[i]==bio[i] and robo[i]==1:
		same.append(i)
	elif robo[i]==1 and bio[i]==0:
		r.append(i)
	elif robo[i]==0 and bio[i]==1:
		b.append(i)
win = {}
if len(r)>0:
	win[r[0]] = len(b)+1
	for i in r[1:]:
		win[i] = 1
if len(r)==0:
	print("-1")
else:
	for i in same:
		win[i] = 1
	for i in b:
		win[i] = 1
	maxi = max(win.values())
	if len(r)==1:
		print(maxi)
	elif int(maxi) %2==0:
		print(int(maxi/len(r)))
	else:
		print(int(maxi/len(r))+1)

	

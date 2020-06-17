arr = []
for i in range(3):
	te = list(map(int,input().split()))
	arr.append(te)
n = int(input())
check = []
for i in range(n):
	x = int(input())
	for j in range(3):
		for k in range(3):
			if arr[j][k]==x:
				arr[j][k] = 0
yes = False
for j in range(3):
	c = 0
	for k in range(3):
		if arr[j][k]==0:
			c+=1
	if c==3:
		yes = True
		break
	
if yes==False:
	for j in range(3):
		c = 0
		for k in range(3):
			if arr[k][j]==0:
				c+=1
		if c==3:
			yes = True
			break
if yes==False:
	c = 0
	for j in range(3):		
		if arr[j][j]==0:
			c+=1
	if c==3:
		yes = True
if yes==False:
	c = 0
	for j in range(3):		
		if arr[j][2-j]==0:
			c+=1
	if c==3:
		yes = True
if yes:
	print("Yes")
else:
	print("No")					
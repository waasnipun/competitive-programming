n,m,k = list(map(int,input().split()))
a = list(map(int,input().split()))
b = list(map(int,input().split()))
c =[]
for i in a:
	temp  = []
	for j in b:
		temp.append(i*j)
	c.append(temp)
count = 0
if k<=m:
	for i in c:
		track = 0
		for j in i:
			if j ==1:
				track+=1
				if track==k:
					count+=1
					track -= 1
			elif j==0:
				track = 0
if k<=n:
	for i in range(m):
		track = 0
		for j in range(n):
			if c[j][i] ==1:
				track+=1
				if track==k:
					count+=1
					track -= 1
			elif c[j][i]==0:
				track = 0

for i in range(n):
	for j in range(m):
		track = 0
		for x in range(i,i+int(k/2)):
			for l in range(j,j+int(k/2)):
				if l<m and x<n and c[x][l]==1:
					track +=1
				elif l<m and x<n and c[x][l]==0:
					track -=1
		if track==k:
			count+=1
			break							



print(count)





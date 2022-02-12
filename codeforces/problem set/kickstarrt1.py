t = int(input())
for i in range(t):
	n,k,p = list(map(int,input().split()))
	arr = []
	for j in range(n):
		temp = list(map(int,input().split()))
		tempi = [temp[0]]
		for q in range(1,k):
			tempi.append(tempi[q-1]+temp[q])
		arr.append(tempi)
	dic = {}
	val = []
	for j in range(n):
		val = val + arr[j]
		for q in range(k):
			key = str(j+1)+str(q+1)
			if arr[j][q] in dic:
				dic[arr[j][q]].append(key)
			else:
				dic[arr[j][q]] = [key]

	val.sort()
	val.reverse()
	ans = 0
	for j in range(len(val)):
		for g in range(j+1,len(val)):
			for c in dic[val[j]]:
				for d in dic[val[g]]:
					plates_1 = int(c[1]) 
					row_1 = int(c[0])
					plates_2 = int(d[1]) 
					row_2 = int(d[0])
					if plates_2+plates_1 == p and row_2!=row_1:
						if val[j]+val[g]>ans:
							ans = val[j]+val[g]

	print("Case #"+str(i+1)+": "+str(ans))



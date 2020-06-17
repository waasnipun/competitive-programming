t = int(input())
for i in range(t):
	n = int(input())
	arr = list(map(int,input().split()))
	sum = 0
	for j in range(n):
		sum+=arr[j]
		if arr[j]%2==0:
			print(1)
			print(j+1)
			break
		elif sum%2==0:
			print(j+1)
			print(" ".join(map(str,[l for l in range(1,j+2)])))
			break
	else:
		print(-1)

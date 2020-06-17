n,m = list(map(int,input().split()))
arr = []
for i in range(n):
	arr.append(0)
for i in range(m):
	x,y = list(map(int,input().split()))
	if arr[x-1]==0:
		arr[x-1] = y
	elif arr[x-1]>y:
		arr[x-1] = y
ans = ""
if len(arr)==1 and arr[0]==0:
	ans = "0"
elif len(arr)==1:
	ans = str(arr[0])
else:
	for i in range(len(arr)):
		if arr[i]>0:
			ans = "".join([str(k) for k in arr[i:]])
			break
if len(ans)==n:
	print(ans)
else:
	print("-1")
import math
n = int(input())
num1 = []
diff1 = {}
for i in range(1,int(math.sqrt(n+1))+1):
	if (n+1)%i==0:
		num1.append([i,int((n+1)/i)])
		diff1[abs(i-int((n+1)/i))] = [i,int((n+1)/i)]
num2 = []
diff2 = {}
for i in range(1,int(math.sqrt(n+2))+1):
	if (n+2)%i==0:
		num2.append([i,int((n+2)/i)])
		diff2[abs(i-int((n+2)/i))] = [i,int((n+2)/i)]
for i in diff1.keys():
	if diff2.get(i)==None:
		diff2[i] = diff1[i]
	else:
		diff2[i] = min(diff1[i],diff2[i])
mini = min(diff2.keys())
print( diff2[mini])

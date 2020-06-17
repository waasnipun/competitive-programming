n = input()
list1 = list(map(int,input().split()))
m = input()
list2 = list(map(int,input().split()))
dic = {}
list2.sort()
for i in list2:
	check = dic.get(i,0)
	if not(check):
		dic[i] = 1
	else:
		dic[i]+=1
output = []
for i in list1:
	dic[i]-=1
outputt = []
for i in dic.keys():
	if dic[i]!=0:
		for k in range(dic[i]):
			outputt.append(i) 
print(outputt)


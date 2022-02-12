import math

arr = [7,3,1,80,565,34,32,54,8,9]

def is_prime(num): #O(sqrt(n))
	for i in range(2,int(math.sqrt(num))+1):
		if num%i==0:
			return False
	return True

def BinarySearch(arr,i): #O(log(n))


n = len(arr)

arr.sort()
print(arr)
for i in range(2,n+1): #O(n)
	if is_prime(i) and BinarySearch(arr,i):
		print(i)

#O(n) -- efficient
def count_bits(num):
	num_bits = 0
	while num:
		num_bits += num & 1
		num >>= 1
	return num_bits
	
n = int(input())
print(count_bits(n))
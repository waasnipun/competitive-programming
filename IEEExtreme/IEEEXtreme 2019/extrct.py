def len_of_longest_palindrome(inp): 
	n = len(inp) 
	temp = [[0 for x in range(n)] for x in range(n)] 
	for i in range(n): 
		temp[i][i] = 1
	for ite in range(2, n + 1): 
		for i in range(n-ite + 1): 
			j = i + ite-1
			if inp[i] == inp[j] and ite == 2: 
				temp[i][j] = 2
			elif inp[i] == inp[j]: 
				temp[i][j] = temp[i + 1][j-1] + 2
			else: 
				temp[i][j] = max(temp[i][j-1], temp[i + 1][j]); 

	return temp[0][n-1] 

inp = raw_input()
n = len(inp) 
print(len_of_longest_palindrome(inp)) 



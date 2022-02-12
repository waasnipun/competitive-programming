s = str(input())

vowels = ["a","e","i","o","u","y"]

new_string = ""

s = s.lower()

for i in s:
	if i not in vowels:
		new_string+="."
		new_string+=i

print(new_string)
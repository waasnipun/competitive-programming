def read_input(prompt):
    x = input(prompt)
    while x:
        yield x
        x = input(prompt)


xs = list(read_input(""))

output = 0
for i in xs:
    string  = i.split(" ")
    temp = string[0].split("-")
    a,b = int(temp[0]),int(temp[1])
    letter = string[1][0]
    password = string[2]
    count = 0
    for j in password:
        if j==letter:
            count+=1
    if count>=a and count<=b:
        output+=1
print(output)

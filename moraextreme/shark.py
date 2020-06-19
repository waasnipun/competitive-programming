n = int(input())
one = []
two = []
three = []
four = []
five = []
r = n*4
temp = []
i=0
##############################################1
for i in range(n):
    temp.append(n*n-i)
    i-=1
next = temp[n-1]-(n+1)
newTemp = []
for i in range(next,0,-(n-2)):
    newTemp.append(i)
for i in range(0,next+1,(n-2)):
    newTemp.append(i)
one = (temp+newTemp+temp[:n-1:][::-1])
#print(one)
##################################################2
temp = []
newTemp = []
for i in range(n):
    temp.append(2*i+1)
next = temp[n-1]*3+3
newTemp.append(next)
for i in range(n):
    next = next+r-2*n
    newTemp.append(next)
newTemp = newTemp+newTemp[:n:1][::-1]
two = temp+newTemp+temp[:n-1:][::-1]
#print(two)
length = one[int(r/2)]+two[int(r/2)]+n-1
####################################################4
temp = []
newTemp = []
next = 0
for i in range(int(r/2)):
    newTemp.append(next)
    if(i%2==0):
        next+=1
newTemp.append(0)
newTemp = newTemp + newTemp[:int(r/2):1][:0:-1]
four = newTemp
#print(four)
####################################################5
temp = []
newTemp = []
next = 0
for i in range(int(r/2)):
    newTemp.append(next)
    if(i%2==1):
        next+=1
newTemp.append(newTemp[len(newTemp)-1])
newTemp = newTemp + newTemp[:int(r/2):1][:0:-1]
five = newTemp
#print(five)
####################################################3
temp = []
newTemp = []
next = length-one[0]-two[0]
for i in range(n):
    temp.append(next)
    next -= 2
for i in range(0,n):
    newTemp.append(length-(one[n+i]+two[n+i]+four[n+i]+five[n+i]))
temp = temp + newTemp
temp.append(0)
temp = temp+newTemp[::-1]
newTemp = []
for i in range(n-1):
    newTemp.append(temp[i]-1)
temp = temp + newTemp[::-1]
three = temp
#################################################
for i in range(r):
    s = one[i]*' '+two[i]*'M'+three[i]*' '+four[i]*'M'+five[i]*' '
    print(s)

def printpat(pattern):
    for i in pattern:
        for j in i:
            print(j+" ",end='')
        print("\n")

n = int(input())
r = n*2+3
c = n*2+3
cmax = n+2
pattern = [["00" for j in range(c)] for i in range(r)]
updown = []
for i in range(c):
    updown.append("00")
pattern[0] = updown
pattern[c-1] = updown
#################### middle row
for i in range(c):
    if i==n-1:
        count = cmax
        for j in range(cmax):
            pattern[i][j] = str(count)
            count-=1
#####################yata set eka
count = 1
num = cmax
for i in range(cmax):
    for k in range(count):
        pattern[n-1+k][i] = " "+str(num)
    num-=1
    count+=1

printpat(pattern)

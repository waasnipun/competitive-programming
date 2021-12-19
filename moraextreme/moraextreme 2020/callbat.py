def printpat(pattern):
    for i in pattern:
        for j in i:
            if(len(str(j))==1):
                if str(j)=="0":
                    print(str(j)+"0"+" ",end='')
                else:
                    print(" "+str(j)+" ",end='')
            else:
                print(str(j)+" ",end='')

        print("\n",end='')
def pattern_spiral(num):
    m = n = 2*num -1 ##    m x n matrix , length of each row and column
    k = 0 # row start counter
    l = 0 # column start counter
    i = 0 # iterator
    matrix = [[0 for _ in range(n)] for _ in range(m)]
    while k < m and l < n :
        #insert the first row
        for i in range(l, n) :
            if matrix[k][i] == 0:
                matrix[k][i] = num   # row index constt, change values in columns
        k += 1   # first row printed, so increment row start index
        for i in range(k, m) :
            if matrix[i][n-1]==0:
                matrix[i][n-1] = num   # column index constt, change values in rows
        n -= 1   # last column printed, so decrement num of columns
        #insert the last row
        if (k<m):   #  if row index less than number of rows remaining
            for i in range(n-1, l-1, -1):
                if matrix[m-1][i] == 0:
                    matrix[m-1][i] = num   # row index constt, insert in columns
        m -= 1   # last row printed, so decrement num of rows
        #insert the first column
        if (l<n):    #  if column index less than number of columns remaining
            for i in range(m-1, k-1, -1):
                if matrix[i][l] == 0:
                    matrix[i][l] = num # column index constt, insert in rows
        l += 1      # first column printed, so increment column start index
        num -= 1    # all elements of value A inserted , so decrement

    return matrix

n = int(input())
r = n*2+3
c = n*2+3
finalpattern = [["00" for j in range(c)] for i in range(r)]
cmax = n+2
pattern = pattern_spiral(cmax)

############################
updown = []
for i in range(c):
    updown.append("00")
pattern[0] = updown
pattern[1] = updown
pattern[c-2] = updown
pattern[c-1] = updown
#########################33
columnreduce = n+1
for i in range(2,n-1):
    for j in range(columnreduce):
        pattern[i][j] = 0
    for j in range(c-1,c-1-columnreduce,-1):
        pattern[i][j] = 0
    columnreduce-=1
#####################33

columnreduce = 1
for i in range(n,c-2):
    for j in range(columnreduce):
        pattern[i][j] = 0
    for j in range(c-1,c-1-columnreduce,-1):
        pattern[i][j] = 0
    columnreduce+=1
############################
printpat(pattern)

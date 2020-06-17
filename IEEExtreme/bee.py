out = 6
def calculate(bee,i1,i2):
    if bee[i1][i2]==0:
       return 0



n,m = map(int,raw_input().strip().split())
bee = []
for i in range(n):
    bee.append(map(int,raw_input().strip().split()))
q = input()
Q = []
for i in range(q):
    Q = raw_input().strip().split()
    if Q[0] =='a':
        bee[int(Q[1])-1][int(Q[2])-1] = 1
    elif Q[0]=='k':
        print calculate(bee,int(Q[1])-1,int(Q[2])-1)
    


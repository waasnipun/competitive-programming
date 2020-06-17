n,b = map(int,raw_input().strip().split())
inputs = []
dic = {}
for i in range(b):
    x,y,z = map(int,raw_input().strip().split())
    try:
        dic[x].append(y)
    except KeyError:
        dic[x] = [y]
cost = []

print dic
    
    

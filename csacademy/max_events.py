from collections import defaultdict
def printMaxActivities(s, f ): 
    n = len(f) 
    i = 0
    out = len(s[0])
    # print i, 
    for j in range(n): 
  
        if s[j][0] >= f[i]: 
            # print j,
            out+=len(s[j]) 
            i = j 
    return out
events = [[1,4],[4,4],[2,2],[3,4],[1,1]]
dic = defaultdict(list)
for i in events:
    # if dic[i[1]]==None:
    #     dic[i[1]] = []
    dic[i[1]].append(i[0])
end = sorted(list(dic.keys()))
start = []
print(dic.items())
for i in end:
    start.append(dic[i])
print(start)
print(end)
print(printMaxActivities(start,end))
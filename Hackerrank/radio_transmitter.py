def binarySearch (arr, l, r, x):   
    if r >= l:   
        mid = l + (r - l) // 2
        if arr[mid] == x: 
            return mid 
          
        # If element is smaller than mid, then it  
        # can only be present in left subarray 
        elif arr[mid] > x: 
            return binarySearch(arr, l, mid-1, x) 
  
        # Else the element can only be present  
        # in right subarray 
        else: 
            return binarySearch(arr, mid + 1, r, x) 
  
    else: 
        # Element is not present in the array 
        return -1
def transmitters(k,x):
    n = len(x)
    x = list(set(x))
    x.sort()
    rane = x[0]
    prev_i = x[0]
    antenna = 0    
    prev_sett = True    
    i = 1
    while True:
        #print(x,antenna,rane)
        if i==len(x)-1 and prev_sett==True:
            antenna+=1
            break
        if abs(x[i]-rane)<=k and abs(x[i]-x[i+1])<=k:
            antenna+=1
            # del x[i]
            prev_sett = False
            rane = x[i+1]
            i+=2
        elif abs(x[i]-rane)<=k and abs(x[i]-x[i+1])>k:
            antenna+=1
            rane = x[i]
            prev_sett = True
            i+=1
        elif abs(x[i]-rane)>k and abs(x[i]-x[i+1])<=k:
            antenna+=1
            rane = x[i+1] 
            prev_sett = False
            i+=2       
        if i>=len(x)-1:break
        
        

    return antenna


n,k = map(int,input().split())
mapp = list(map(int,input().split()))
mapp.sort()
print(transmitters(k,mapp))


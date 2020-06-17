
import math
class Solution(object):
    def validateBinaryTreeNodes(self, n, left, right):
        """
        :type n: int
        :type leftChild: List[int]
        :type rightChild: List[int]
        :rtype: bool
        """
        if n==2:
            return False
        else:
            isTree = True
            count = 0
            level = math.pow(2,1)-1
            c = 1
            for i in range(n-1):
                if i>level:
                    c+=1
                    level = level + math.pow(2,c)                    
                if left[i]==right[i] and left[i]!=-1 and right[i]!=-1:
                    return False
                if left[i]<right[i]:
                    count=0
                    isTree=True
                elif left[i]==-1 and right[i]==-1:
                    count+=1
                elif right[i]==-1:
                    count=0
                    isTree = True  
                else:
                    return False
                if right[i]<left[i+1]:
                    count=0
                    isTree = True
                elif left[i+1]==-1:
                    count=0
                    isTree = True
                else:
                    return False
                if count==c:
                    return False
            return isTree    
                    

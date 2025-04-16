class Solution(object):
    def replaceElements(self, arr):
        """
        :type arr: List[int]
        :rtype: List[int]
        """
        n=len(arr)
        maxSoFar=arr[-1]
        arr[n-1]=-1
        for i in range(n-2, -1, -1):
            temp=maxSoFar

            if arr[i]>maxSoFar:
                maxSoFar=arr[i]

            arr[i]=temp
            
            
        return arr
        
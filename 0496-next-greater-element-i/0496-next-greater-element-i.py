class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        stack=[]
        nextGreater={}
        for num in nums2:
            while stack and stack[-1]<num:
                nextGreater[stack[-1]]=num
                stack.pop()
            stack.append(num)
        
        while stack:
            nextGreater[stack[-1]]=-1
            stack.pop()

        result=[]
        for num in nums1: 
            result.append(nextGreater[num])
        
        return result

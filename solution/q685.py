class Solution:
    """
    @param: : a continuous stream of numbers
    @param: : a number
    @return: returns the first unique number
    """

    def firstUniqueNumber(self, nums, number):
        # Write your code here
        record = -1
        res1 = set([]) 
        res2 = set([]) #重复的list
        for i in range(0,len(nums)):
            if nums[i] == number:
                record = 1
                break
            if nums[i] in res2:
                continue
            if nums[i] in res1:
                res1.remove(nums[i])
                res2.add(nums[i])
            else :
                res1.add(nums[i])
            
        if record == -1 or len(res1) == 0:
            return record
        for i in range(0,len(nums)):
            if nums[i] not in res2:
                return nums[i]

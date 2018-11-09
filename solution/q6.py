class Solution:
"""
@param: A: sorted integer array A
@param: B: sorted integer array B
@return: A new sorted integer array
"""
def mergeSortedArray(self, A, B):
# write your code here
C = A+B
C.sort()
return C

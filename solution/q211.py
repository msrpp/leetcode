class Solution:
    """
    @param: A: a string
    @param: B: a string
    @return: a boolean
    """
    def Permutation(self, A, B):
        # write your code here
        c = list(A)
        c.sort()
        d = list(B)
        d.sort()
        if 0 == cmp(c,d):
            return True
        return False

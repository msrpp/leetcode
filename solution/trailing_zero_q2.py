#as 0 is made of 2 and 5,digital 2 appears far more frequently than 5, so that we can concern about count of 5
class Solution:
    """
    @param: n: An integer
    @return: An integer, denote the number of trailing zeros in n!
    """
    def trailingZeros(self, n):
        # write your code here, try to do it without arithmetic operators.
        sycle_v5 = (int)(n/5)
        count_0 = 0
        while sycle_v5>0:
            count_0 = sycle_v5+count_0
            sycle_v5 = (int)(sycle_v5/5)
        return count_0

class Solution {
public:
    /*
     * @param : an array of integer
     * @return: the first missing prime number
     */
     
     bool bPrime(int num)
     {
         for(int i = 2;;i++)
         {
             if (i*i > num)
             {
                 return true;
             }
             if(num%i == 0)
             {
                 return false;
             }
             
         }
     }
    int firstMissingPrime(vector<int> nums) {
        // write your code here
        int pos = 0;
        for(  int i=2;;i++)
        {
            if (bPrime(i))
            {
                if(pos == nums.size())
                {
                    return i;
                }
                if(nums[pos] == i)
                {
                    pos++;
                }
                else
                {
                    return i;
                }
            }
        }
    }
};

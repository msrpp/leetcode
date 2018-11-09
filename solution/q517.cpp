class Solution {
public:
    /*
     * @param num: An integer
     * @return: true if num is an ugly number or false
     */
    bool isUgly(int num) {
        // write your code here
        
        while(num >1)
        {
            if(num %2 == 0 )
            {
                num = num/2;
                continue;
            }
            else
            {
                break;
            }
        }
        
                while(num >1)
        {
            if(num %5 == 0 )
            {
                num = num/5;
                continue;
            }
            else
            {
                break;
            }
        }
        
                while(num >1)
        {
            if(num %3 == 0 )
            {
                num = num/3;
                continue;
            }
            else
            {
                break;
            }
        }
        
        return num == 1;
        
    }
};

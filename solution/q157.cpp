class Solution {
public:
    /*
     * @param str: A string
     * @return: a boolean
     */
    bool isUnique(string &str) {
        // write your code here
        sort(str.begin(),str.end());
        for(int i=0;i<str.length()-1;i++)
        {
            if(str[i] == str[i+1])
            {
                
                return false;
            }
        }
        return true;
    }
};

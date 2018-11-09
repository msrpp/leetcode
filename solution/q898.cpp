class Solution {
public:
    /**
     * @param arr: The 2-dimension array
     * @return: Return the column the leftmost one is located
     */
    int getColumn(vector<vector<int>> &arr) {
        // Write your code here
        int result = arr[0].size()-1;
        for(auto i = 0;i<arr.size();i++)
        {
            if(arr[i][result] == 0)
            {
                continue;
            }
            else
            {
                while(arr[i][result] == 1 && result != -1)
                {
                    result --;
                }
            }
        }
        return result+1;
    }
};

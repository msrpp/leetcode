class Solution {
public:
/**
* @param nums: a vector of integers
* @return: an integer
*/
int findMissing(vector<int> &nums) {
// write your code here
int * NumsList = new int[nums.size()];
memset (NumsList,0,sizeof(int)*nums.size());
for(int i=0;i<nums.size();i++)
{
NumsList [nums[i]] = 1;
}
for(int i=0;i<nums.size();i++)
{
if(NumsList[i] == 0)
{
return i;
}
}
return nums.size();
}
};

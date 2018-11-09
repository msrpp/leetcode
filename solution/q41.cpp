class Solution {
public:
/*
* @param nums: A list of integers
* @return: A integer indicate the sum of max subarray
*/
int maxSubArray(vector<int> &nums) {
// write your code here
int pre = 0;
int sum = nums[0];
for(int i=0 ;i<nums.size();i++)
{
int tempSum = 0;
for (int j = i; j< nums.size();j++)
{
tempSum = tempSum+nums[j];
if(tempSum > sum)
{
sum = tempSum;
}
if(tempSum <= 0)
{
break;
}
}
}
return sum;
}
};

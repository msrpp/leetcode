class Solution {
public:
/*
* @param nums: an array of Integer
* @param target: target = nums[index1] + nums[index2]
* @return: [index1 + 1, index2 + 1] (index1 < index2)
*/
vector<int> twoSum(vector<int> &nums, int target) {
// write your code here
vector<int> tmp;
vector<int>res;
for(int i=0 ;i<nums.size();i++)
{
for(int j=0;j<tmp.size();j++)
{
if(nums[i]+tmp[j] == target)
{
res.push_back(j+1);
res.push_back(i+1);
return res;
}
}
if(nums[i]<=target/2)
{
tmp.push_back(nums[i]);
}
}
}
};

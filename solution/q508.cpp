class Solution {
public:
    /**
     * @param nums a list of integer
     * @return void
     */  
void wiggleSort(vector<int>& nums) {
	// Write your code here
	if(nums.empty())
	{
	    return;
	}
	sort(nums.begin(),nums.end());
	int siz = nums.size();
	for (int i=1;i<=(nums.size()-1)/2;i = i+2)
	{
		swap(nums[i],nums[(siz-i)/2*2]);
	}
}
};

class Solution {
public:
    /**
     * @param nums1 an integer array
     * @param nums2 an integer array
     * @return an integer array
     */
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	// Write your code here
	sort(nums1.begin(),nums1.end());
	sort(nums2.begin(),nums2.end());
	int curNum = 0;
	int curPos = 0;
	int nextNum = 0;
	int n = nums1.size(),m = nums2.size();
	set<int> res;
	for (int i = 0;i<n;i++)
	{	
		if (nextNum > nums1[i] && !res.empty())
		{
			continue;
		}
		int nums1Val = nums1[i];
		for (int j= curPos;j<m;j++)
		{
			if (nums1Val == nums2[j])
			{
				curPos = j+1;
				curNum = nums1Val;
				nextNum = (j== m ?nums2[j]:nums2[j+1]);
				res.insert(nums1[i]);
				break;
			}
			else if (nums1Val < nums2[j])
			{
				curPos = j;
				nextNum = nums2[j];
				break;
			}
		}
	}
	vector<int>res2;
	for (set<int>::iterator iter = res.begin();iter != res.end();iter++)
	{
		res2.push_back(*iter);
	}
	return res2;
}
};

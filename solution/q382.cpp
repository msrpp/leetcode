class Solution {
public:
    /*
     * @param S: A list of integers
     * @return: An integer
     */
int triangleCount(vector<int> &S) {
    // write your code here
	sort(S.begin(),S.end());
	int res =0;
	int m,n ,mn;
	for(int i= 0;i<S.size()-2;i++)
	{
		m = S[i];
		for(int j = i+1; j<S.size()-1;j++ )
		{
			n = S[j];
			for(int k = j+1 ;k<S.size() ;k++)
			{
				if(m+n>S[k])
				{
					res++;
				}
				else
				{
					break;
				}
			}
		}
	}
	return res;

}
};

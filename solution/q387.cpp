class Solution {
public:
/**
* @param A, B: Two integer arrays.
* @return: Their smallest difference.
*/
int smallestDifference(vector<int> &A, vector<int> &B) {
// write your code here
sort(A.begin(),A.end());
int aS = A.size();
int bS = B.size();
sort(B.begin(),B.end());
if (A.empty())
{
return B.front();
}
if (B.empty())
{
return A.front();
}
int i = 0,j=0;
int res=abs(A[0] - B[0]);
for (;;)
{
int curRes = 0;
curRes = abs(A[i] -B[j]);
if (curRes<res)
{
res = curRes;
}
if (res == 0)
{
return 0;
}
if (A[i]>B[j])
{
if (j<bS-1)
{
j++;
}
else
{
return res;
}
}
else
{
if (i<aS-1)
{
i++;
}
else
{
return res;
}
}
}
}

};

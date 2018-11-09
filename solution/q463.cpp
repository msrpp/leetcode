class Solution {
public:
/*
* @param A: an integer array
* @return:
*/
void swap(int &a,int &b)
{
int c = a;
a = b;
b =c;
}
void sortIntegers(vector<int> &A) {
// write your code here

    for(int i=int(A.size())-1 ;i>0;i--)
    {
        for(int j=0 ;j<i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
            }
        }
    }
    
}
};

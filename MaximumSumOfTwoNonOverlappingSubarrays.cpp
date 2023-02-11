class Solution {
public:
int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
for(int i=1 ; i<A.size() ; i++)
  A[i] += A[i-1];
int maxi = 0;
  for(int i=L-1 ; (i+M) < A.size() ; i++)
{
int sum_L=0;
if(i == L-1)
sum_L = A[L-1];
else
sum_L = A[i] - A[i-L];
for(int j = i+M ; j<A.size() ; j++)
{
int sum_M = A[j] - A[j-M];
maxi = max(maxi,(sum_L + sum_M));
}
}
for(int i=M-1 ; (i+L) < A.size() ; i++)
{
int sum_M=0;
if(i == M-1)
sum_M = A[M-1];
else
sum_M = A[i] - A[i-M];
for(int j = i+L ; j<A.size() ; j++)
{
int sum_L = A[j] - A[j-L];
maxi = max(maxi,(sum_L + sum_M));
}
}
return maxi;
}
};

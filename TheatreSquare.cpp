#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double n,m,a;
    cin>>n>>m>>a;
    long long firstLineFlagstones= ceil(n/a);
    long long iterationLength=ceil(m/a);
    long long result = firstLineFlagstones*iterationLength;
    cout << result<< endl;
}

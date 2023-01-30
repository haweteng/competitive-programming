#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int n, string s) {
int level=0;
int valleys=0;
for(const char& c:s){
    if(c=='U'){
        if(level== -1)
            valleys++;
        level++;
        } else{
            level--;
        }
    }
return valleys;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
 int n;
 cin>>n;
 cin.ignore(numeric_limits<streamsize>::max(),'\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}



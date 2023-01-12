class Solution {
public:
    vector<string> fizzBuzz(int n) {
    vector<string> answ;    
   for(int i=1;i<=n;i++){
       if(i%3==0 && i%5==0) answ.push_back("FizzBuzz");
        else if(i%3==0) answ.push_back("Fizz");
        else if(i%5==0) answ.push_back("Buzz");
        else if(i%3==0 && i%5==0) answ.push_back("FizzBuzz");
        else answ.push_back(to_string(i));
    }
    return answ;
    }
    
};

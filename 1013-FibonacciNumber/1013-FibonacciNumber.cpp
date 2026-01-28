// Last updated: 28/01/2026, 06:36:54
class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        else{
            return fib(n-1)+fib(n-2);
        }
        
    }
};
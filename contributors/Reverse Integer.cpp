class Solution {
public:
    int reverse(int x) {
        bool flag = x>=0 ? 1: 0; 
        if(x<0) x=abs(x); 
        int temp=x; 
        int rev=0; 
        while(temp>0) {
            int r=temp%10; 
            if(rev>INT_MAX/10)
                return 0; 
            rev= rev*10+r; 
            temp/=10; 
            }
        if(flag) return rev; 
        return -rev; 
    }
};

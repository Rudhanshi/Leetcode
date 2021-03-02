class Solution {
public:
    int reverse(int x) {
        long long int ans=0,n=abs(x);
        while(n){
            if(INT32_MAX/10<ans)
                return 0;
            else 
             ans= ans*10 + n%10;
             n=n/10;
        }
        return x<0? -ans:ans;
    }
};

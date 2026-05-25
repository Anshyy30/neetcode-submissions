class Solution {
public:
    double myPow(double x, int n) {
        
        long long nn = n;
        
        // negative power handle
        if(nn < 0) {
            x = 1 / x;
            nn = -nn;
        }

        double ans = 1;

        while(nn > 0) {

            // odd power
            if(nn % 2 == 1) {
                ans = ans * x;
            }

            x = x * x;
            nn = nn / 2;
        }

        return ans;
    }
};
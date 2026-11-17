class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;

        long long count = n;

        if (count < 0) {
            count = -count;
        }

        if ( x == 1) {
            return 1;
        }   

        while(count > 0) {
            if((count % 2) == 1) {
                ans = ans * x;
                count--;
            } else {
                x = x * x;
                count = count / 2;
            }
        }

        if ( n < 0 ) {
            ans = (1/ans);
        }

        return ans;
    }
};
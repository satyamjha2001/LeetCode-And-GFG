class Solution {
public:
    double myPow(double x, long long n) {
        if (n == 0) {
            return 1.0;
        }

        if (n < 0) {
            x = 1 / x;
            n = -n;
        }

        return power(x, n);
    }

    double power(double x, long long n) {
        if (n == 1) {
            return x;
        }

        double halfPower = power(x, n / 2);
        if (n % 2 == 0) {
            return halfPower * halfPower;
        } else {
            return halfPower * halfPower * x;
        }
    }
};
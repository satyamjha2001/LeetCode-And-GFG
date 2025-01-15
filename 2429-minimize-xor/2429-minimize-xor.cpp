class Solution {
public:
    int minimizeXor(int num1, int num2) {
         int countSetBits = __builtin_popcount(num2); // Count set bits in num2
        int x = 0;

        // Step 1: Set bits in x based on num1's bits (high to low)
        for (int i = 31; i >= 0 && countSetBits > 0; --i) {
            if (num1 & (1 << i)) {
                x |= (1 << i); // Set the i-th bit in x
                countSetBits--;
            }
        }

        // Step 2: If more bits are needed, set them starting from the lowest bit
        for (int i = 0; i <= 31 && countSetBits > 0; ++i) {
            if (!(x & (1 << i))) { // If the i-th bit in x is not set
                x |= (1 << i);    // Set the i-th bit in x
                countSetBits--;
            }
        }

        return x;
    }
};
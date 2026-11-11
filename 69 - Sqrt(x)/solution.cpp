class Solution {
public:
    int mySqrt(int x) {
        int l = 0; 
        int r = x/2 + 1; 

        while (l <= r) 
        {
            int mid = l + (r - l + 1)/2; 
            long long square = (long long)mid * mid; 
            if (square == x) return mid; 
            else if (square > x) r = mid - 1; 
            else l = mid + 1; 
        }

        return r; 

    }
};
class Solution {
public:
    string addBinary(string a, string b) {
        string result = ""; 
        int i = a.length() - 1; 
        int j = b.length() - 1; 
        int carry = 0; 
        while (i >= 0 || j >= 0) 
        {
            int dummy = carry; 
            carry = 0; 
            if (i >= 0) dummy += a[i] - '0'; 
            if (j >= 0) dummy += b[j] - '0'; 
            if (dummy > 1) 
            {
                dummy %= 2; 
                carry = 1; 
            }
            char bin = dummy + '0'; 
            result = bin + result; 
            i--;
            j--; 
        }
        if (carry) result = '1' + result; 

        return result; 
    }
};
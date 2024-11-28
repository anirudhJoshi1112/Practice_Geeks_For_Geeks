class Solution {
public:
    int myAtoi(char *s) {
        int i = 0, sign = 1, result = 0;
        
        // Step 1: Skip leading whitespaces
        while (s[i] == ' ') {
            i++;
        }

        // Step 2: Check for sign
        if (s[i] == '+' || s[i] == '-') {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: Convert the digits
        while (s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';  // Convert char to int
            
            // Check for overflow and underflow
            if (result > (INT_MAX / 10) || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

        // Apply the sign
        result *= sign;

        // Step 4: Return the result
        return result;
    }
};

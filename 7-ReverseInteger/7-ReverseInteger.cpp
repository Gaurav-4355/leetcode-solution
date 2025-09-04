// Last updated: 04/09/2025, 11:24:44

class Solution {
public:


int reverse(int x) {
    int rev = 0;
    while (x != 0) {
        int digit = x % 10;

        // Pre-overflow checks
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) {
            return 0;
        }
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) {
            return 0;
        }

        rev = rev * 10 + digit;
        x /= 10;
    }
    return rev;
}

int main() {
    int x;
    cout << "enter the number: ";
    cin >> x;
    cout << reverse(x);
    return 0;
}
};

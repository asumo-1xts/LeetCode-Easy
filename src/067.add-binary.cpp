#include <string>

class Solution {
   public:
    std::string addBinary(std::string a, std::string b) {
        std::string longer = (a.size() > b.size()) ? a : b;
        std::string shorter = (a.size() > b.size()) ? b : a;

        int carry = 0;

        for (int i = 0; i < shorter.size(); ++i) {
            int sum = (longer[longer.size() - 1 - i] - '0') +
                      (shorter[shorter.size() - 1 - i] - '0') + carry;
            longer[longer.size() - 1 - i] = (sum % 2) + '0';
            carry = sum / 2;
        }

        for (int i = longer.size() - 1 - shorter.size(); i >= 0 && carry; --i) {
            int sum = (longer[i] - '0') + carry;
            longer[i] = (sum % 2) + '0';
            carry = sum / 2;
        }

        if (carry) {
            longer.insert(longer.begin(), '1');
        }

        return longer;
    }
};

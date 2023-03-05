/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 

Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.
*/
class Solution {
public:
    bool isPalindrome(string s) {
        // initialize two pointers, one starting from the beginning of the string and the other starting from the end
        int left = 0, right = s.size() - 1;
        // loop until the two pointers meet or cross
        while (left < right) {
            // move the left pointer to the right until an alphanumeric character is found
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            // move the right pointer to the left until an alphanumeric character is found
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            // compare the characters at the two pointers, ignoring case sensitivity
            if (tolower(s[left]) != tolower(s[right])) {
                // if the characters do not match, return false
                return false;
            }
            // move both pointers towards the center of the string
            left++;
            right--;
        }
        // if all pairs of characters match, return true
        return true;
    }
};

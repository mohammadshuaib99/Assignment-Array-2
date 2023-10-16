#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(vector<int>& nums) {
    int n = nums.size();
    
    for (int i = 0; i < n / 2; i++) {
        if (nums[i] != nums[n - 1 - i]) {
            return false; 
        }
    }
    
    return true; // Palindrome
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 1};
    
    if (isPalindrome(arr)) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }
    
    return 0;
}

/*
output
The array is a palindrome.
*/

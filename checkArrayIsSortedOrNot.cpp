#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            return false;
        }
    }

    return true; // Array is sorted
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    if (isSorted(arr)) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    }

    return 0;
}

/*
output
The array is sorted in ascending order.

*/
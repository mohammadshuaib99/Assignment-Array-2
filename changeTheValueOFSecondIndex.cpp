#include <iostream>
#include <vector>

using namespace std;

void modifyArray(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        if (i % 2 == 0) {
            nums[i] += 10;  // Even index, increment by 10
        } else {
            nums[i] *= 2;   // Odd index, multiply by 2
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    modifyArray(arr);

    cout << "Modified array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


/*
output
Modified array: 11 4 13 8 15 12 
*/
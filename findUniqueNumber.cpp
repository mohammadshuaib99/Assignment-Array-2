#include <iostream>
#include <vector>

using namespace std;

int findUniqueNumber(vector<int>& nums) {
    int result = 0;

    for (int num : nums) {
        result ^= num;
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 1, 4, 3};

    int uniqueNumber = findUniqueNumber(arr);

    cout << "The unique number in the array is: " << uniqueNumber << endl;

    return 0;
}


/*
output
The unique number in the array is: 4
*/
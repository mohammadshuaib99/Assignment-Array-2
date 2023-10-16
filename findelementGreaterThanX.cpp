#include <iostream>
#include <vector>

using namespace std;

int countElementsGreaterThanX(vector<int>& nums, int x) {
    int count = 0;

    for (int num : nums) {
        if (num > x) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int x = 3;

    int count = countElementsGreaterThanX(arr, x);

    cout << "The number of elements greater than " << x << " is: " << count << endl;

    return 0;
}


// output
// The number of elements greater than 3 is: 3
#include <iostream>
#include <vector>
#include<climits>

using namespace std;

void findLargestThree(vector<int>& nums) {
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;
    int thirdMax = INT_MIN;

    for (int num : nums) {
        if (num > firstMax) {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = num;
        } else if (num > secondMax) {
            thirdMax = secondMax;
            secondMax = num;
        } else if (num > thirdMax) {
            thirdMax = num;
        }
    }

    cout << "The largest three elements are: " << firstMax << ", " << secondMax << ", " << thirdMax << endl;
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 9, 3, 9, 7, 8};

    findLargestThree(arr);

    return 0;
}


/*
output
The largest three elements are: 9, 9, 8
*/
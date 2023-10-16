#include <iostream>
#include <vector>

using namespace std;

int findDifferenceBetweenSums(vector<int>& nums) {
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (i % 2 == 0) {
            evenSum += nums[i];  
        } else {
            oddSum += nums[i];   
        }
    }

    return evenSum - oddSum;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    int difference = findDifferenceBetweenSums(arr);

    cout << difference << endl;

    return 0;
}

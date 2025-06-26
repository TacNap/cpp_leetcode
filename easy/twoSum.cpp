#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Attempt at a faster method.
// Only even works in theory for targets that don't require adding negatives. 
vector<int> twoSum_2(vector<int>& nums, int target) {
	// If only two elements, return them
	if (nums.size() <= 2) {
		return {nums[0], nums[1]};
	}

	vector<int> result;
	// Sort - may introduce more overhead than necessary
	sort(nums.begin(), nums.end());

	// Loop and compare
	for (int i = nums.size()-1; i > 0; i--) {
		cout << nums[i] << endl;
		if (nums[i] <= target)
		{
			target -= nums[i];
			result.push_back(nums[i]);
			if (target == 0){
				break;
			}
		}
	}
	// result[0] = indexof(result[0])
	// result[1] = indexof(result[1])
	return result;
}

vector<int> twoSum(vector<int>& nums, int target) {
	// If only two elements, return them
	if (nums.size() <= 2) {
	    return {0, 1};
    }

    // Loop and compare
    for (int i = 0; i <= nums.size()-2; i++) {
        for (int ii = 1; ii <= nums.size()-1; ii++) {
            if (nums[i] + nums[ii] == target && i != ii) {
                return {i, ii};
            }
        }
    }

    // Required to complete all code paths
    return {0, 1};
}


int main() {
	vector<int> v = {1, 3, 50, 9, 10, 8, 100};
	int target = 19;

	
	vector<int> result = twoSum_2(v, target);
	cout << endl << result[0] << " " << result[1] << endl;

	return 0;
}


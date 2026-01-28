// Last updated: 28/01/2026, 06:36:51
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       
    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    // Step 2: Find the minimum difference
    int minDiff = INT_MAX;
    for (int i = 1; i < arr.size(); i++) {
        minDiff = min(minDiff, arr[i] - arr[i-1]);
    }

    // Step 3: Collect pairs with minDiff
    vector<vector<int>> result;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] - arr[i-1] == minDiff) {
            result.push_back({arr[i-1], arr[i]});
        }
    }

    return result;
}
        
    };
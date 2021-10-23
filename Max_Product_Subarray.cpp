class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        int minVal = arr[0];
        int maxVal = arr[0];
        int maxProduct = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] < 0)
                {
                    maxVal = maxVal^minVal;
                    minVal = maxVal^minVal;
                    maxVal = maxVal^minVal;
                }

            // maxVal and minVal stores the
            // product of subarray ending at arr[i].
            maxVal = max(arr[i], maxVal * arr[i]);
            minVal = min(arr[i], minVal * arr[i]);

            // Max Product of array.
            maxProduct = max(maxProduct, maxVal);
        }

        // Return maximum product found in array.
        return maxProduct;
    }
};

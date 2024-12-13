#include<bits/stdc++.h>
using namespace std;

int main() {
    // Input array representing stock prices on different days
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Initialize 'mini' to the first day's price to track the minimum price seen so far
    int mini = prices[0];

    // Variable to store the maximum profit
    int profit = 0;

    // Loop through the prices starting from the second day
    for (int i = 1; i < prices.size(); i++) {

        // Calculate the potential profit if the stock is sold on the current day
        int cost = prices[i] - mini;

        // Update the maximum profit if the current profit is higher
        profit = max(profit, cost);

        // Update 'mini' to track the lowest price seen so far
        mini = min(mini, prices[i]);
    }
    
    // Output the maximum profit that can be achieved
    cout << "Maximum profit: " << profit << endl;

    return 0;
}

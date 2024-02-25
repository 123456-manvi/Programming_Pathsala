class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& Bookings, int n) {
        vector<int> seq(n, 0);
    // Traverse the array
    for (int i = 0; i < Bookings.size(); i++) {
 
        // Store the first booked flight
        int l = Bookings[i][0];
 
        // Store the last booked flight
        int r = Bookings[i][1];
 
        // Store the total number of
        // seats booked in flights [l, r]
        int K = Bookings[i][2];
 
        // Add K to each flight from L to R
        // use prefix sum
        for (int j = l - 1; j < r; j++) {
            seq[j] += K;
        }
    }
    return seq;
    }
};

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0; 
        int numCustomers = accounts.size(); 
        int numBanks = accounts[0].size(); 

        for (int i = 0; i < numCustomers; i++) 
        {
            int currentWealth = 0; 
            for (int j = 0; j < numBanks; j++) 
            {
                currentWealth += accounts[i][j]; 
            } 
            if (currentWealth > maxWealth) maxWealth = currentWealth; 
        }

        return maxWealth; 
    }
};
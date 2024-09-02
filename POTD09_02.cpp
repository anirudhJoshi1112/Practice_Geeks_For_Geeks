//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        int n = grid.size();
    vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    
    // Start from the top-left corner
    pq.push({grid[0][0], {0, 0}});
    dist[0][0] = grid[0][0];
    
    while (!pq.empty()) {
        pair<int, pair<int, int>> top = pq.top();
        pq.pop();
        int currentCost = top.first;
        int x = top.second.first;
        int y = top.second.second;
        
        // Stop if we reached the bottom-right corner
        if (x == n - 1 && y == n - 1) {
            return currentCost;
        }
        
        // Explore neighbors
        for (auto& dir : directions) {
            int newX = x + dir[0];
            int newY = y + dir[1];
            
            // Check if within bounds
            if (newX >= 0 && newX < n && newY >= 0 && newY < n) {
                int newCost = currentCost + grid[newX][newY];
                
                // If a cheaper path is found, update and push to the queue
                if (newCost < dist[newX][newY]) {
                    dist[newX][newY] = newCost;
                    pq.push({newCost, {newX, newY}});
                }
            }
        }
    }
    
    return -1;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends

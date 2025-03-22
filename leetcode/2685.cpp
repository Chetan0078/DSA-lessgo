#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> visited(n, false);
        
        for (auto &edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        int completeComponents = 0;

        function<bool(int, unordered_set<int>&, int&)> dfs = [&](int node, unordered_set<int>& nodes, int& edgeCount) {
            visited[node] = true;
            nodes.insert(node);
            for (int neighbor : adj[node]) {
                edgeCount++;
                if (!visited[neighbor]) {
                    if (!dfs(neighbor, nodes, edgeCount)) return false;
                }
            }
            return true;
        };

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                unordered_set<int> nodes;
                int edgeCount = 0;
                dfs(i, nodes, edgeCount);

                // Check completeness condition
                int k = nodes.size();
                if (edgeCount / 2 == k * (k - 1) / 2) {
                    completeComponents++;
                }
            }
        }

        return completeComponents;
    }
};

int main() {
    Solution sol;
    int n = 6;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {3, 4}};
    cout << sol.countCompleteComponents(n, edges) << endl;
    return 0;
}

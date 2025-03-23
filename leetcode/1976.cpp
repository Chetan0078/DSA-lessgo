#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        const int MOD = 1e9 + 7;
        vector<vector<pair<int, int>>> adj(n);  // Adjacency list

        // Construct the graph
        for (auto& road : roads) {
            int u = road[0], v = road[1], w = road[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        // Min-heap (distance, node)
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
        vector<long long> dist(n, LLONG_MAX);  // Shortest distances
        vector<int> ways(n, 0);  // Ways to reach a node

        // Initialize start node
        pq.push({0, 0});
        dist[0] = 0;
        ways[0] = 1;

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            // If we already have a shorter way, skip
            if (d > dist[u]) continue;

            for (auto& [v, w] : adj[u]) {
                long long newDist = d + w;
                if (newDist < dist[v]) {  
                    // Found a shorter path to v
                    dist[v] = newDist;
                    ways[v] = ways[u];
                    pq.push({newDist, v});
                } else if (newDist == dist[v]) {
                    // Found another shortest path to v
                    ways[v] = (ways[v] + ways[u]) % MOD;
                }
            }
        }
        return ways[n - 1];
    }
};
int main(){
    
}
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<bool>> graph(numCourses, vector<bool>(numCourses, false));

        for (const auto& edge : prerequisites) {
            graph[edge[0]][edge[1]] = true;
        }

        for (int k = 0; k < numCourses; ++k) {
            for (int i = 0; i < numCourses; ++i) {
                for (int j = 0; j < numCourses; ++j) {
                    if (graph[i][k] && graph[k][j]) {
                        graph[i][j] = true;
                    }
                }
            }
        }

        vector<bool> result;
        for (const auto& query : queries) {
            result.push_back(graph[query[0]][query[1]]);
        }

        return result;
    }
};

int main(){
    Solution s;
    vector<bool> result;
    int n;
    vector<vector<int>> prerequisites;
    vector<vector<int>> queries;
    result = s.checkIfPrerequisite(n,prerequisites,queries);
    for(int i=0;i<result.size();i++){
        if(result[i])cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }
}
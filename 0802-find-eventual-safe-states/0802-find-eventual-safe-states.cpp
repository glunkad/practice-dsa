class Solution {
public:
    vector<int> Kahn(int& n, vector<vector<int>>& adj, vector<int>& indegree){
        
        queue<int> q;
        for(int i = 0; i < n; i++){    
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        
        vector<int> isSafe(n,0);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            isSafe[node] = 1;
            
            for(auto& neigh : adj[node]){
                indegree[neigh]--;
                if(indegree[neigh] == 0){
                    q.push(neigh);
                }
            }
        }
        
        vector<int> v;
        for(int i = 0; i < n; i++){
            if(isSafe[i]){
                v.push_back(i);
            }
        }
        return v;
        
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> adj(n);
        vector<int> indegree(n,0);
        
        for(int i = 0; i < n; i++){
            for(auto& neigh : graph[i]){
                adj[neigh].push_back(i);
                indegree[i]++;
            }
        }
        
        return Kahn(n,adj, indegree);
    }
};
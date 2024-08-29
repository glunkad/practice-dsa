class Solution {
public:
    vector<int> topSort(int& n, vector<vector<int>>& adj,vector<int>& v){
        vector<int> indegree(n,0);
        
        for(int i = 0; i < n; i++){
            for(int& neigh : adj[i]){
                indegree[neigh]++;
            }
        }
        
        queue<int> q;
        for(int i = 0; i < n; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        
        int counter = 0;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            v.push_back(node);
            counter++;
            
            for(int& neigh : adj[node]){
                indegree[neigh]--;
                if(indegree[neigh] == 0){
                    q.push(neigh);
                }
            }
        }
        if(n != counter){
            return {};
        }
        return v;
    }
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<vector<int>> adj(n);
        
        for(int i = 0; i < p.size(); i++){
            int u = p[i][0];
            int v = p[i][1];
            // to compute u we need to complete v so => v -> u
            adj[v].push_back(u);
        }
        vector<int> res;
        return topSort(n,adj,res);
    }
};
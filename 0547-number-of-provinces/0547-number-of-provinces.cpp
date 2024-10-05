class Solution {
public:
    void bfs(int start, vector<vector<int>>& G, vector<int>& visited){
        queue<int> q;
        visited[start] = 1;
        q.push(start);
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(int i = 0; i < G.size(); i++){
                if(G[node][i] && !visited[i]){
                    visited[i] = 1;
                    q.push(i);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n,0);
        int noOfProvinces = 0;
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                noOfProvinces++;
                bfs(i, isConnected, visited);
            }
        }
        return noOfProvinces;
    }
};
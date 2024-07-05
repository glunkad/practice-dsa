/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node* node,unordered_map<Node*,Node*>& mp){
        if(mp[node] != nullptr){
            return mp[node];
        }
        Node* copy = new Node(node->val);
        mp[node] = copy;
        
        for(Node* neig : node->neighbors){
            copy->neighbors.push_back(dfs(neig,mp));
        }
        return copy;
    }
    Node* cloneGraph(Node* node) {
        if(node == nullptr){
            return nullptr;
        }
        unordered_map<Node*,Node*> mp;
        return dfs(node,mp);
    }
};
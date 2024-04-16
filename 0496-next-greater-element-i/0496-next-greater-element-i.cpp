class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
	stack<int> st;
	unordered_map<int,int> mp; // num -> next greater element
	for(int i = nums2.size() - 1; i >= 0; i--){
		int num = nums2[i];
		if(st.size() == 0){
			st.push(num);
			mp[num] = -1;
		}
		else{
			while(st.size() > 0 && num > st.top()){
				st.pop();
			}
			if(st.size() > 0 && num < st.top()){
				mp[num] = st.top();
			}
			else{
				mp[num] = -1;
			}
			st.push(num);
		}
	}

	/* for(auto& [f,s] : mp){ */
	/* 	cout << f << s << "\n"; */
	/* } */
	
	int sz = nums1.size();
	vector<int> v(sz);

	for(int i = 0; i < nums1.size(); i++){
		v[i] = mp[nums1[i]];
	}

	return v;
}

};
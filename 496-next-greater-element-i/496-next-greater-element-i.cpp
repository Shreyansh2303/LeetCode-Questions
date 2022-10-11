class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int m = nums1.size();
        int n = nums2.size();
        
        vector<int> ans(m);
        stack<int> st;
        unordered_map<int,int> mp;
        
        
        for (auto nm: nums2) {
            
            while (st.size() and st.top() < nm) {
                mp[st.top()] = nm;
                st.pop();
            }
            st.push(nm);
        }
        
        for (int i=0; i<m; i++) {
            ans[i] = mp.count(nums1[i])? mp[nums1[i]]: -1;
        }
        
        return ans;
    }
};
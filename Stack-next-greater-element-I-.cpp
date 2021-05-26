
class Solution {
public:
    
    // approach : the idea is to nums1 element must be present in nums2 and the next greater element must be nums2 next element nums2[1,2] so we make map to store first element as key and value as  greater  element  i.e mp<1,2>then just iterate over first array nums1 and find nums1 element map if we found it then push it into the vector
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     
          //since there are no duplicates, we can store them in a map;
        
        vector<int> res(nums1.size(), -1); //to be returned, initialize it with -1.
        stack<int> st;
        unordered_map<int, int> mp;
        
        for(int i=0; i<nums2.size(); i++)
        {
          ;
            
            while(!st.empty() && nums2[i] > st.top())
            {
                //NGE of st.top() is element
				
                mp[st.top()] = nums2[i];
                st.pop();
            }
            
            st.push(nums2[i]);
        }
        
        for(int i=0; i<nums1.size(); i++)
        {
          
            
            if(mp.find(nums1[i]) != mp.end())    // find 2
            {
                int nge = mp[nums1[i]];      // mp[2]=3
                res[i] = nge; //push NGE of desired element
            }
                
        }
        
        return res;
        
    }
};

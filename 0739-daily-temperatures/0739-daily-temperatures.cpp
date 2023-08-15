class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
      int n=temperatures.size();
        stack<pair<int,int>>st;
        vector<int>res(n);
        for(int i=0; i<n; i++){
            int currDay=i;
            int curTemp=temperatures[i];
            while(!st.empty() && st.top().second<temperatures[i]){
                int preDay=st.top().first;
                int preTemp=st.top().second;
                st.pop();
                res[preDay]=currDay-preDay;
            }
            st.push({currDay, curTemp});
        }
        return res;
    }
};
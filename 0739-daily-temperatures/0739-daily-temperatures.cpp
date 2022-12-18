class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n = temperatures.size();
        st.push(0);

        for(int i = 1; i<n; i++)
        {
            while(!st.empty() && temperatures[i] > temperatures[st.top()])
            {
                temperatures[st.top()] = i-st.top();
                st.pop();
            }

            st.push(i);
        }

        while(!st.empty())
        {
            temperatures[st.top()] = 0;
            st.pop();
        }

        return temperatures;
    }
};

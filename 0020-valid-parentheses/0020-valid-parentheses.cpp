class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        stack<char> st2;
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }

            if (s[i] == ')') {
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                } else {
                    st2.push(s[i]);
                }
            }

            if (s[i] == '}') {
                if (!st.empty() && st.top() == '{') {
                    st.pop();
                } else {
                    st2.push(s[i]);
                }
            }

            if (s[i] == ']') {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                } else {
                    st2.push(s[i]);
                }
            }
        }
        return st.empty() && st2.empty();
    }
};
// Question Link:- https://www.codingninjas.com/studio/problems/valid-parenthesis_795104?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

bool isValidParenthesis(string s) {
  // Write your code here.
  stack<char> st;

  for (auto c : s) {
    if (st.empty()) {
      st.push(c);
    } else if ((st.top() == '(' && c == ')') || (st.top() == '{' && c == '}') ||
               (st.top() == '[' && c == ']')) {
      st.pop();
    } else {
      st.push(c);
    }
  }
  if (st.size() == 0)
    return true;

  return false;
}

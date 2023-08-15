// Question Link:- https://www.codingninjas.com/studio/problems/binary-strings-with-no-consecutive-1s_893001?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

void seq(vector<string> &sol, string s, int n, int ind) {

  // base case to keep updating the vector with combination of strings made
  if (ind >= n) {
    sol.push_back(s);
    return;
  }
  // include 0 --> call the function --> remove 0
  s.push_back('0');
  seq(sol, s, n, ind + 1);
  s.pop_back();

  //if last element was 0
  // include 1 --> call the function --> remove 1
  if (s.back() == '0' || s.empty()) {
    s.push_back('1');
    seq(sol, s, n, ind + 1);
    s.pop_back();
  }
}
vector<string> generateString(int N) {
    // Write your code here.
  vector<string> sol;
  string str;
  seq(sol, str, N, 0);

  return sol;
    
}

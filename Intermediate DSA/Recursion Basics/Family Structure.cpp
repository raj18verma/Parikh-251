// Question Link:- https://www.codingninjas.com/studio/problems/family-structure_981243?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube

string kthChildNthGeneration(int n, long long int k) {
  // Write your code here
  if (n == 1)
    return "Male";
  long long pk = (k + 1) / 2;
  string parent = kthChildNthGeneration(n - 1, pk);
  if (k % 2 == 1) {
    return parent;
  } else {
    if (parent == "Male")
      return "Female";
    return "Male";
  }
}

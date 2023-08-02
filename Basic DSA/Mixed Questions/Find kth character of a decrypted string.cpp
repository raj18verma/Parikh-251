char kThCharaterOfDecryptedString(string s, long long k)
{
    //  Write your code here.
    int n=s.size();
   for (int i=0;i<n;i++)
   {
       long long len=0;
       string temp="";
       while(s[i]>='a' && s[i]<='z')
       {
           temp+=s[i];
           len++;
           i++;
       }
       string num="";
       while(s[i]>='0' && s[i]<='9')
       {
           num+=s[i];
           i++;
       }
       long long t=(long long)len*(long long)(stoll(num));
       if (t<k) k-=t;
       else{
           k%=len;
           int ind=(k-1+len)%len;
           return temp[ind];
       }
       i--;
   }
   return 'a';
}

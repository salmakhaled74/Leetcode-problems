class Solution {
public:
    void reverseString(vector<char>& s) {
       int s1 = 0, s2 = s.size()-1;
       while(s1 < s2)
       {
           char temp = s[s1];
           s[s1] = s[s2];
           s[s2] = temp;
           s1++;
           s2--;
       }
    }
};

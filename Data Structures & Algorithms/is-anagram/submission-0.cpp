class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int>mp;
       int h=s.length();
       int  p=t.length();
       if(h!=p)
       return false;
       for(int i=0;i<h;i++){
       
        mp[s[i]]++;
       } 
       for(int i=0;i<p;i++){
        mp[t[i]]--;
       }
       for(auto it: mp){
           if(it.second != 0) return false;
       }
       return true;
       }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int > ma;
        unordered_map<char, int>mb;


        for ( const auto &c : s){
            ma[c]++;
        }
        
        for ( const auto &c : t){
            mb[c]++;
        }

        return ma == mb;
    }
};
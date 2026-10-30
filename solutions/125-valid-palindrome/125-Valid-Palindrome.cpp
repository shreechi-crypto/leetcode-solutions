class Solution {
public:
    bool isPalindrome(string s) { 

        std::string p ;
        for ( int i =0;i< s.length();i++){

            if ( isalnum(s[i])){
                p+=tolower(s[i]);
            }
        }

        int lp =0;
        int rp = p.length()-1;

        

        while ( lp< rp){

            if ( p[lp]!=p[rp]){

                return false;
            }
            lp++;
            rp--;    

        }
        return true ;
    }
};
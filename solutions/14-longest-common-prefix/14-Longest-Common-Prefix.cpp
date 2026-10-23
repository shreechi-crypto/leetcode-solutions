class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans ="";

        // traversing all the characters of first string  

        for ( int i =0 ; i< strs[0].length(); i++){

            char ch = strs[0][i];

            bool match = true ;

            // comparing ch with other strings

            for ( int j = 1; j < strs.size();j++){

           

                //if not matching 

                if(strs[j].size()<i || ch!= strs[j][i]){

                    match = false ;

                    break;
                } 

            }

            if ( match == false){

                break;
            }else {

                ans.push_back(ch);

            }
        }


        return ans;
        
    }
};
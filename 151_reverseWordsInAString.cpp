class Solution {
public:
    string reverseWords(string s) {
        //approach 1
        //using two pointer

        reverse(s.begin(), s.end());
        
        //for whole string
        int i = 0;
        //for words in a string
        int l = 0, r = 0;

        while(i < s.length())
        {
            //to traverse in whole string untill any space
            while(i < s.length() && s[i] != ' ')
            {
                s[r] = s[i];
                i++;
                r++;
            }
            
            //when we have to reverse a word in the string 
            if(l < r)
            {
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' ';
                r++;
                l = r;
            }
            i++;
        }
        //to remove extra space after reversed string
        s = s.substr(0, r-1);
        return s;
    }
};
class Solution {
    public:
        int lengthOfLastWord(string s) {
            int initialIndex = {0};
            string reversed;
            for (int i = s.length() - 1; i >=0 ; i--){
                if (reversed.length() >= 1 && s[i] == ' ') break; 
                if (s[i] != ' ')reversed += s[i];
            }
    
            return reversed.length();
        }
    };
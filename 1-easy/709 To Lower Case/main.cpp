class Solution {
    public:
        string toLowerCase(string s) {
            string toString;
            for (int i = {0}; i < s.size(); i++) {
                if(s.at(i) <= 90 && s.at(i) >= 65){
                    toString = (char)(s.at(i) + 32);
                    s.insert(i, toString);
                    s.erase(i+1, 1);
                }
            }
            return s;
        }
    };
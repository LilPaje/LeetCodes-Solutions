class Solution {
    public:
        int romanToInt(string s) {
            int num = {0};
            std::map <char, int> romanValue{
                {'I', 1}, 
                {'V', 5}, 
                {'X', 10}, 
                {'L', 50}, 
                {'C', 100}, 
                {'D', 500}, 
                {'M', 1000}};
            //std::cout << romanValue['V'];
            
            for(int i = 0; i < s.length() -1 ; i++){
                if(romanValue[s[i]] < romanValue[s[i+1]]){
                    num -= romanValue[s[i]];
                    continue;
                }           
                num += romanValue[s[i]]; 
            }
            return num + romanValue[s[s.length()-1]];
        }
    };
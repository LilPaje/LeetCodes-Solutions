class Solution {
    public:
        int calPoints(vector<string>& operations) {
            std::stack<int> numbersOperations;
            int scoreSum = {0};
            for (int i = {0}; i < operations.size(); i++){
                if ("C" == operations[i] ){
                    numbersOperations.pop();
                }
                else if ("D" == operations[i]){
                    numbersOperations.push(numbersOperations.top() * 2);
                    }
                else if("+" == operations[i]){
                    int value1 = numbersOperations.top();
                    numbersOperations.pop();
                    int value2 = numbersOperations.top(); 
                    numbersOperations.push(value1);
                    numbersOperations.push(value2 + numbersOperations.top());
                    }
                else{
                    numbersOperations.push(stoi(operations[i]));
                }
            }
    
            while(!numbersOperations.empty()){
                scoreSum += numbersOperations.top();
                numbersOperations.pop();
            }
            return scoreSum;
        }
    };
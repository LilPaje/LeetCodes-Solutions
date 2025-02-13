int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int num = 0;
    int max;
    for(int i = {0}; i < accountsSize; i++){
        num = 0;
        for(int j = {0}; j < *accountsColSize; j++){
            num += accounts[i][j];

        }
        if (max < num) max = num;
    }
    return max;
}
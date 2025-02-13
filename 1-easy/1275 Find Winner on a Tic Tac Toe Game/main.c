char* tictactoe(int** moves, int movesSize, int* movesColSize) {
    int plays[8] = {};
    int player = -1;
    for(int i={0}; i < movesSize; i++){
        player *= -1;
        plays[moves[i][0]] += player;
        plays[moves[i][1] + 3] += player;
        if(moves[i][0] == moves[i][1]) plays[6] += player;
        if(moves[i][0] + moves[i][1] == 2) plays[7] += player;
    }
    for(int i={0}; i < 8; i++)
        if(abs(plays[i]) == 3) return player == 1 ? "A" : "B"; 

    return movesSize == 9 ? "Draw" : "Pending";
}
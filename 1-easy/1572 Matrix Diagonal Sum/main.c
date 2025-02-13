int diagonalSum(int** mat, int matSize, int* matColSize) {
    int total = 0;
    int colIndex = 0;
    for(int rowIndex = 0; rowIndex < matSize; rowIndex++ ){
        printf("%d\n", *matColSize);
        total += mat[rowIndex][colIndex];
        total += mat[rowIndex][*matColSize -1 -colIndex];
        colIndex++;
    }

    return *matColSize % 2 == 0 ? total : total - mat[(*matColSize/2)][(*matColSize/2)];
}
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    for (int i=0; i<matrixSize; i++){
        for (int j=i; j<matrixSize; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i=0; i<matrixSize; i++){
        for (int j=0, k=matrixSize-1; j<matrixSize/2; j++,k--){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
        }
    }
}
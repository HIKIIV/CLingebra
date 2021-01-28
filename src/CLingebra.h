#ifndef CLINGEBRA_H_
#define CLINGEBRA_H_

#define MAX_DIM 10

typedef struct _vector{
    int dim;
    double cod[MAX_DIM];
}vector;

typedef struct _matrix{
    int N,M;
    double element[MAX_DIM][MAX_DIM];
}matrix;

//basic vector arithmetic

vector vectorInverse(vector);
vector vectorAddition(vector,vector);
vector vectorMinus(vector,vector);
vector vectorScalar(vector,double);
double innerProduct(vector,vector);
vector exteriorProduct(vector,vector);

//basic matrix arithmetic

matrix matrixAddition(matrix,matrix);
matrix matrixMultiplication(matrix,matrix);

//matrix and vector discrete operations

matrix vectorsToMatrix(const vector*,int);
vector* matrixToVectors(const matrix);
matrix matrixHorizontallyConcating(matrix,matrix);
matrix matrixVerticallyConcating(matrix,matrix);

//basic matrix and vector applications

matrix gaussianElimination(matrix,int);
int getRank(matrix);
matrix getInverseMatrix(matrix);

//handy API for debug and visualizing

void displayVector(vector);
void displayMatrix(matrix);
void readVector(vector*);
void readMatrix(matrix*);

#endif
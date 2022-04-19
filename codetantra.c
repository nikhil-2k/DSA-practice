void read(int * a, int m , int n){
printf("Enter %d elements : ", m*n);
for(int i =0 ; i < m ;i++){
for(int j = 0 ;j < n ; j++){
scanf("%d", (a+i*n+j));
}
}
}
void display(int * a , int m , int n){
for(int i = 0 ; i < m ; i++){
for(int j = 0 ; j < n ; j++){
printf("%d ", *(a+i*n+j));
}
printf("\n");
}
}

void multiplicationOfTwoMatrices(int * a, int * b , int m , int n , int q){
int *c = (int *)malloc(m*q*sizeof(int));
for(int i = 0 ; i < m; i++){
for(int j = 0 ; j < q ; j++){
*(c+i*q+j) = 0;
for(int k = 0 ; k < n; k++)
*(c+i*q+j) += *(a+i*n+k) * *(b+k*q+j);
}
}
printf("The Multiplication Matrix is\n");
display(c , m , q);
}
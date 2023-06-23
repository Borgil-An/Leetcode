//Exercicio em questão pede para criarmor uma função shuffle para organizar de maneira xn,yn um array qualquer


int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *shurray = (int*)malloc(2*n*sizeof(int));
    int c = 0;
    int i = n;
    int a = 0;
    int x =0;
    while (x<n){
        shurray[a] = nums [x];
        a++;
        x++;
        shurray[a] = nums [i];
        a++;
        i++;
    }
    *returnSize = a;
   return shurray;
}

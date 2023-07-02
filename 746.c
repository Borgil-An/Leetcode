int min(int a, int b){
    if (a<b){
        return a;
    }
    return b;
}


int minCostClimbingStairs(int* cost, int costSize){
int* custo = (int *)malloc(sizeof(int)*costSize);

for (int i=costSize-1; i>=0; i--){
    if(costSize-i <= 2){
        custo[i] = cost[i];
    }
    else{
        custo[i] = min(custo[i+2],custo[i+1]) + cost[i];
    }
}
return (min(custo[0],custo[1]));
}

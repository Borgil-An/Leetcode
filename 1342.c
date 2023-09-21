int numberOfSteps(int num){
int c = num;
int i = 0;

while (c != 0){
    if (c%2==0){
        c = c/2;
        i++;
    }
    else{
        c = c-1;
        i++;
    }
}
return i;
}

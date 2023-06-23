// Somar os numeros do array com o anterior

int* runningSum(int* nums, int numsSize, int* returnSize){
  int comp=0;
*returnSize = numsSize; 
    
for(int i=1;i<numsSize;i++)
    {
        nums[i]+=nums[i-1];
    }
    return nums;
}

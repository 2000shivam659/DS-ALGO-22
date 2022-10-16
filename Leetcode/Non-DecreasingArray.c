#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool checkPossibility(int* nums, int numsSize){
     for (int i = 1, err = 0; i < numsSize; i++)
            if (nums[i] < nums[i-1])
                if (err++ || (i > 1 && i < numsSize - 1 && nums[i-2] > nums[i] && nums[i+1] < nums[i-1]))
                    return false;  // if any previous element is greater then we return false or a case where the fashion is like grater smaller greater smaller
        return true; //else return true
}

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    bool answer=checkPossibility(arr,size);
    if(answer==true)
    printf("true");
    else
    printf("false");
    return 0;
}
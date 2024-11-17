#include <stdio.h>
int main (){
    int nums[5];

    for (int i=0; i<5; i++){
        scanf("%d", &nums[i]);
    }

    for (int i=0; i<5; i++){
        nums[i]*=2;
        printf("%d\n", nums[i]);
    }
    printf("\n");
}
//
// Created by natha on 21/04/2024.
//

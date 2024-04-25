#include <stdio.h>
int main (){
    int nums[5];

    for (int i=0; i<5; i++){
        scanf("%d", &nums[i]);
    }

    for (int i=0; i<5; i++){
        if (nums[i]%2 == 0) {
            printf("%d\t%p\n", nums[i], &nums[i]);
        }
    }
    printf("\n");
}
//
// Created by natha on 21/04/2024.
//

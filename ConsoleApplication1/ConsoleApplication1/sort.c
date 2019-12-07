//
//  sort.c
//  Algorithm
//
//  Created by Hexkk on 2019/12/07.
//  Copyright © 2019 Hexkk. All rights reserved.
//


#include <stdio.h>

int main()
{
    int input[10];
    int i=0;
    int j=0;
    int k=0;

    for(i=0;i<5;i++)
        scanf_s("%d", &input[i]);

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==i)
                continue;
            if(i==0)
            {
                if(input[i] > input[j])
                {
                    k = input[i];
                    input[i] = input[j];
                    input[j] = k;

                }
            }
            else
            {
                if(i<j)
                {
                    if(input[j] < input[i])
                    {
                        k = input[i];
                        input[i] = input[j];
                        input[j] = k;
                    }
                }
                else
                {
                    if(input[j] > input[i])
                    {
                        k = input[i];
                        input[i] = input[j];
                        input[j] = k;
                    }
                }

            }
        }
    }




    for(j=0;j<5;j++)
        printf("%d ", input[j]);

    return 0;
}

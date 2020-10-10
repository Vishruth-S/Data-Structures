//Program to find fibonacci series  using recursion 


#include<stdio.h>
#include <time.h>
clock_t start, end;
double cpu_time_used;


int fibo(int num)
{    
    if(num == 0 || num == 1)
    return num;
    else
    return fibo(num-1) + fibo(num-2);
}

int main()
{    
    int n;
    printf("Enter the no terms ");
    scanf("%d", &n);    
    start = clock();
    for(int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }
end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
     printf("%d",cpu_time_used);
    return 0; 
}
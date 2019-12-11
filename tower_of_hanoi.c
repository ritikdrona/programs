//Tower of Hanoi
#include<stdio.h>
int towerOfHanoi(int n, char initRod, char finalRod, char auxRod);

void main()
{
    int n;
    printf("Enter the no of Disks in Rod A: ");
    scanf("%d", &n);
    printf("Steps: ");
    printf("\nTotal Steps Required: %d\n", towerOfHanoi(n, 'A', 'C', 'B'));
}

int towerOfHanoi(int n, char initRod, char finalRod, char auxRod)
{
    int steps = 0;
    if(n==0)
        return n;
    if(n==1)
    {
        printf("\nMove %c to %c", initRod, finalRod);
        return n;
    }
    steps += towerOfHanoi(n-1, initRod, auxRod, finalRod);
    printf("\nMove %c to %c", initRod, finalRod);
    steps += towerOfHanoi(n-1, auxRod, finalRod, initRod);
    steps++;
    return steps;
}
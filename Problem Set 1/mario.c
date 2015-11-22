#include <stdio.h>
#include <cs50.h>

int main(void)
{
int steps,i;

printf("Input the number of steps, an integer from 0 to 23:\n");

do
{
steps=GetInt();
if(steps < 0 || steps > 23)
{
printf("Try again! Number has to be from 0 to 23:\n");
}
}
while (steps < 0 || steps > 23);

for(i = 0; i < steps; i++)
{
int j = 0;
int k = steps - 1;

while (k > i)
{
printf(" ");
k--; 
}

do
{
printf("#");

j++;
}
while (j < i+2);

printf("\n");
}
}

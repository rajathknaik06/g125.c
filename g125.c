/*Write a program that lets the user enter the total rainfall for each of the 12 months in an array. The program should calculate and display the total rainfall for the year, the average monthly rainfall, and the months with the highest and lowest amounts of rainfall.

Input format :
The input consists of a list of 12 integers that represent the value of rainfall each month, separated by space.

Output format :
The first line of output prints the total rainfall.

The second line of output prints the integer that represents the average rainfall.

The third line of output prints the month with the lowest rainfall.

The fourth line of output prints the month with the highest rainfall.

Print "Invalid Input" if input values<0.*/

#include<stdio.h>
int main()
{
    int rainfall[15],i,sum=0,avg,min,max,lowmonth=1,highmonth=1,flag=0;
    for(i=0;i<12;i++)
    {
        scanf("%d",&rainfall[i]);
        sum += rainfall[i];
        if(rainfall[i]<0)
            flag=1;
    }
    avg = (sum/12);
    min=rainfall[0];
    for(i=1;i<12;i++)
    {
    if(min> rainfall[i])
    {
    min= rainfall[i];
    lowmonth=i+1;
    }
}
max=rainfall[0];
for(i=1;i<12;i++)
{
    if(max < rainfall[i])
    {
    max= rainfall[i];
    highmonth=i+1;
    }
}
if(flag==0){
    printf("Total rainfall : %d\n",sum);
    printf("Average rainfall : %d\n",avg);
    printf("Lowest rainfall month : %d\n",lowmonth);
    printf("Highest rainfall month : %d",highmonth);
}
else
    printf("Invalid input");
return 0;
}

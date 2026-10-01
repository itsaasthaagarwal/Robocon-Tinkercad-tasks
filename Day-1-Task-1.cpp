#include<iostream>
using namespace std;
int main()
{
    int readings[10];
    int max, min;
    int sum;
    int below;
    int above;
    int average;
    cout<<"Enter 10 readings= ";
    for (int i=0;i<10;i++)
        {
        cin>>readings[i];
        }
    max = readings[0];
    min = readings[0];
    for(int i=0;i<10;i++)
    {
        if (readings[i]>max)
        {  max = readings[i];}
        if (readings[i]<min)
        {  min = readings[i];}
    }
    sum = 0;
    for (int i=0;i<10;i++)
        {
         sum = sum + readings[i];
        }
    average = sum/10;
    below = 0;
    above = 0;
    for (int i=0;i<10;i++)
    {
        if(readings[i]<20)
        {  below++;}   
        if (readings[i]>100)
        {  above++;}   
    }
    cout<<"Maximum value is= "<<max<<"\n";
    cout<<"Minimum value is= "<<min<<"\n";
    cout<<"Average is= "<<average<<"\n";
    cout<<"Below 20 are= "<<below<<"\n";
    cout<<"Above 100 are= "<<above;
    return 0;
}
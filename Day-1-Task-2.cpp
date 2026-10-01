#include<iostream>
using namespace std;
int main()
{
    int times[10]={0};
    int number;
    cout<<"Enter a number= ";
    cin>>number;
    if(number==0)
    {
        times[0]=1; 
    }
    else
        {
        while(number>0)
            {
                int digit = number%10;
                times[digit]++;
                number=number/10;
            }
        }
    for(int i=0;i<10;i++)
        {
            if (times[i]>0)
            {
                cout<<"Frequency of "<<i<<" is "<<times[i]<<"\n";
            }
        }
    return 0;
}
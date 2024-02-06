//C++ Program starts
#include<iostream>
using namespace std;

void find_min_max(int ary[],int size,int* max,int* min)     
{
for(int i=0;i<10;i++)
{
if(ary[i]<*min)
{*min=ary[i];}
};
cout<<"Minimum is: "<<*min<<endl;
for(int i=0;i<10;i++)
{
if(ary[i]>*max)
{*max=ary[i];}
};
cout<<"Maximum is: "<<*max<<endl;
};


int main()
{
int ary[10];
int* min;
int* max;
min=&ary[0];
max=&ary[0];
cout<<"Enter 10 numbers : ";
for(int i=0;i<10;i++)
{
    cin>>ary[i];
}
cout<<"Numbers you entered: ";
for(int i=0;i<10;i++)
{
    cout<<ary[i]<<endl;
}

find_min_max(ary,10,max,min);
return 0;
}
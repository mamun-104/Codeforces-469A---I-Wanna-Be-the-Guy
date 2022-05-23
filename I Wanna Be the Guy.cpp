#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;

    for(i=1;i<=n;i++)
    {
        a[i]=i;
    }

    int x,y,temp,j;
    //For taking x
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cin>>temp;
        for(j=1;j<=n;j++)
        {
            if(a[j]==temp){a[j]=0;}
        }

    }

    //For taking y
    cin>>y;
    for(i=1;i<=y;i++)
    {
        cin>>temp;
        for(j=1;j<=n;j++)
        {
            if(a[j]==temp){a[j]=0;}
        }
    }

    int flag=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]!=0){flag=1;}
    }

    if(flag==0){cout<<"I become the guy."<<endl;}
    else{cout<<"Oh, my keyboard!"<<endl;}



    return 0;
}





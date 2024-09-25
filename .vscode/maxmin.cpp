#include<iostream>
#include<vector>
#include<string.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int i1,i2,i3,i4;
    cin>>i1>>i2>>i3>>i4;
    string s1=to_string(i1);
    string s2=to_string(i2);
    string s3=to_string(i3);
    // string s4=to_string(i4);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());

    int max1=(s1[s1.size()-1]-'0');
    int max2=(s2[s2.size()-1]-'0');
    int max3=(s3[s3.size()-1]-'0');

    int min1=(s1[0]-'0');
    int min2=(s2[0]-'0');
    int min3=(s3[0]-'0');

    int pin=((max1*min1)+(max2*min2)+(max3*min3))-i4;
    cout<<pin;
}
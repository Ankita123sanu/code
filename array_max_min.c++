#include<iostream>
#include<climits>
using namespace std;

// int getmax(int num[],int n)
// {
//     int max = INT_MIN;

//     for(int i=0;i<n;i++){
//         if(num[i]>max){
//             max=num[i];
//         }
//     }
//     return max;
// }

// int getmin(int num[],int n)
// {
//     int min = INT_MAX;

//       for(int i=0;i<n;i++){
//         if(num[i]<min){
//             min=num[i];
//         }
//     }
//     return min;
    
// }
int main()
{
    int x=0;
    int n=2;
    for(int i=1;i<=n;i++)
    {
        x++;
        --x;
        x++;
        ++x;
        x--;
    }
    cout<<x;
}
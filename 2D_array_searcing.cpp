#include<iostream>
#include<climits>
using namespace std;

 /*bool ispresent(int arr[3][4], int target, int i, int j){
    
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
   return 0;
 }
 */

 /*int largestsum(int arr[3][4], int i, int j)
   {
        int maxi=INT_MIN;
        int rowindex=-1;
        for(i=0;i<3;i++){
        int sum=0;
        for(j=0;j<4;j++){

          sum=sum+arr[i][j];

        }
        if(sum>maxi){
            maxi=sum;
            rowindex=i;
        }
      }
      cout<<"maximum is"<<maxi;
      return rowindex;
   }
   */


int main()
{

    int i,j,arr[3][3],target;
    //cout<<"enter no of rows\n";
    //cin>>n;
    //cout<<"enter number of columns\n";
    //cin>>m;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i] [j]<<" ";
        }
        cout<<endl;
    }

  /* cout<<"element you have to search\n";
   //int target;
   cin>>target;
   if(ispresent(arr, target, 3, 4))
   {
    cout<<" element found";
   }
   else
   {
    cout<<"not found";
   }
   cout<<endl;
   cout<<"Printing sum row wise->";
   for(i=0;i<3;i++){
    int sum=0;
    for(j=0;j<4;j++){
        sum=sum+arr[i][j];
      }
      cout<<sum<<" ";
   }
  cout<<endl;
   cout<<"Printing sum column wise->";
   for(j=0;j<4;j++){
    int summ=0;
    for(i=0;i<3;i++){
        summ=summ+arr[i][j];
      }
      cout<<summ<<" ";
   }
   */
 // cout<<"maximum row at index"<<largestsum(arr,3,4)<<" ";

 for(j=0;j<3;j++){
          for(i=0;i<3;i++){
            cout<<arr[i][j]<<" ";
          }
 }
 
  
   return 0;

}
#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, elem, pos, n;
    cout<<"Enter the Size for Array: ";
    cin>>n;
    cout<<"Enter Array Elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    cout<<"At What Position ? ";
    cin>>pos;
    for(i=n; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = elem;
    //n++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<n+1; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}

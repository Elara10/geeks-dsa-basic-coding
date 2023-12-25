// Program for average of an array 
//11th oct

// #include<iostream>
// using namespace std;
// int average(int arr[],int n)
// {
//     float sum=0;
//     for(int i=0;i<n;i++)
//     {
//       sum=sum+arr[i];
      
//     }
//     cout<<"Average of an array is:"<<sum/n <<endl;
// }
// int main()
// {
//     int arr[]={5,4,2,7,3};
//     int n=5;
//     average(arr,n);
//     return 0;
// }


#include<iostream>
using namespace std;
int average(int arr[],int n)
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Average of an array is: "<<sum/n <<endl;
}
int main()
{
    int arr[]={4,2,6,9,3,4};
    int n=6;
    average(arr,n);
}
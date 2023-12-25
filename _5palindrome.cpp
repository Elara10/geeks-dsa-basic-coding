// Check if a number is Palindrome

//13th oct

#include<iostream>
using namespace std;
int reversenum(String s,int n,int start,int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int num=23432;
    int n=5;
    int rev=reversenum(arr,n,0,n-1);
    int pri=printArray(arr,n);
    if(rev==pri)
    {
        cout<<"This is a pallindrome number";
    }
    else{
        cout<<"This is not pallindrome number";

    }

}
// count no. of even and odd elements in an array
//11th oct

// #include<iostream>
// using namespace std;
// int count_even_odd(int arr[],int n)
// {
//     int even=0;
//     int odd=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]%2==0)
//         {
//            even++;
//         }
//         else 
//         {
//           odd++;
//         }
        
//     }
//      cout<<"Total no. of even elements are:"<<even<<endl;
//     cout<<"Total no. of odd elements are:"<<odd<<endl;
    
// }
// int main()
// {
//     int arr[]={5,3,2,6,1};
//     int n=5;
//     count_even_odd(arr,n);
//     // int odd=count_even_odd(arr,n);
//     //
//     return 0;

// }



#include<iostream>
using namespace std;
int count_even_odd(int arr[],int n)
{
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Total no. of even elements are: "<<even<<endl;
    cout<<"Total no. of odd elements are: "<<odd<<endl;

}
int main()
{
    int arr[]={45,76,43,21,6,21,87,43232,64,66,23};
    int n=11;
    count_even_odd(arr,n);

}
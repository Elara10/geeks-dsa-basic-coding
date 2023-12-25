// Program to print the given digit in words

#include<iostream>
using namespace std;
void digit_words(char digit)
{
    switch (digit)
    {
    case '0':
       cout<<"zero";
        break;
     case '1':
       cout<<"one";
        break;
     case '2':
       cout<<"two";
        break;
     case '3':
       cout<<"three";
        break;
     case '4':
       cout<<"four";
        break;
     case '5':
       cout<<"five";
        break;
     case '6':
       cout<<"six";
        break;
     case '7':
       cout<<"seven";
        break;
     case '8':
       cout<<"eight";
        break;
         case '9':
       cout<<"nine";
        break;
    }
}
void printarray(string N)
{
    int i,n;
    for( i=0;i<n;i++)
    {
        digit_words(N[i]);
    }
    // cout<<"Print all the digits in words"<<endl;
   
}
int main()
{
   string N="234567";
    printarray(N);
   //  return 0;
}
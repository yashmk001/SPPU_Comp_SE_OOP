//Created by : Yash Mahesh Khalkar

// Write a function template for selection sort that inputs, sorts and outputs an integer array and
// a float array.






#include<iostream>
using namespace std;
template<class T>
void sort1(T a[], int s){
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < (s-1); j++)
        {
            if(a[j]>a[j+1]){
                T temp;
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
        
    }
    
    for (int i = 0; i < s; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"\nEnter total no of elements: ";
    cin>>n;
    int a[n];
    float b[n];
    cout<<"\nEnter int elements: ";
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    cout<<"\nEnter float elements: ";
    for(int i = 0; i<n; i++){
        cin>>b[i];
    }
    sort1(a,n);
    sort1(b,n);
    return 0;
}
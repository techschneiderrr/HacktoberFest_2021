#include<iostream>

#define ll long long

using namespace std;

//this is the program for merge sort

void MergeArray(int arr[], int l, int m, int h)
{
    int n1=m-l+1, n2=h-m;

    int a[n1], b[n2];

    for(int c=0; c<n1; c++)
        a[c]=arr[l+c];

    for(int d=0; d<n2; d++)
        b[d]=arr[m+1+d];

    int i=0, j=0, k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            i++;
        }
        else if(b[j]<a[i])
        {
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    for(;i<n1;i++, k++)arr[k]=a[i];
    for(;j<n2;j++, k++)arr[k]=b[j];
}

void MergeSort(int a[], int l, int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        MergeSort(a, l, mid);
        MergeSort(a, mid+1, h);
        MergeArray(a, l, mid, h);
    }
}

int main()
{
    int n;
    cout<<"\nEnter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array (give one space b/n them) :"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    MergeSort(arr, 0, n-1);
    cout<<"\n\n\nArray after sort : "<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

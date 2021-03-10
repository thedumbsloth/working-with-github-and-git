#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++)

void swap(int*a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
void selection_sort(int *arr,int n)
{
int i,j,min_index;
min_index=0;
for(i=0;i<n-1;i++)
{
    min_index=i;
    for(j=i+1;j<n;j++)
      {  if(arr[j]<arr[min_index])
       min_index=j;
      }
       swap(&arr[min_index],&arr[i]);
            


}
}

{
     int i;
    rep(i,n) cout<<arr[i]<<" "<<endl;
}

int main()
{ 	
    #ifdef SANJYOTI
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   int n,i;
   cin>>n;
   int a[n],b[n];
 rep(i,n) cin>>a[i];

cout<<"unsorted array"<<endl;
display(a,n);
selection_sort(a,n);
cout<<"sorted array"<<endl;
display(a,n);

 return 0;
}
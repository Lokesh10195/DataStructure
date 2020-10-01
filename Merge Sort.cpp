#include<iostream>
using namespace std;
void merge(int A[], int p, int q, int r) 
{ 
    int i, j, k; 
    int n1 = q -p + 1; 
    int n2 =  r - q; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = A[p + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = A[q + 1+ j]; 
  
    i = 0;  
    j = 0;
    L[n1]=100000;
	R[n2]=100000;
	for(k=p;k<=r;k++)
	{
		if(L[i]<=R[j])
		{
			A[k]=L[i];
			i++;
		}
		else
		{
			A[k]=R[j];
			j++;
		}
	}
	  
    
} 
	  
void mergeSort(int A[], int p, int r) 
{ 
    if (p < r) 
    { 
        int q = (p+r)/2; 
        mergeSort(A, p, q); 
        mergeSort(A, q+1, r); 
        merge(A, p, q, r); 
    } 
} 
void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 

int main() 
{ 
    int n,i,p,r;
    int A[50];
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter elements:";
	for(i=0;i<n;i++)
	  cin>>A[i]; 
  
    printf("Given array is \n"); 
    printArray(A,n); 
    p=0;r=n-1;
    mergeSort(A,p,r); 
  
    printf("\nSorted array is \n"); 
    printArray(A, n); 
    return 0; 
} 

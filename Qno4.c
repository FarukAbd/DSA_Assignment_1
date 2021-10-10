#include<stdio.h>

#include<time.h>

#include<stdlib.h>

void selectionSort(long long int arr[], long long int n){

    for(int i=0; i<n-1; i++)

        for(int j=i+1; j<n; j++)

            if(arr[j]<arr[i]){

                int temp=arr[j];

                arr[j]=arr[i];

                arr[i]=temp;

            }



    printf("Selection Sort Array:\n");

    for(int i=0; i<n; i++)

        printf("%lld ", arr[i]);

    printf("\n");

}

void bubbleSort(long long int arr[], long long int n){

    int cnt=1;

    while(cnt<n){

        for(int i=0; i<n-cnt; i++)

            if(arr[i]>arr[i+1]){

                int temp = arr[i];

                arr[i]=arr[i+1];

                arr[i+1]=temp;

            }

        cnt++;

    }

    printf("Bubble Sort Array:\n");

    for(int i=0; i<n; i++)

        printf("%lld ", arr[i]);

    printf("\n");

}

int main()

{

    printf("Enter no. of elements in array: ");

    long long int n;

    scanf("%lld", &n);

    printf("Elements of array:\n");

    long long int arr[n];

    for(int i=0; i<n; i++)

        scanf("%lld", &arr[i]);

    clock_t start1, end1;

    long int t1;

    start1=clock();

    selectionSort(arr, n);

    end1=clock();

    t1=end1-start1;

    printf("Total time elapsed for selection sort: %f\n", (double)t1/(double)CLOCKS_PER_SEC);

    clock_t start2, end2;

    long int t2;

    start2 = clock();

    bubbleSort(arr, n);

    end2 = clock();

    t2=end2-start2;

    printf("Totao time elapsed for bubble sort: %f\n", (double)t2/(double)CLOCKS_PER_SEC);

    return 0;

}
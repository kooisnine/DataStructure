#include <stdio.h>

void Merge(int sorted_a[], int first, int middle, int last){
    int temp[last-first+1];
    int start = first;
    int mid = middle + 1;
    int i = 0;

    while(start <= middle && mid <= last){

        if(sorted_a[start] < sorted_a[mid]){
            temp[i] = sorted_a[start];
            start++;
            i++;
        }
        else{
            temp[i] = sorted_a[mid];
            mid++;
            i++;
        };
    };

    if(start > middle){
        while(mid<=last){
            temp[i++] = sorted_a[mid++];
        };
    }
    else{
        while(start<=middle){
            temp[i++] = sorted_a[start++];
        };
    };

    for(int k = first ; k <= last ; k++){
        sorted_a[k] = temp[k-first];
    }

}


void MergeSort(int sorted_a[], int first, int last){
    int middle;
    if(first < last){
        middle = (first + last)/2;
        MergeSort(sorted_a, first, middle);
        MergeSort(sorted_a, middle + 1, last);
        Merge(sorted_a, first, middle, last);

    };
}


int main(){

    int num, value;

    scanf("%d", &num);

    int A[num];

    for(int i = 0 ; i < num ; i++ ){
        printf("Input the constant value in the array: ");
        scanf("%d",&value);
        A[i] = value;
    };
    
    MergeSort(A, 0, num-1);

    for(int p = 0 ; p < num ; p++ ){
        printf("%d ", A[p]);
    };

    return 0;
}
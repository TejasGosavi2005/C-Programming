#include <stdio.h>

void mergesort(int low, int mid, int high);
void msortdiv(int low, int high); 

int a[20], n;

int main() {
    int i;
    printf("Enter the size of array:-");
    scanf("%d", &n);
    printf("\nEnter elements to array:-");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nElements before sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d -> ", a[i]);
    }
    msortdiv(0, n - 1);
    printf("\nElements after sorting: "); 
    for (i = 0; i < n; i++) {
        printf("%d -> ", a[i]);
    }
    printf("\n"); 
    return 0; 
}

void mergesort(int low, int mid, int high) {
    int t[50], i, j, k;
    i = low;
    j = mid + 1;
    k = low;

    while ((i <= mid) && (j <= high)) {
        if (a[i] >= a[j]) { 
            t[k++] = a[j++];
        } else {
            t[k++] = a[i++];
        }
    }
    while (i <= mid) {
        t[k++] = a[i++];
    }
    while (j <= high) {
        t[k++] = a[j++];
    }
    for (i = low; i <= high; i++) {
        a[i] = t[i];
    }
}

void msortdiv(int low, int high) { 
    int mid;
    if (low != high) { 
        mid = (low + high) / 2;
        msortdiv(low, mid);
        msortdiv(mid + 1, high);
        mergesort(low, mid, high);
    }
}
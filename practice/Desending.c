#include<stdio.h>
  void desending(int a[],int n){
    int i,j,temp;
    for(i= 0;i<n;i++){
        for(j = 0;j < n-i-1;j++){
            if(a[j] < a[j +1]){
                temp = a[j];
                a[j] = a[j +1];
                a[j +1] = temp;
            }
        }
    }
  }
  void display(int a[],int n){
    int i;
      for(i = 0;i<n;i++){
         printf("->%d",a[i]);
        }
  }
int main(){
  int a[10],n,i;
  printf("Enter the Size of Array:-");
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    printf("Enter the Element:-");
    scanf("%d",&a[i]);
  }
  printf("\nYour array:-");
  for(i = 0;i<n;i++){
    printf("->%d",a[i]);
  }
  desending(a,n);
  printf("\ndesending Array:-");
  display(a,n);
    return 0;
}
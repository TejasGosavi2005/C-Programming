#include<stdio.h>
void main()
{
    int first,last,middle,i,n,find,a[10];
    printf("Enter The Size\n");
    scanf("%d",&n);
    printf("Enter The Element Asending Ordar\n");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter The Value To The Search\n");
    scanf("%d",&find);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while (first<=last)
    {
        if(a[middle]<find)
        first=middle+1;
        else if (a[middle]==find)
        {
            printf("Element Found At Index %d \n",middle);
            break;
        }
        else
        last=middle-1;
        middle=(first+last)/2;
    }
    if (first>last)
    printf("Element Not Found In The list");
}
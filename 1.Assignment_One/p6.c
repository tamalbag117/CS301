#include<stdio.h>
void main(void){
    int key =0,f=0,pos=0,i;
    int arr[]={1,10,2,9,3,9,4,8,5,7,6};
    printf("Enter the elemet to search : ");
    scanf("%d",&key);
    for (i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        if(arr[i]==key){
        f=1;
        pos=i+1;
        break;
        }
    }
    if(f==1)printf("key value {%d} present in  %d position  and number of comparison :%d",key,pos,pos);
    else printf("key value not present in the Array,\n number of comparison %d",pos);
}

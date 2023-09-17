#include<stdio.h>
int main(){
    int arr[10],size,i,num,pos;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array before insertion: \n");
    for(i=0;i<size;i++){
        printf("arr[%d]: %d\n",i,arr[i]);
    }
    printf("Enter the element you want to insert: ");
    scanf("%d",&num);
    printf("Enter the position you want to insert: ");
    scanf("%d",&pos);
    if(pos<=0||pos>=size+1){
        printf("Invalid insertion");
    }
    else{
        for(i=size-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=num;
        size++;
    }
    printf("The array after insertion: \n");
    for(i=0;i<size;i++){
        printf("arr[%d]: %d\n",i,arr[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[10],size,i,pos;
    printf("Enter the size of your array: ");
    scanf("%d",&size);
    printf("Enter the elements of your array: \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array before deletion: \n");
    for(i=0;i<size;i++){
        printf("arr[%d]: %d\n",i,arr[i]);
    }
    printf("Enter the position you want to delete: ");
    scanf("%d",&pos);
    if(pos<=0||pos>=size+1){
        printf("Invalid deletion!");
    }
    else{
        for(i=pos-1;i<=size+1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
    printf("The array after deletion: \n");
    for(i=0;i<size;i++){
        printf("arr[%d]: %d\n",i,arr[i]);
    }
    return 0;
}
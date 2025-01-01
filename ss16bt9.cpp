#include<stdio.h>
void addValue(int *array,int index,int value,int *size){
	for(int i=*size;i>index;i--){
		*(array+i)=*(array+i-1);
	}
	*(array+index)=value;
	(*size)++;
	for(int j=0;j<*size;j++){
		printf("%d ",*(array+j));
	}
}

int main(){
	int array[]={1,2,3,4,5,6,7,8,9};
	int index,value;
	int size=sizeof(array)/sizeof(array[0]);
	printf("mang la: ");
	for(int i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	printf("\nmoi ban nhap vi tri:");
	scanf("%d",&index);
	printf("moi ban nhap gia tri:");
	scanf("%d",&value);
	addValue(array,index,value,&size);
	return 0;
}

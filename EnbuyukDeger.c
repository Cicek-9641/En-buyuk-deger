#include<stdio.h>
#include<stdlib.h>


int main(){	
	int n,i,max=0;
	int *ptr;
	
	printf("toplam eleman sayisini girin:\n");
	scanf("%d",&n);
		
	ptr = (int*)calloc(n,sizeof(int));
	if(ptr == NULL){
		printf("yeterli alan yok!\n");		
	}
	printf("eleman degerlerini girin:\n");

    for(i=0; i<n; i++)
    {
        printf("%d.eleman: ", i+1);
        scanf("%d", ptr+i);
		if(*(ptr+i) > max)
    	    max = *(ptr+i);	
    }
	printf("En buyuk sayi: %d", max);	
	return 0;
}

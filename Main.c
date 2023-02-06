#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int temp,j,limit,i,values[100];
	printf("Enter array limit:\n");
    scanf("%d",&limit);

    printf("Enter Values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
    }

    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(values[i]>values[j]){
                temp=values[i];
                values[i]=values[j];
                values[j]=temp;
            }
        }
    }
    printf("Sorted values:");
    for(i=0;i<limit;i++){
        printf("\n%d",values[i]);
    }

	return EXIT_SUCCESS;
}

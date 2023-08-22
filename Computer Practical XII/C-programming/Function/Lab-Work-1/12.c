// WAP to sort ‘n’ number of strings using function.
#include<stdio.h>
#include<string.h>

void sorting(char a[100][100], int n);

int main(){
	printf("Author: Prashim Timsina\n");
    printf("Program: Sort ‘n’ number of strings using function\n\n");
    
    char a[100][100];
    int n,i;
    
    printf("Enter the number of strings: \t");
    scanf("%d",&n);
    
    for(i=0; i<n ; i++){
    	printf("Enter string in [%d]:\t ", i);
    	scanf("%s", a[i]);
	}
	sorting(a,n);
	return 0;
}
void sorting(char a[100][100], int n){
	int i,j;
	char b[100];
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(strcmp(a[i],a[j])>0){
				strcpy(b,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],b);
			}
		}
	}
	printf("\nThe Sorted String is: \n");
	for(i=0; i<n; i++){
		printf("%s\n",a[i]);
	}
	
}

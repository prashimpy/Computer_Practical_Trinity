 //WAP to store some 'n' natural numbers in a datafile and print them on screen. 
 //Use getw() function. Also print their average.
 #include<stdio.h>
 #include<conio.h>
 int main(){
 	
 	printf("Author: \t Prashim Timsina. \n");
	printf("Program: \t Store and find average of N natural nums.\n\n");
 	
 	FILE *p;
 	int n,i,nf,s,c;
 	
 	p = fopen("file2.txt","w");
 	
 	printf("Enter Number of Natural Nubmers: ");
 	scanf("%d",&n);
 	
 	for(i=1;i<=n;i++){
 		printf("%d ",i);
 		putw(i,p);
	}
	fclose(p);
	
	printf("\n");
	
	p = fopen("file2.txt","r");
	
	printf("The data in the file is: \n");
	while((nf = getw(p)) != EOF){
		printf("%d ", nf);
		s = s + nf;
		c++;
	}
	printf("\nThe average is: %d", s/c);
	fclose(p);
 }

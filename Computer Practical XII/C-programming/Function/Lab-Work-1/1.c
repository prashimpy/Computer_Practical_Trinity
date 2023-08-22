//wap to print the greatest value among four numbers using a function
#include<stdio.h>
int greatest();
int greatest1(int, int, int, int);
int main(){
	
	printf("Author: \t Prashim Timsina. \n");
	printf("Program: \t Greatest number among 4 nums.\n");
	
	int a, b, c, d, g;
	printf("Enter four numbers: \n");
	scanf("%d%d%d%d",&a, &b, &c, &d);
	g = greatest1(a, b, c, d);
	
	printf("The greatest number is = %d", g);
	
//	greatest();
	return 0;
}

// int greatest(){
// 	int great;
// 	int a[5];
// 	int i = 0;
// 	for(i = 0; i<4; i++){
// 		printf("Enter nubmber in position %d", i);
// 		scanf("%d", &a[i]);
// 	}
// 	great = a[0];
// 	for(i = 1; i<4; i++){
// 		if(a[1]<a[i]){
// 			great = a[i];
// 		}
// 	}
	
// 	printf("The greatest number is : %d", great);
// }


int greatest1(int a, int b , int c , int d){
	int e;
	if(a>b && a>c && a>d ){
		 e = a;
	}
	else if(b>a && b>c && b>d){
		e = b;
	}
	else if(c>a && c>b && c>d){
		e = c;
	}
	else{
		e = d;
	}
	return e;
}


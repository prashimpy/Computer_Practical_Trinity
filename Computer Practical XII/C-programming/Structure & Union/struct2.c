//wap to input 20 employees name, position and salary. Then search a record of an employee and its position on the basis of name.

struct emplo {
	char name[10];
	char pos[10];
	int sal;
}v[20];
int main(){
	char sear[10];
	int i;
	
	printf("Author: \t Prashim Timsina \n");
	printf("Program: \t To search data using . \n\n");
	
	printf("Enter data. \n");
	printf("----------------\n");
	for(i=0;i<3;i++){
		printf("Enter name:");
		scanf("%s",v[i].name);
		printf("Enter Position:");
		scanf("%s",v[i].pos);
		printf("Enter Salary:");
		scanf("%d",&v[i].sal);
		printf("\n");
	}
	
	printf("Enter a data to be searched: ");
	scanf("%s",sear);
	
	for(i=0;i<3;i++){
		if(strcmp(sear,v[i].name)==0){
			printf("The data has been found!!!\n");
			printf("\n");
			printf("Name \t Position \t Salary\n");
			printf("%s \t %s \t %d",v[i].name,v[i].pos,v[i].sal);
		}
	}
	return 0;
}

void login(char *x,char *y)
{
	char user_name[20],password[24];
	printf("Please Input Your Name:");
	gets_s(user_name,20);
	while(strcmp(user_name,x)!=0)	
	{
		printf("Your Name Is Wrong!\nInput Again:");
		gets_s(user_name,20);
	}
	printf("Please Input Your Password:");
	gets_s(password,24);
	while(strcmp(password,y)!=0)
	{
		printf("Your Password Is Wrong!\nInput Again:");
		gets_s(password,24);
	}
	printf("\n");
	printf("Welcome to the space!\n");
	printf("\n");
}

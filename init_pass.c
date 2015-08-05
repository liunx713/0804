void init_pass()
{
	char name_user[20],password[24];
	printf("Please Init Your Name:");
	gets_s(name_user,20);
	printf("Please Init Your Password:");
	gets_s(password,24);
	system("cls");
	login(name_user,password);
}
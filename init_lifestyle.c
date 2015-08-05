void init_lifestyle()
{
	int i,j;
	char a[10],b[10],c[10][40],temp[5]="like";
	for(i=0;i<3;i++)
	{
		printf("Please Choose rest Or work Or study:");
		gets_s(a,10);
		printf("Choose like Or hate:");
		gets_s(b,10);
		if(strcmp(b,temp)==0)
			for(j=0;j<10;j++)
			{
				printf("The %dth Thing You Like Is:\n",j+1);
				gets_s(c,20);
			}
		else
			for(j=0;j<10;j++)
			{
				printf("The %dth Thing You Hate Is:\n",j+1);
				gets_s(c,20);
			}
	}
}
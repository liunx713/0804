void init_relative()
{
	struct Member
	{
		char name[20];
		int age;
		char sex[6];
		char relation[10];
	};
	struct Member mem[10];
	int num,i;
	printf("Please Input The Number Of Your Group(1-10 people):");//设置小组人数
	scanf_s("%d", &num);
	while(num>10||num<1)
	{
		printf("Please Input Another One:");
		scanf_s("%d", &num);
	}
	for (i=0;i<num;i++)
	{
		printf("Please The %dth Member Of You(name age sex relationship):\n",i+1);
		scanf_s("%s%d%s%s",mem[i].name,sizeof(mem[i].name),&mem[i].age,mem[i].sex,sizeof(mem[i].sex),mem[i].relation,sizeof(mem[i].relation));
	}
}

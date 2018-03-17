#include <stdio.h>

int main(int argc, char* argv[])
{
	if(argc != 3)
	{
		printf("参数过少！\n");
		return -1;
	}
	char ch;
    FILE* fp1=fopen(argv[1], "r"); //以只读的方式打开文件1，必须存在
	FILE* fp2=fopen(argv[2], "w"); //以只写的方式打开文件2，不存在则建立
	if(fp1==NULL || fp2==NULL)
	{
		perror("fopen");
		return -1;
	}
	while((ch=fgetc(fp1)) != EOF) //不断读取文件1中的字符
	{
		//fprintf(fp2, "%c",ch); //不断写入文件2中
		fputc(ch, fp2);
	}
	return 0;
}

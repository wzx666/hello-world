#include <stdio.h>

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		printf("请输入你想打开的文件名!\n");
		return -1;
	}
	char ch;
	FILE* fp=fopen(argv[1], "r+"); //打开可读写文件，必须存在
	if(fp==NULL)
	{
		perror("fopen");
		return -1;
	}
	printf("open file successfully!\n");
	while((ch=fgetc(fp)) != EOF)
		fputc(ch, stdout);
	fclose(fp);
	return 0;
}

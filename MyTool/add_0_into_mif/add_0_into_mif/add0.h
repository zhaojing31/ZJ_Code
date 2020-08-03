#pragma once
#include<iostream>
#include<string>

void add_0_into_a_mif(const char* filename);
void add_0_into_mifs(const char* path);


void add_0_into_mifs(const char* path)
{
	FILE* fp;
	if (fp = fopen("path", "wb"))
		puts("打开文件夹成功");
	else
		puts("打开文件夹成败");



	fclose(fp);
}

void add_0_into_a_mif(const char* filename)
{

}


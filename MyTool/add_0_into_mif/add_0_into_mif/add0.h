#pragma once
#include<iostream>
#include<string>

void add_0_into_a_mif(const char* filename);
void add_0_into_mifs(const char* path);


void add_0_into_mifs(const char* path)
{
	FILE* fp;
	if (fp = fopen("path", "wb"))
		puts("���ļ��гɹ�");
	else
		puts("���ļ��гɰ�");



	fclose(fp);
}

void add_0_into_a_mif(const char* filename)
{

}


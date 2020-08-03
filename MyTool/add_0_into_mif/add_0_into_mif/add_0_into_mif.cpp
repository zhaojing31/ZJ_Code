#define _CRT_SECURE_NO_WARNINGS 1
//给mif里补0，data_mif里一行16位，ins_mif里一行30位。（总共512行，第513行设为空行）
#include "add0.h"
using namespace std;

void main()
{
	const char* path = "D:\\YJS\\科研\\纹理四叉树 - 暑假小算法\\ip_core";
	//string filename;
	add_0_into_mifs(path);
	//add_0_into_a_mif(filename.c_str);
}








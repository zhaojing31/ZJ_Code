#include"Sysutil.h"

void DirectionList(const string& path,vector<string>& subfile, vector<string>& subdir)
{
	string _path = path;
	_path += "\\*.*";

	_finddata_t file;
	long handle = _findfirst(_path.c_str(),&file); //搜索path路径下的第一个文件,返回文件描述符
	if (handle == -1)
	{
		perror("_findfirst");  //显示出错误的地方(日志系统)
		return;
	}
	do
	{
		//if (file.name[0] == '.')   可能会屏蔽掉以.开头的非隐藏文件
		if(strcmp(file.name,".")==0 || strcmp(file.name,"..")==0)
			continue;   //不显示隐藏文件
		//递归显示目录
		if (file.attrib & _A_SUBDIR)    //按位与
		{
			/*cout << file.name << endl;
			string tmp_path = path;
			tmp_path += "\\file.name";
			DirectionList(tmp_path);*/
			subdir.push_back(file.name);
		}
		else
			//cout << file.name << endl;
			subfile.push_back(file.name);
	} while (_findnext(handle, &file) == 0);
	_findclose(handle);
}
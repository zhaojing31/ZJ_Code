#include"ScanManager.h"
#include"Sysutil.h"


void ScanManager::ScanDirectory(const string& path)
{
	//1.扫描本地文件系统
	vector<string> local_files;
	vector<string> local_dirs;
	DirectionList(path, local_files, local_dirs);
	set<string> local_set;
	local_set.insert(local_files.begin(),local_files.end());
	local_set.insert(local_dirs.begin(),local_files.end());
	//2.扫描数据库文件系统
	set<string> l                                                                                                                                                     ocal_set;
	local_set.insert(local_files.begin(), local_files.end());
	local_set.insert(local_dirs.begin(), local_files.end());
	//3.对比本地文件与数据库文件（增删查改i）
}
#include"ScanManager.h"
#include"Sysutil.h"


void ScanManager::ScanDirectory(const string& path)
{
	//1.ɨ�豾���ļ�ϵͳ
	vector<string> local_files;
	vector<string> local_dirs;
	DirectionList(path, local_files, local_dirs);
	set<string> local_set;
	local_set.insert(local_files.begin(),local_files.end());
	local_set.insert(local_dirs.begin(),local_files.end());
	//2.ɨ�����ݿ��ļ�ϵͳ
	set<string> l                                                                                                                                                     ocal_set;
	local_set.insert(local_files.begin(), local_files.end());
	local_set.insert(local_dirs.begin(), local_files.end());
	//3.�Աȱ����ļ������ݿ��ļ�����ɾ���i��
}
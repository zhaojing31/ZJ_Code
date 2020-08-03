#pragma once

#include"common.h"

//数据库管理
class SqliteManager
{
public:
	SqliteManager();
	~SqliteManager();
public:
	void Open(const string &path);
	void Close();
	void ExecuteSql(const string &sql);
	void GetResultTable(const string &sql,int &row,int &col,char **&ppRet);
private:
	sqlite3* m_db;
};

//文件扫描
class DataManager
{

private:
	SqliteManager m_dbmgr;
};

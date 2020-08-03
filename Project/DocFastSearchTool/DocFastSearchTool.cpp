#define _CRT_SECURE_NO_WARNINGS 1
#include"common.h"
#include"Sysutil.h"
#include"DataManager.h"

//遍历文件
void Test_DirectionList()
{
	const string &path = "D:\\VS2019\\zhaojing_code";
	vector<string> subfile, subdir;
	DirectionList(path,subfile,subdir);
	for (const auto& e : subfile)
		cout << e << endl;
	for (const auto& e : subdir)
		cout << e << endl;
}
//表格操作
int sqlite3_get_table(
	sqlite3* db,
	const char* zSql,
	char*** pazResult,
	int* pnRow,
	int* pnColumn,
	char** pzErrMsg
);
void sqlite3_free_table(char **result);
void test_sqlite()
{
	//打开数据库
	sqlite3* db;
	int rc = sqlite3_open("test.db", &db);
	if (rc != SQLITE_OK)
		printf("Open database failed.\n");
	else
		printf("Open database successed.\n");
	//操作数据库
	string sql = "select * from my_tb";
	char** result;
	int row;
	int col;
	char *zErrMsg = 0;
	sqlite3_get_table(db, sql.c_str(),&result,&row,&col,&zErrMsg );
	for (int i = 1; i <= row; ++i)      //读取result（一维数组）中的结果
	{
		for (int j = 0; j < col; j++)
		{
			printf("%5s",*(result+(i*col)+j));
		}
		cout << endl;
	}
	sqlite3_free_table(result);
	//关闭数据库
	sqlite3_close(db);
}
//API接口
void Test_SqliteManager()
{
	SqliteManager sm;
	sm.Open("doc.db");     //若该数据库不存在，则自动生成

	/*string sql = "create table if not exists doc_tb(id integer primary key autoincrement,doc_name text, doc_path text)";
	sm.ExecuteSql(sql);
	string sql1 = "insert into doc_tb values(null,'stl.pdf','c:\\')";
	sm.ExecuteSql(sql1);
	string sql2 = "insert into doc_tb values(null,'c++.pdf','d:\\')";
	sm.ExecuteSql(sql2);*/
	string sql = "select * from doc_tb";
	int row = 0, col = 0;
	char** ppRet = 0;
	sm.GetResultTable(sql,row,col,ppRet);
	for (int i = 0; i <= row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%-10s", *(ppRet + (i * col) + j));
		}
		printf("\n");
	}
	sqlite3_free_table(ppRet);
}
//日志系统
void Test_Log() 
{
	FILE* fp = fopen("Test.txt","r");
	if (fp == NULL)
	{
		printf("file = %s\n", __FILE__);
		TRACE_LOG("Open File Error.");
		return;
	}
	else
		TRACE_LOG("Open File Success.");
	fclose(fp);
}
void Test_Set()
{
	vector<int> v = { 5,8,9,3,7,6,2,1,0 };
	set<int> s;
	for (const auto &e : v)
		s.insert(e);
	auto it = s.begin();
	while (it != s.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}
void Test_Map()
{
	//映射
	pair<int, string> p1 = { 1,"abc" };
	pair<int, string> p2 = { 5,"jyt" };
	pair<int, string> p3 = { 3,"shh" };
	pair<int, string> p4 = { 2,"jyj" };
	pair<int, string> p5 = { 9,"mbc" };
	pair<int, string> p6 = { 7,"llo" };
	cout << p1.first << " : " << p1.second << endl;
	map<int, string> mp;
	mp.insert(p1);
	mp.insert(p2);
	mp.insert(p3);
	mp.insert(p4);
	mp.insert(p5);
	mp.insert(p6);
	for (const auto& e : mp)
		cout << e.first << " : " << e.second << endl;
}

int main(int argc, char* arvg[])
{
	//Test_DirectionList();
	//test_sqlite();
	//Test_SqliteManager();
	//Test_Log();
	//Test_Set();
	//Test_Map();
	return 0;
}
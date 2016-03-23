//2016-03-23
//平台：华为OJ
//题目：查询输入字符串中最后一个单词的长度，其中单词使用空格
//算法：将字符串前面和后面加上一个空格使得可以讨论所有的情况；使用的栈作为存储结构，将处理完之后的结果放在栈中；

//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
////输入带有空格的字符串，分离后存放在vector中
//void splitstr1(string s, stack<string>& v)
//{
//	//统一化标准
//	string temp = " "+s+" ";
//	int index = 0;
//	for(int i = 0; i < temp.size()-1; i++)
//	{
//		if (temp[i]==' ' && temp[i+1]!=' ')
//		{
//			index = i+1;
//		}
//		if (temp[i]!=' ' && temp[i+1]==' ')
//		{
//			string stemp = temp.substr(index,i+1-index);
//			v.push(stemp);
//		}
//	}
//}
//
//
//int main()
//{
//	string str;
//	getline(cin,str);
//	stack<string> s;
//	splitstr1(str,s);
//	string strlast = s.top();
//	cout << strlast.size();
//	system("pause");
//}
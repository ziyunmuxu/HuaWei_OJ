//2016-03-23
//平台：华为OJ
//题目：输入一行命令(命令可以是简写)，进行匹配，其中如果匹配出多个结果，那这个命令输出"unkown command"
//		如果是两个参数，但是只输入一个是不能匹配的
//算法：首先构思好整体结构
//		将标准的命令存储在一个vector中，将标准命令所对应的语句也存放在相应的vector中(这里应该是可以使用map结构的)
//		将输入的命令使用getline存放在string中
//		对输入的字符串与vector中的字符串进行比较；使用自己定义的函数str_equal1进行比较
//		在比较中首先将字符串进行分离splitstr1(处理方法是前后加上空格)
//		然后判定是否是前缀

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
////////////////////////////////////////////////////////////////////////方法2////////////////////////////
////将字符串中用空格分开的字符串分离开
////考虑开头有空格，空格不止一个，末尾没有空格的情况
////我们可以考虑将字符串的前后都加上空格然后统一情况讨论
//void splitstr1(string s, vector<string>& v)
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
//			v.push_back(stemp);
//		}
//	}
//}
//
////判定s1是不是s2的前缀
//bool iprefix(string s1, string s2)
//{
//	if(s1.size() > s2.size()) return false;
//
//	int i = 0;
//	for(i = 0; i<s2.size() && i<s1.size(); i++)
//	{
//		if (s1[i] != s2[i])
//			break;
//	}
//	if (i == s1.size())
//	{
//		return true;
//	}
//	else
//		return false;
//}
//
//
//
//bool str_equal1(string s1, string s2)
//{
//	vector<string> v1;
//	vector<string> v2;
//	splitstr1(s1,v1);
//	splitstr1(s2,v2);
//
//	if (v1.size() != v2.size())
//		return false;
//
//	for(int i = 0; i < v1.size(); i++)
//		if (!iprefix(v1[i],v2[i]))
//			return false;
//	return true;
//}
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//int recovery(string s,vector<string>& v)
//{
//	int index = -1;
//	for(int i=0; i<v.size(); i++)
//	{
//		string strtemp = v[i];
//		if (str_equal1(s,strtemp))
//		{
//			if (index != -1)
//			{
//				index = -1;
//				break;
//			}
//			else
//				index = i;
//		}
//	}
//	return index;
//}
//
//int main()
//{
//	vector<string> v;
//	v.push_back("reset");
//	v.push_back("reset board");
//	v.push_back("board add");
//	v.push_back("board delete");
//	v.push_back("reboot backplane");
//	v.push_back("backplane abort");
//
//	vector<string> v1;
//	v1.push_back("reset what");
//	v1.push_back("board default");
//	v1.push_back("where to add");
//	v1.push_back("no board at all");
//	v1.push_back("impossible");
//	v1.push_back("install first");
//
//	string s;
//
//	while(getline(cin,s))
//	{
//		int index = recovery(s,v);
//		if(index == -1)
//			cout << "unkown command"<<endl;
//		else
//			cout << v1[index] << endl;
//	}
//		
//	system("pause");
//}
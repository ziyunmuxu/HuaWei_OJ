//2016-03-23
//ƽ̨����ΪOJ
//��Ŀ������һ������(��������Ǽ�д)������ƥ�䣬�������ƥ�����������������������"unkown command"
//		�������������������ֻ����һ���ǲ���ƥ���
//�㷨�����ȹ�˼������ṹ
//		����׼������洢��һ��vector�У�����׼��������Ӧ�����Ҳ�������Ӧ��vector��(����Ӧ���ǿ���ʹ��map�ṹ��)
//		�����������ʹ��getline�����string��
//		��������ַ�����vector�е��ַ������бȽϣ�ʹ���Լ�����ĺ���str_equal1���бȽ�
//		�ڱȽ������Ƚ��ַ������з���splitstr1(��������ǰ����Ͽո�)
//		Ȼ���ж��Ƿ���ǰ׺

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
////////////////////////////////////////////////////////////////////////����2////////////////////////////
////���ַ������ÿո�ֿ����ַ������뿪
////���ǿ�ͷ�пո񣬿ո�ֹһ����ĩβû�пո�����
////���ǿ��Կ��ǽ��ַ�����ǰ�󶼼��Ͽո�Ȼ��ͳһ�������
//void splitstr1(string s, vector<string>& v)
//{
//	//ͳһ����׼
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
////�ж�s1�ǲ���s2��ǰ׺
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
//2016-03-23
//ƽ̨����ΪOJ
//��Ŀ����ѯ�����ַ��������һ�����ʵĳ��ȣ����е���ʹ�ÿո�
//�㷨�����ַ���ǰ��ͺ������һ���ո�ʹ�ÿ����������е������ʹ�õ�ջ��Ϊ�洢�ṹ����������֮��Ľ������ջ�У�

//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
////������пո���ַ��������������vector��
//void splitstr1(string s, stack<string>& v)
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
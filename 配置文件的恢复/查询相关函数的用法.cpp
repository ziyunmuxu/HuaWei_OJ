//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
////������пո���ַ��������������vector��
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
////�����ַ����ɲ�����ʹ�üӷ�
//int main1()
//{
//	string s = "  1234 5678 9  ";
//	//string stemp = " "+"sdfaskdf"+" ";
//	string stemp = " "+s+" ";
//	cout << stemp;
//	system("pause");
//	return 0;
//}
//
////����split����
//int main()
//{
//	string s = "1234 5678   9";
//	vector<string> v;
//
//	splitstr1(s,v);
//	
//	for(int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << endl;
//	}
//	system("pause");
//}
//

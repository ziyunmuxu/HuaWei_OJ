//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int count_space(string s)
//{
//	int count = 0;
//	for(int i=0; i<s.size(); i++)
//		if (s[i] == ' ')
//			count++;
//	return count;
//}
//
////�ж�s1�ǲ���s2��ǰ׺
//bool iprefix(string s1, string s2)
//{
//	int count1 = count_space(s1);
//	int count2 = count_space(s2);
//	if(count1 != count2) return false;
//	if(s1.size() > s2.size()) return false;
//
//	int i = 0;
//	for(i = 0; i<s2.size() && i<s1.size(); i++)
//	{
//		//���صĴ��������ͽ�i����2���ᵼ������һ����
//		/*	if (s1[i] == s2[i]) 
//		i++;
//		else
//		break;*/
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
////����string
////ֻ����ֻ��һ���ո񣬿�ʼ�϶����ǿո�ʼ
//void splitstr(string s, vector<string>& v,int count)
//{
//	int index = 0;
//	for(int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == ' ')
//		{
//			string stemp = s.substr(index,i-index);
//			v.push_back(stemp);
//			index = i+1;
//		}
//	}
//	if (count+1 != v.size())
//	{
//		string stemp = s.substr(index,s.size()-index);
//		v.push_back(stemp);
//	}
//}
//
//
////s1�Ƿ�Ϊs2��ǰ׺
//bool str_equal(string s1, string s2)
//{
//	int count1 = count_space(s1);
//	int count2 = count_space(s2);
//	if(count1 != count2) return false;
//
//	if (count1 == 0)
//		return iprefix(s1,s2);
//
//	//count��Ϊ1����ôʹ�������洢���룬���ж�
//	vector<string> v1;
//	vector<string> v2;
//	splitstr(s1,v1,count1);
//	splitstr(s2,v2,count2);
//	
//	for(int i = 0; i < v1.size(); i++)
//		if (!iprefix(v1[i],v2[i]))
//			return false;
//	return true;
//}
//
//int recovery(string s,vector<string>& v)
//{
//	int index = -1;
//	for(int i=0; i<v.size(); i++)
//	{
//		string strtemp = v[i];
//		if (str_equal(s,strtemp))
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
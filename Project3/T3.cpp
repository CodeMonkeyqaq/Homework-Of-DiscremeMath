/*
*Created by ������
*Student Number 1652977
*This is T3 for DiscremeMath Homework.
*/
#include "iostream"
using namespace std;
const int N = 100;//���ó���N
void output(int s[][N]);//�������
void zifan(int s2[][N]);//�Է��հ�
void duichen(int s2[][N]);//�ԳƱհ�
void chuandi(int s2[][N]);//���ݱհ�
void select();//ѡ����
void exit();//�˳�
int s[N][N], z;
int d, n, i, j;

int main()
{
	select();
	return 0;
}

void select()
{
	cout << "��������������:";
	cin >> n;
	cout << "��������������:";
	cin >> d;
	cout << "�������ϵ����:\n";
	for (i = 0; i < n; i++)
	{
		cout << endl;
		cout << "���������ĵ�" << i << "��Ԫ��(Ԫ���Կո�ָ�):";
		for (j = 0; j < d; j++)
		{
			cin >> s[i][j];
		}
	}
	cout << "�����Ӧ���ѡ���㷨\nl:�Է��հ�\n2:���ݱհ�\n3:�ԳƱհ�\n4:�˳�\n";
	cin >> z;
	switch (z)
	{
	case 1:zifan(s); break;
	case 2:chuandi(s); break;
	case 3:duichen(s); break;
	case 4:exit(); break;
	}
}

void output(int s[][N])
{
	cout << "�����ϵ����Ϊ:\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < d; j++)
		{
			cout << s[i][j];
		}
		cout << endl;
	}
	system("pause");//��ͣ��������ȷ�Ͻ��
	system("cls");//����
}

void zifan(int s2[][N])
{
	for (i = 0; i < n; i++)
	{
		s2[i][i] = 1;
	}
	output(s2);//���
	select();
}

void duichen(int s2[][N])
{
	int s1[N][N];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < d; j++)
		{
			s1[j][i] = s2[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < d; j++)
		{
			s2[i][j] = s2[i][j] + s1[i][j];
			if (s2[i][j] > 1)
			{
				s2[i][j] = 1;
			}
		}
	}
	output(s2);//���
	select();
}

void chuandi(int s2[][N])
{
	int m[N][N], a[N][N], k, h;
	int t[N][N];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < d; j++)
		{
			a[i][j] = 0;
			t[i][j] = s2[i][j];
			m[i][j] = s2[i][j];
		}
	}
	for (h = 0; h < n; h++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (m[i][j] == 1)
				{
					for (k = 0; k < n; k++)
					{
						if (s2[j][k] == 1)
						{
							a[i][k] = 1;
						}
					}
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < d; j++)
			{
				m[i][j] = a[i][j];
				t[i][j] += a[i][j];
				a[i][j] = 0;
				if (t[i][j] > 1)
				{
					t[i][j] = 1;
				}
			}
		}
	}
	output(t);//���
	select();
}

void exit()
{
	exit(1);
}

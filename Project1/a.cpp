/*
*Created by ������
*Student Number:1652977
*Project 1 T A for homework of DiscreteMath
*/
#include <iostream>
#include <windows.h>
using namespace std;
void menu()
{
	cout << "***************************************\n";  //����
	cout << "**                                   **\n";
	cout << "**        ��ӭ�����߼��������       **\n";
	cout << "**                                   **\n";
	cout << "***************************************\n\n";
}
int main()
{
	int a[4];
	int i = -1, j = -1;
	char s;
	menu();
	while (1)
	{
		cout << "\n  ������P��ֵ��0��1��,�Իس�����:";
		cin >> i;  //��ȡP��ֵ
		while (i != 0 && i != 1)
		{
			cout << "\n  P��ֵ��������,����������!";
			Sleep(500);
			system("cls");  //����
			menu();
			cout << "\n  ������P��ֵ��0��1��,�Իس�����:";
			cin >> i;
		}
		cout << "\n  ������Q��ֵ��0��1��,�Իس�����:";
		cin >> j;  //��ȡQ��ֵ
		while (j != 0 && j != 1)
		{
			cout << "\n  Q��ֵ��������,����������!";
			Sleep(500);
			system("cls");  //����
			menu();
			cout << "\n  ������P��ֵ��0��1��,�Իس�����:";
			cout << i<<endl;
			cout << "\n  ������Q��ֵ��0��1��,�Իس�����:";
			cin >> j;
		}
		a[0] = i && j;  //������
		a[1] = i || j;  //������
		a[2] = (!i) || j;  //�̺����㣬����ת��Ϊ������ʽ
		a[3] = ((!i) || j) && ((!j) || i);  //��ֵ���㣬����ת��Ϊ������ʽ
		cout << "\n\n  ��ȡ:\n       P/\\Q = " << a[0]<<endl;  //������
		cout << "  ��ȡ:\n       P\\/Q = " << a[1] << endl;
		cout << "  ����:\n       P->Q = " << a[2] << endl;
		cout << "  ˫����:\n       P<->Q = " << a[3] << endl;
		cout << "\n�Ƿ��������?��y/n��";  //ѯ���Ƿ��������
		if (cin >> s)
		{
			while(s != 'y' && s != 'n')
			{
				cout << "�������,����������!\n"; //����У��
				cin >> s;
			}
			if (s == 'y' || s == 'n')
			{
				if (s == 'y')
				{
					system("cls");  //����
					menu();  //���ض���
				}
				else
				{
					cout << "��ӭ�´��ٴ�ʹ��!\n";  //�˳�
					Sleep(500);
					exit(0);
				}
			}
		}
		else
		{
			cout << "������������������\n";
		}
	}
	return 0;
}

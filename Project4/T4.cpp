/*
*Created by 王星洲
*Student Number 1652977
*This is T4 of DiscreteMath Homework
*/
#include <iostream>
#include "climits"
using namespace std;
const int N = 100;
int p[N], key[N], tb[N][N];

void prim(int v, int n)
{
	int i, j;
	int min;
	for (i = 1; i <= n; i++)
	{
		p[i] = v;
		key[i] = tb[v][i];
	}
	key[v] = 0;
	for (i = 2; i <= n; i++)
	{
		min = INT_MAX;
		for (j = 1; j <= n; j++)
		{
			if (key[j] > 0 && key[j] < min)
			{
				v = j;
				min = key[j];
			}
		}
		cout << "最小耗费是:" << p[v] << "和" << v << endl;
		key[v] = 0;
		for (j = 1; j <= n; j++)
		{
			if (tb[v][j] < key[j])
			{
				p[j] = v;
				key[j] = tb[v][j];
			}
		}
	}
}

int main()
{
	int n, m;
	int i, j;
	int u, v, w;
	cout << "请输入所求图的顶点数目和边的数目(以空格分隔各个数，输入两个0结束):\n"; //输入所求的顶点数目和边数
	while (cin >> n >> m)
	{
		if (m != 0 && n != 0)
		{
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n; j++)
					tb[i][j] = INT_MAX;
			}
			cout << "请输入两条边的节点序号以及它们的权值(以空格分隔各个数):\n";
			while (m--)	      //输入所有边数以及它们的权值
			{
				cin >> u >> v >> w;	  //输入边数以及它们的权值
				tb[u][v] = tb[v][u] = w;
			}
			prim(1, n);
			cout << endl;
			system("pause");
			system("cls");
			cout << "请输入所求图的顶点数目和边的数目(以空格分隔各个数，输入两个0结束):\n"; //输入所求的顶点数目和边数
		}
		else if (n == 0 && m == 0)
		{
			exit(1);
		}
		else
		{
			cout << "输入有误，请重新输入" << endl;
		}
	}
	return 0;
}

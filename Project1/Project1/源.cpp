#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
vector<vector<int>>::iterator it;
vector<int>::iterator itt;

void Initmatrix(vector<vector<int>>& matrix)
{
	int order,input;
	cout << "please input the order of the matrix:" << endl;
	cin >> order;
	cout << "please input the number of the matrix:" << endl;
	for (int i = 0; i < order; i++)
	{
		vector<int>v;
		for (int j = 0; j < order; j++)
		{
			
		
			cin >> input;
			v.push_back(input);
		}
		matrix.push_back(v);
	}
}
void rotate(vector<vector<int>>& matrix)
{
	int n = matrix.size();
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < n; j++) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[n - i - 1][j];
			matrix[n - i - 1][j] = temp;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
}
void print(vector<vector<int>> matrix)
{
	for (it = matrix.begin(); it != matrix.end(); it++)
	{
		for (itt = (*it).begin(); itt != (*it).end(); itt++)
		{
			cout <<setfill(' ')<<setw(5)<<left<< * itt ;
		}
		cout << endl;
	}
}
int main()
{
	vector<vector<int>>matrix;
	Initmatrix(matrix);
	rotate(matrix);
	print(matrix);
	system("pause");
	return 0;
}

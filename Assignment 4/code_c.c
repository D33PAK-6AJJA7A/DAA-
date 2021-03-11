#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int a[r1][c1];
    int b[r2][c2];
    if (c1 != r2)
    {
        cout << "We can’t multiply these matrices.";
    }
    else
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cin >> b[i][j];
            }
        }
        int c[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int sum = 0;
                for (int k = 0; k < c1; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                cout << c[i][j] << "  ";
            }
            cout << endl;
        }
    }
    return 0;
}
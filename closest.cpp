#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> x(N);
    vector<int> y(N);
    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
    }
    double min = 10000000;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            double dis = sqrt(pow(x[j] - x[i], 2) + pow(y[j] - y[i], 2));
            if (dis < min)
            {
                min = dis;
            }
        }
    }
    cout << fixed << setprecision(4) << min << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    sort(P.begin(), P.end());
    int max_R = P[N - 1] - P[0] / K;
    int min_R = 0;
    int answer = 0;
    while (min_R <= max_R)
    {
        int mid = (min_R + max_R) / 2;
        int num = 1;
        int covered = P[0];
        for (int i = 1; i < N; i++)
        {
            if (P[i] - covered > mid)
            {
                covered = P[i];
                num++;
            }
        }
        if (num <= K)
        {
            answer = mid;
            max_R = mid - 1;
        }
        else
        {
            min_R = mid + 1;
        }
    }
    cout << answer << endl;
    return 0;
}
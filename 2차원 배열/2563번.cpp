#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<vector<int>> arr (100, vector<int>(100, 0));

    int n, r, c, ans = 0;
    cin >> n;

    while (n--) {
        cin >> r >> c;
        for (int i = r; i < r + 10; i++) {
            for (int j = c; j < c + 10; j++) {
                if (++arr[i][j] == 1)
                    ans++;
            }
        }
    }

    cout << ans;


	return 0;
}

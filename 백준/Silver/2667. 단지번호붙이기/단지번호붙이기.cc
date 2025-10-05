#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;

int board[30][30];
int vis[30][30];
vector<int> v;


int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            board[i][j] = c - '0';
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (vis[i][j] != 0||board[i][j]==0) continue;
            queue<pair<int, int>> q;
            vis[i][j] = 1;
            q.push({ i, j });

            int num = 0;

            
            while (!q.empty()) {
                pair<int, int> cur = q.front();
                q.pop();
                num++;

                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if (vis[nx][ny] == 1 || board[nx][ny] == 0) continue;

                    vis[nx][ny] = 1;

                    q.push({ nx, ny });
                }
               
            }
            v.push_back(num);
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for (int val : v) {
        cout << val << '\n';
    }

    return 0;
}
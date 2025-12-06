#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = long long;
using pp = pair<int, int>;

const ll INF = (ll)1e18;
#define MAX 1e9
const int MOD = 1000000007;

class Player {
    int level;
    string name;
public:
    Player(){}
    Player(int l, string n) {
        level = l;
        name = n;
    }
    void setLevel(int l) {
        level = l;
    }
    void setName(string n) {
        name = n;
    }
    int getLevel() const {
        return level;
    }
    string getName() const {
        return name;
    }
};


bool cmp(const Player& p1, const Player& p2) {
    return p1.getName() < p2.getName();
}

class Room {
    int max;
    vector <Player> players;
    bool isFull = false;
    int standard;
public:
    Room(int m, Player p) {
        max = m;
        standard = p.getLevel();
        players.push_back(p);
    }
    void add(int l, string n) {
        if (!isFull)
        {
            players.push_back(Player(l, n));
        }
        if (players.size() >= max) isFull = true;
    }
    void print() {
        cout << (getIsFull() ? "Started!" : "Waiting!") << '\n';
        sort(players.begin(), players.end(), cmp);
        for (const auto &p : players) {
            cout << p.getLevel() << " " << p.getName() << '\n';
        }
    }
    int getStandard() const{
        return standard;
    }
    bool getIsFull() {
        return players.size() >= max;
    }
};

class gameManager {
    int roomMax;
    int playerMax;
    vector<Room> rooms;
    int roomN = 0;
public:
    gameManager(int p, int r) {
        roomMax = r;
        playerMax = p;
    }
    void create(int l, string n) {
        rooms.emplace_back(roomMax, Player(l, n));
        roomN++;
    }
    void start() {
        while (playerMax--) {
            int l;
            string n;
            cin >> l >> n;
            if (roomN == 0) {
                create(l, n);
                continue;
            }
            bool joined = false;
            for (int i = 0; i < roomN; i++) {
                if (l <= rooms[i].getStandard() + 10 && l >= rooms[i].getStandard() - 10&&!rooms[i].getIsFull()) {
                    rooms[i].add(l, n);
                    joined = true;
                    break;
                }
            }
            if (!joined)
                create(l, n);
        }
        for (auto& r : rooms) {
            r.print();
        }
    }
};

int main() {
    fastio;

    int p, m;
    cin >> p >> m;
    gameManager gm(p, m);
    gm.start();

    return 0;
}
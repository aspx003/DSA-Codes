// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/tram-ride-d7ff3a92/
#include<bits/stdc++.h>
using namespace std;

long long solve (int N, int start, int finish, vector<int> &Ticket_cost) {
    long long clock = 0;
    long long anti_clock = 0;

    if(start == finish) {
        return 0;
    }

    int tmp = start - 1;
    while (tmp != finish - 1)
    {
        clock += Ticket_cost[tmp];
        tmp = (tmp + 1) % N;
    }

    tmp = (finish - 1) % N;

    while (tmp != start - 1)
    {
        anti_clock += Ticket_cost[tmp];
        tmp = (tmp + 1) % N;
    }
    
    return min(clock, anti_clock);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int start;
    cin >> start;
    int finish;
    cin >> finish;
    vector<int> Ticket_cost(N);
    for(int i_Ticket_cost = 0; i_Ticket_cost < N; i_Ticket_cost++)
    {
    	cin >> Ticket_cost[i_Ticket_cost];
    }

    long long out_;
    out_ = solve(N, start, finish, Ticket_cost);
    cout << out_;
}
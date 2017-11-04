#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long DFS_Get_Distance(vector< vector<int> >& edgeList, vector<int>& visited, int node, long long &distance){
    visited[node] = 1;
    distance++;
    for(int i = 0; i < edgeList[node].size(); i++){
        if(visited[edgeList[node].at(i)] == 0){
            DFS_Get_Distance(edgeList, visited, edgeList[node].at(i), distance);
        }
    }
    return distance;
}

long long DFS(int nodes, vector< vector<int> >& edgeList, vector<long long>& freq){
    vector<int> visited(nodes, 0);
    long long singles = 0;
    for(int i = 0; i < nodes; i++){
        if(visited[i] == 0){
            long long distance = 0;
            distance = DFS_Get_Distance(edgeList, visited, i, distance);
            if(distance > 1){
                freq.push_back(distance);
            }
            else{
                singles++;
            }
        }
    }
    return singles;
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;
    vector< vector<int> > edgeList(nodes);
    while(edges--){
        int x, y;
        cin >> x >> y;

        edgeList[x].push_back(y);
        edgeList[y].push_back(x);
    }
    vector<long long> freq;
    long long singles = DFS(nodes, edgeList, freq);
    long long answer = 0;
    long long sum = 0;
    int i;
    for(i = 0; i < freq.size()- 1; i++){
        sum += freq[i];
        for(int j = i + 1; j < freq.size(); j++){
            answer += freq[i]*freq[j];
        }
        answer += freq[i]*singles;
    }
    answer += freq[i]*singles;
    answer += singles*(singles - 1)/2;

    cout << answer << endl;
    return 0;
}

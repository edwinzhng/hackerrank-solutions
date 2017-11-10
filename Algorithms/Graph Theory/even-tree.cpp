#include <vector>
#include <iostream>
using namespace std;

int DFS_Get_Distance(vector< vector<int> >& edgeList, vector<int>& visited, int node, int &distance){
    visited[node] = 1;
    distance++;
    for(int i = 0; i < edgeList[node].size(); i++){
        if(visited[edgeList[node].at(i)] == 0){
            DFS_Get_Distance(edgeList, visited, edgeList[node].at(i), distance);
        }
    }
    return distance;
}

bool DFS(int nodes, vector< vector<int> >& edgeList){
    vector<int> visited(nodes, 0);
    for(int i = 0; i < nodes; i++){
        if(visited[i] == 0){
            int distance = 0;
            distance = DFS_Get_Distance(edgeList, visited, i, distance);
            if(distance % 2 != 0){
                return false;
                break;
            }
        }
    }
    return true;
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;
    vector< vector<int> > edgeList(nodes);
    vector< pair<int,int> > edgeToRemove(nodes);
    for(int i = 0; i < edges; i++){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        edgeList[x].push_back(y);
        edgeList[y].push_back(x);
        edgeToRemove[i] = make_pair(x, y);
    }
    int count = 0;

    for(int i = 0; i < edges; i++){
        int x = edgeToRemove[i].first;
        int y = edgeToRemove[i].second;

        for(int j = 0; j < edgeList[x].size(); j++){
            if(edgeList[x].at(j) == y){
                edgeList[x].erase(edgeList[x].begin() + j);
            }
        }
        for(int j = 0; j < edgeList[y].size(); j++){
            if(edgeList[y].at(j) == x){
                edgeList[y].erase(edgeList[y].begin() + j);
            }
        }

        if(DFS(nodes, edgeList)){
            count++;
        }
        else{
            edgeList[x].push_back(y);
            edgeList[y].push_back(x);
        }
    }

    cout << count << endl;
    return 0;
}

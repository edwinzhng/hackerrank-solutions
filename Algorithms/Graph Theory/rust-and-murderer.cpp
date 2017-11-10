#include <vector>
#include <iostream>
#include <string>
#include <map>
using namespace std;

map<int,int> edgeList[200001];
int visited[200001], q[200001], distances[200001];

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int nodes, edges;
        cin >> nodes >> edges;

        for (int i = 0; i <= nodes; i++){
             edgeList[i].clear();
        }

        while(edges--){
            int x, y;
            cin >> x >> y;
            edgeList[x][y] = 1;
            edgeList[y][x] = 1;
        }

        int source;
        cin >> source;

        int current_node = 0, edge = 1;

        memset(visited,0,sizeof(visited));
        q[0] = source;
        visited[source] = 1;
        distances[source] = 0;

        while(current_node < edge){
            for(int i = 1; i <= nodes; i++){
                if(edgeList[q[current_node]][i] != 1 && visited[i] == 0){
                    q[edge++] = i;
                    visited[i] = 1;
                    distances[i] = distances[q[current_node]] + 1;
                }
            }
            if(edge >= nodes){
                break;
            }
            current_node++;
        }

        for(int i = 1; i <= nodes; i++){
            if(i != source){
                cout << distances[i] << " ";
            }
        }

        cout << endl;
    }
    return 0;
}

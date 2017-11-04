#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <list>
#include <limits>
using namespace std;

int dijkstra(vector< list< pair<int,int> > >& edgeList, int nodes, int source, int target){
    vector<int> distances(nodes + 1, numeric_limits<int>::max());
    distances[source] = 0;
    set< pair<int,int> > q;
    q.insert( {0,source} );

    while(!q.empty()){
        int current_node = q.begin()->second;
        if (current_node == nodes){
            return distances[target];
        }
        q.erase(q.begin());
        for(auto node : edgeList[current_node]){
            int adjustment = 0;
            if(node.second - distances[current_node] < 0){
                adjustment += abs(node.second - distances[current_node]);
            }
            if(distances[current_node] + node.second - distances[current_node] + adjustment < distances[node.first]){
                q.erase( {distances[node.first], node.first} );
                distances[node.first] = distances[current_node] + node.second - distances[current_node] + adjustment;
                q.insert( { distances[node.first], node.first} );
            }
        }
    }
    return distances[target];
}

int main() {
    ios::sync_with_stdio(false);
    int nodes, edges;
    cin >> nodes >> edges;
    vector< list< pair<int,int> > > edgeList(nodes + 1);
    for(int i = 0; i < edges; i++){
        int x, y, length;
        cin >> x >> y >> length;
        edgeList[y].push_back( {x, length} );
        edgeList[x].push_back( {y, length} );
    }
    int source = 1, target = nodes;
    int answer = dijkstra(edgeList, nodes, source, target);

    if(answer == numeric_limits<int>::max()){
        cout << "NO PATH EXISTS" << endl;
    }
    else{
        cout << answer << endl;
    }
    return 0;
}

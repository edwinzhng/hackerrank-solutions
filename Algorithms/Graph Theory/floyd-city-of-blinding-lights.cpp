#include<iostream>
#define INT_MAX 99999;
using namespace std;

int main()
{
	int distances[401][401];
	int i, j, k, nodes, edges, x, y, weight, q, source, target;
	cin >> nodes >> edges;
	for(i = 1; i <= nodes; i++)
	{
		for(j = 1; j <= nodes; j++)
		{
			if(i == j){
				distances[i][j] = 0;
            }
			else{
				distances[i][j] = INT_MAX;
            }
		}
	}
	for(i = 0; i < edges; i++){
		cin >> x >> y >> weight;
		distances[x][y]= weight;
	}

	for(k = 1; k <= nodes; k++)
	{
		for(i = 1; i <= nodes; i++)
		{
			for(j = 1; j <= nodes; j++)
			{
				if(distances[i][k] + distances[k][j] < distances[i][j])
				{
					distances[i][j] = distances[i][k] + distances[k][j];
				}
			}
		}
	}

	cin >> q;
	while(q--)
	{
		cin >> source >> target;
		if(distances[source][target]==99999)
			cout << "-1" << endl;
		else
			cout << distances[source][target] << endl;
	}
	return 0;
}

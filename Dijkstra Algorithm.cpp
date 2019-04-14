//==================================================================================
// Title   : Design and implement a program that helps an on-call doctor to reach
//           his patients in different parts of the city using Dijkstra’s Algorithm
// Name    : Niranjan Vinod Patil
//===================================================================================

#include <iostream>
using namespace std;

int size;
int dist[100], visited[100];
int city[100][100];
int source, destination;
int cost[100][100];

int minDistance(int dist[], int visited[]) {
	int min = 9999, index;
	for (int i = 1; i <= size; i++) {
		if (visited[i] == 0 && dist[i] <= min) {
			min = dist[i];
			index = i;
		}
	}
	return index;
}

void path() {

	for (int i = 1; i <= size; i++) {
		if (i == 1) {
			dist[i] = 0;
			visited[i] = 0;
		} else {
			dist[i] = 9999;
		}
	}

	for (int count = 1; count <= size; count++) {
		int u = minDistance(dist, visited);
		visited[u] = 1;
		for (int v = 1; v <= size; v++) {
			if (!visited[v] && cost[u][v] && dist[u] != 9999
					&& dist[u] + cost[u][v] < dist[v]) {
				dist[v] = dist[u] + cost[u][v];
			    
			}
		}
	}
	cout << "Distance from region " << source << " to region " << destination
			<< " is ";
	cout << dist[destination];
}

int main() {

	int distance;
	int choice;
	cout << "\n Enter number of patients in the city:";
	cin >> size;

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {
			cout << "\n Enter distance from location " << i << " to " << j
					<< " :";
			cin >> distance;
			city[i][j] = distance;
			cost[i][j] = distance;

			if (j == size) {
				cout << "\n";
			}
		}
	}
	cout << "\n Cost matrix for the city is: ";
	cout << "\n";
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {

			cout << city[i][j] << " ";

			if (j == size) {
				cout << "\n";
			}
		}
	}
	cout << "\n";

	do {
		cout << "Enter the current position of doctor: ";
		cin >> source;
		cout << "Enter the desired destination of doctor: ";
		cin >> destination;

		path();

		cout << "\n";
		cout << "\nDo you want to continue. 0-Yes  1-No: ";
		cin >> choice;

	} while (choice == 0);

	return 0;
}



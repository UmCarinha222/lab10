#include <stdio.h>
#include <math.h>

struct City {
    char name[100];
    float x;
    float y;
};

float distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int n;
    printf("Enter the number of cities: ");
    scanf("%d", &n);

    struct City cities[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the name and position of city %d: ", i + 1);
        scanf("%s %f %f", cities[i].name, &cities[i].x, &cities[i].y);
    }

    float distances[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            distances[i][j] = distance(cities[i].x, cities[i].y, cities[j].x, cities[j].y);
        }
    }

    printf("Matrix of Distances: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", distances[i][j]);
        }
        printf("\n");
    }

    int city1, city2;
    printf("Enter the number of two cities to find the distance between them: ");
    scanf("%d %d", &city1, &city2);
    printf("Distance between %s and %s is %.2f\n", cities[city1 - 1].name, cities[city2 - 1].name, distances[city1 - 1][city2 - 1]);

    return 0;
}

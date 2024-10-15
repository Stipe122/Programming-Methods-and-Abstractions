#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int x;
    int y;
} point;

int comparePoints(const void* a, const void* b) {
    const point* pointA = (const point*)a;
    const point* pointB = (const point*)b;

    if (pointA->x < pointB->x) {
        return -1;
    } else if (pointA->x > pointB->x) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    point points[] = {{1, 2}, {4, 5}, {2, 8}, {6, 3}, {9, 1}};
    int numPoints = sizeof(points) / sizeof(points[0]);

    qsort(points, numPoints, sizeof(point), comparePoints);

    point searchPoint;
    printf("Unesite koordinate točke (x, y): ");
    scanf("%d %d", &searchPoint.x, &searchPoint.y);

    point* foundPoint = (point*)bsearch(&searchPoint, points, numPoints, sizeof(point), comparePoints);

    if (foundPoint != NULL) {
        printf("Točka (%d, %d) je pronađena.\n", foundPoint->x, foundPoint->y);
    } else {
        printf("Točka (%d, %d) nije pronađena.\n", searchPoint.x, searchPoint.y);
    }

    return 0;
}

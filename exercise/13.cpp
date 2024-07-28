#include <cstdio>
#include <cmath>

int main() {
    int x1,x2,y1,y2,jarak_manhattan;
    
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    jarak_manhattan = abs(x1 - x2) + abs(y2 - y1);

    printf("%d", jarak_manhattan);
    
    return 0;
}
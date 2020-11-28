#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[256], *p, *t;
    int nr = 0;
    cin.getline(s, 255);
    p = strtok(s, " .,!?;");
    t = p;
    while (p != NULL) {
        if (strcmp(p, t) == 0) nr++;
        p = strtok(NULL, " .,!?;");
    }
    cout << nr;
}
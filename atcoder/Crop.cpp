#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int h, w;
    if (!(cin >> h >> w)) return 0;


    vector<vector<char>> arr(h, vector<char>(w));
    
    int rowMin = 1e9;
    int rowMax = -1; 
    int colMin = 1e9;
    int colMax = -1; 

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> arr[i][j];
        
            if (arr[i][j] == '#') {
                rowMin = min(rowMin, i);
                rowMax = max(rowMax, i);
                colMin = min(colMin, j);
                colMax = max(colMax, j);
            }
        }
    }

    if (rowMin == 1e9) {
        return 0; 
    }


    for (int i = rowMin; i <= rowMax; i++) {
        for (int j = colMin; j <= colMax; j++) {
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}
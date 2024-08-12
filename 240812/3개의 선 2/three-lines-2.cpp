#include <iostream>

#define MAX_X 10
#define MAX_Y 10

using namespace std;

int n, x, y;
int cord[MAX_X + 1][MAX_Y + 1];
int tmp[MAX_X + 1][MAX_Y + 1];
bool can;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        cord[x][y] = 1;
    }
    
    for (int xyi = 0; xyi < 2; xyi++){
        for (int i = 0; i <= MAX_X; i++){
            for (int xyj = 0; xyj < 2; xyj++){
                for (int j = 0; j <= MAX_X; j++){
                    for (int xyk = 0; xyk < 2; xyk++){
                        for (int k = 0; k <= MAX_X; k++){
                            copy(&cord[0][0], &cord[0][0] + (MAX_X + 1) * (MAX_Y + 1), &tmp[0][0]);
                            if (xyi == 0 && xyj == 0 && xyk == 0){
                                for (int d = 0; d <= MAX_X; d++){
                                    tmp[i][d] = 0;
                                    tmp[j][d] = 0;
                                    tmp[k][d] = 0;
                                }
                            }
                            else if (xyi == 1 && xyj == 0 && xyk == 0){
                                for (int d = 0; d <= MAX_X; d++){
                                    tmp[d][i] = 0;
                                    tmp[j][d] = 0;
                                    tmp[k][d] = 0;
                                }
                            }
                            else if (xyi == 1 && xyj == 1 && xyk == 0){
                                for (int d = 0; d <= MAX_X; d++){
                                    tmp[d][i] = 0;
                                    tmp[d][j] = 0;
                                    tmp[k][d] = 0;
                                }
                            }
                            else if (xyi == 1 && xyj == 0 && xyk == 1){
                                for (int d = 0; d <= MAX_X; d++){
                                    tmp[d][i] = 0;
                                    tmp[j][d] = 0;
                                    tmp[d][k] = 0;
                                }
                            }
                            else if (xyi == 1 && xyj == 1 && xyk == 1){
                                for (int d = 0; d <= MAX_X; d++){
                                    tmp[d][i] = 0;
                                    tmp[d][j] = 0;
                                    tmp[d][k] = 0;
                                }
                            }
                            else if (xyi == 0 && xyj == 1 && xyk == 0){
                                for (int d = 0; d <= MAX_X; d++){
                                    tmp[i][d] = 0;
                                    tmp[d][j] = 0;
                                    tmp[k][d] = 0;
                                }
                            }
                            else if (xyi == 0 && xyj == 1 && xyk == 1){
                                for (int d = 0; d <= MAX_X; d++){
                                    tmp[i][d] = 0;
                                    tmp[d][j] = 0;
                                    tmp[d][k] = 0;
                                }
                            }
                            else if (xyi == 0 && xyj == 0 && xyk == 1){
                                for (int d = 0; d <= MAX_X; d++){
                                    tmp[i][d] = 0;
                                    tmp[j][d] = 0;
                                    tmp[d][k] = 0;
                                }
                            }

                            bool check = true;
                            for (int i = 0; i <= MAX_X; i++){
                                if (!check) break;
                                for (int j = 0; j <= MAX_Y; j++){
                                    if (tmp[i][j] == 1) {
                                        check = false;
                                        break;
                                    }
                                }
                            }

                            if (check) can = true;
                        }
                    }
                }
            }
        }
    }

    cout << can;
    return 0;
}
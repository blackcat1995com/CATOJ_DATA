#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 6, INF = 0x3f3f3f3f;

char g[N][N], bak[N][N];

void turn(int x, int y){
	int dx[] = {-1, 0, 1, 0, 0}, dy[] = {0, 1, 0, -1, 0};
  	for(int i = 0; i < 5; i++){
    	int nx = x + dx[i], ny = y + dy[i];
      	if(nx < 0 || nx >= 5 || ny < 0 || ny >= 5) continue;
      	g[nx][ny] ^= 1;
    }
}

int main() {
  
  	int T;
  	cin >> T;
    
    
  	while(T--){

        int ans = INF;
    	for(int i = 0; i < 5; i++)	cin >> g[i];
      	 
      	// ����ö�ٵ�һ�� 32 �ַ���
      	for(int i = 0; i < 1 << 5; i++){
        	int cnt = 0;
          	memcpy(bak, g, sizeof g);
          
          	for(int j = 0; j < 5; j++){
            	if(i >> j & 1){
                	cnt++;
                  	turn(0, j);
                }
            }

            // ��һ���Ѿ��̶�������0~3��
            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 5; j++){
                    if(g[i][j] == '0'){
                        cnt++;
                        turn(i + 1, j);
                    }
                }
            }
          
            // ������һ���Ƿ���0�������0��ʧ��
            bool is_success = true;
            for(int i = 0; i < 5; i++){
                if(g[4][i] == '0'){
                    is_success = false;
                    break;
                } 
            }
          
            if(is_success) ans = min(ans, cnt);
            memcpy(g, bak, sizeof bak);

            
        }
        if(ans <= 6) cout << ans << endl;
        else puts("-1");
    }
  
  	
	
	return 0;
}



#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int n;
char allstr[25][30];

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> allstr[i];
  	
  	for(int i = 1; i <= n; i++){
    	for(int j = i + 1; j <= n; j++){

            char tmps1[60], tmps2[60];

        	strcpy(tmps1, allstr[i]);
            strcat(tmps1, allstr[j]);

          	strcpy(tmps2, allstr[j]);
          	strcat(tmps2, allstr[i]);
          	if(strcmp(tmps1, tmps2) < 0){
            	strcpy(tmps1, allstr[i]);
              	strcpy(allstr[i], allstr[j]);
              	strcpy(allstr[j], tmps1);
            }
        }
    }
  
  	for(int i = 1; i <= n; i++) cout << allstr[i];
	
	return 0;
}



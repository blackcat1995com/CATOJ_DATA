#include <iostream>//Rock Scissors Paper
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    int n;
    cin >> n;
    string player1,player2;
    string s1 = "Rock";
    string s2 = "Scissors";
    string s3 = "Paper";
     
    while (n--)
    {
        cin >> player1 >> player2;
     
        if ((player1 == s1 && player2 == s2) ||
            (player1 == s2 && player2 == s3) ||
            (player1 == s3 && player2 == s1)
            )
        {
            cout << "Player1" << endl;
        }
        else if ((player1 == s3 && player2 == s2) ||
                 (player1 == s1 && player2 == s3) ||
                 (player1 == s2 && player2 == s1)
            )
        {
            cout << "Player2" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}

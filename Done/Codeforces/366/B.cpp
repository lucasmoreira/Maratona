//This code was made by Breno Moura, Codeforces Handle: Brelf
//From University of São Paulo - USP
//If you are trying to hack me I wish you can get it, Good Luck :D
#include<bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int MAXN=112345;
const int INF=0x3f3f3f3f;
const ll  MOD=1000000007;



int main(){
  int n;
  scanf("%d", &n);
  int total = 0;
  for(int i=0;i<n;i++){
    int a;
    scanf("%d", &a);
    total += a - 1;
    if(total%2 == 0) printf("2\n");
    else printf("1\n");
  }
  return 0;
}
    




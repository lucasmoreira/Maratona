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

const int MAXN=1123456;
const int INF=0x3f3f3f3f;
const ll  MOD=1000000007;

int n, m;

int a[MAXN], b[MAXN];
int ord[MAXN];

pii v[MAXN];
int nxt[MAXN];

bool cmp(int x, int y){
  if(a[x]==a[y]){
    return b[x] > b[y];
  }
  return a[x] < a[y];
}

int main(){
  scanf("%d%d", &n, &m);
  for(int i=1;i<=m;i++){
    scanf("%d%d", &a[i], &b[i]);
    ord[i] = i;
  }
  sort(&ord[1],&ord[m+1],cmp);
  for(int i=0;i<=n;i++) nxt[i] = i+2;
  int vx = 1;

  for(int i=1;i<=m;i++){
    int q = ord[i];
    if(b[q]){
      v[q].first = vx;
      v[q].second = ++vx;
    }
    else{
      int f = upper_bound(nxt,nxt+n, nxt[0]) - nxt - 1;

      if(nxt[f]+1 > vx){
	puts("-1");
	return 0;
      }
      else{
	v[q].first = f+1;
	v[q].second = 1 + nxt[f]++;
      }
    }
  }
  
  for(int i=1;i<=m;i++) printf("%d %d\n", v[i].first, v[i].second);
  return 0;
}

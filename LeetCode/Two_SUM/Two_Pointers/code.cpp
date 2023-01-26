#include <iostream>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <stack>
#include <numeric> 

using namespace std;

// CP template
typedef pair<int,int> pii;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
#define all(v)       ((v).begin()), ((v).end())
#define rall(v)      ((v).rbegin()), ((v).rend())
#define endl "\n"

void fast_io()
{
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL);
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);    
}

const int N = 2e5 + 10 , INF = 0x3f3f3f3f;
// int a[N];
 
bool cmp(int a,int b){
  return a>b;
}
 
ll gcd(int a,int b){
  while(b^=a^=b^=a%=b);
  return a;
}

void strip(string &s)
{
  int write = 0;
  for (int read = 0; read < s.size(); read++) {
  if (s[read] != ' ' || (write > 0 && s[write - 1] != ' '))
    {s[write++] = s[read];}
  }
  s.resize(write);
}


// Problem's code
void solve()
{
  long long v,target;
  cin >> v >> target;
  std::vector<int> V;
  long long numb;
  for(int i = 0; i < v; i++)
  {
    cin >> numb;
    V.push_back(numb);
  }
  sort(all(V));
  int res=0;
  int j=0, k=v-1;
  long long low, high;

  while(j!=k)
  {
    low = V[j], high = V[k];

    if(low + high > target)
    {
      k--;
    }
    else if(low + high < target)
    {
      j++;
    } 
    else
    {
      res ++;
      cout << j+1 << " "  << k+1 << endl;
      break;
    }
  }
  if(res==0){cout << -1 << endl;}
}

// Main function
int main()
{
  fast_io();
  solve();
}

// There is a group of MMA fighters standing together in a line. Given the value of their strengths, find the strength of the strongest fighter in continuous sub-groups of size k.
//
// Input Format
// First line contains an integer N, the number of fighters Followed by N integers where i'th integer denotes the strength of i'th fighter. Next line contains the size of sub-group k
//
// Constraints
// 1<=N<=10^7
// 1<=k<=N
// 1 <= Ai <= 100000
//
// Output Format
// Space separated integers in a single line denoting strength of strongest fighters in the groups.
//
// Sample Input
// 5
// 1 3 1 4 5
// 3
// Sample Output
// 3 4 5
// Explanation
// First sub-group: 1 3 1 --> Max strength is 3
// Second sub-group: 3 1 4 --> Max strength is 4
// Third sub-group: 1 4 5 --> Max strength is 5
#include <iostream>
#include <deque>
#define ll long long int
using namespace std;
int main() {

    ll n,k,a[100000]={};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    deque<ll>q(k);
    ll i=0;
    for( ;i<k;i++){
        while(!q.empty() && a[i]>=a[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }
  cout<<a[q.front()]<<" ";
  //
    for(;i<n;i++){
        //removal
        while(!q.empty() && q.front()<=i-k){
        q.pop_front();
        }
        //adding
        while(!q.empty() && a[i]>=a[q.back()]){
        q.pop_back();
        }
        q.push_back(i);
            cout<<a[q.front()]<<" ";
    }
    return 0;
}

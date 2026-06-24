#include <bits/stdc++.h>
using namespace std;
void solve(){

	 int n,l,r;
	 cin >> n >> l >> r;
	 vector<int> a(n);
	 for(int i=0;i<n;i++){
	     cin >> a[i];
	 }
	 int max1=0;
	 int max2=0;
	 for(int i=0;i<l-1;i++){
	     max1+=a[i];
	 }

     if(r!=n){
	 for(int i=r;i<n;i++){
	     max2+=a[i];
	 }}
	 cout << max(max1,max2) << "\n";
     return;
}
int main() {
    int q;
    cin >> q;
    while(q--)solve();
    return 0;



}

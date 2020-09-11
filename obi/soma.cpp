#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll int seq[1010101], soma[1010101];

ll int sum(int l, int r){
    if(l == 0)
        return soma[r];
	else
        return soma[r] - soma[l-1];
}

int main(){
    ios::sync_with_stdio(false);
    ll int n, k, res = 0, l = 0;
    
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> seq[i];
    
    soma[0] = seq[0];

    for (int i = 1; i < n; i++)
        soma[i] = soma[i-1] + seq[i];

    for (l = 0; l < n; l++)
        for (int r = l; r < n; r++)
            if(sum(l, r) == k)
                res++;
                while(seq[l+1] == 0 && l+1 < n){
                    res++;
                    l++;
                }
                

    cout << res << "\n";

    return 0;
}

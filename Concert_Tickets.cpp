#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


/*int solve(){
	ll n, m;
	cin >> n >> m;
	multiset<ll> price_of_ticket;
	for (ll i = 0; i < n; i++)
	{
		ll price;
		cin >> price;
		price_of_ticket.insert(price);
	}
	for (ll i = 0; i < m; i++)
	{
		ll price_paid_by_customer;
		cin >> price_paid_by_customer;

		auto it = price_of_ticket.upper_bound(price_paid_by_customer);
		if (it == price_of_ticket.begin())
		{
			cout << -1 << endl;
			continue;
		}
		else
		{
			cout << *(--it) << endl;
			price_of_ticket.erase(it);
		}
	}
	return 0;*/

int main()
{
	ll n,m;
	cin>>n>>m;
	multiset<ll>tk;
	for(int i=0; i<n; i++)
	{
        ll pr;
        cin>>pr;
        tk.insert(pr);
	}
	//sort(tk.begin(),tk.end());
	//for(auto u: tk) cout<<u<<" ";

	for (int i=0; i<m; i++){

	ll p;
	cin>>p;
	auto it=tk.upper_bound(p);
	if (it == tk.begin())
	{
        cout<<-1<<endl;
        continue;
	}
	else{
	cout<<*(--it)<<endl;
	tk.erase(it);

	}

	}
}

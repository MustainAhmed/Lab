#include<bits/stdc++.h>
using namespace std;
#define ll long long int

pair<ll,ll>p0;
pair<ll,ll>nextToTop(stack<pair<ll,ll>>S)
{
	pair<ll,ll>p = S.top();
	S.pop();
	pair<ll,ll>res = S.top();
	S.push(p);
	return res;
}

ll distSq(pair<ll,ll>p1,pair<ll,ll>p2)
{
	return (p1.first - p2.first)*(p1.first - p2.first) +
		(p1.second - p2.second)*(p1.second - p2.second);
}

ll orientation(pair<ll,ll>p,pair<ll,ll>q,pair<ll,ll>r)
{
	ll val = (q.second - p.second) * (r.first - q.first) -
			(q.first - p.first) * (r.second - q.second);

	if (val == 0) return 0;
	return (val > 0)? 1: 2;
}

bool compare(pair<ll,ll>p1,pair<ll,ll>p2)
{
ll o = orientation(p0,p1,p2);
if (o == 0)
	return (distSq(p0,p1) <= distSq(p0,p2));

return (o == 2);
}

void convexHull(vector<pair<ll,ll>>points,ll n)
{

ll ymin = points[0].second, mini = 0;
for (ll i = 1; i < n; i++)
{
	ll y = points[i].second;

	if ((y < ymin) || (ymin == y &&
		points[i].first < points[mini].first))
		ymin = points[i].second, mini = i;
}

swap(points[0], points[mini]);

p0 = points[0];
cout<<"\nbottom-leftmost point is : "<<p0.first<<" "<<p0.second<<endl<<endl;
sort(points.begin()+1,points.end(),compare);

cout<<"\nafter sorting\n";
for(auto i:points) cout<<i.first<<" "<<i.second<<endl; cout<<endl;

ll m = 1;
for (ll i=1; i<n; i++)
{
	while (i < n-1 && orientation(p0, points[i],
									points[i+1]) == 0)
		i++;


	points[m] = points[i];
	m++;
}

if (m < 3) return;

cout<<"\nafter removing points with same angles but keeping the farthest from p0\n";
for(ll i=0;i<m;i++) cout<<points[i].first<<" "<<points[i].second<<endl; cout<<endl;

stack<pair<ll,ll>> S;
S.push(points[0]);
S.push(points[1]);
S.push(points[2]);

for (ll i = 3; i < m; i++)
{
	while (S.size()>1 && orientation(nextToTop(S), S.top(), points[i]) == 1){
	 cout<<endl<<nextToTop(S).first<<" "<<nextToTop(S).second<<endl;
	 cout<<S.top().first<<" "<<S.top().second<<endl;
	 cout<<points[i].first<<" "<<points[i].second<<endl;
	 cout<<"aren't counter clockwise\n\n";
	  S.pop();
	}
	cout<<endl<<nextToTop(S).first<<" "<<nextToTop(S).second<<endl;
	 cout<<S.top().first<<" "<<S.top().second<<endl;
	 cout<<points[i].first<<" "<<points[i].second<<endl;
	 cout<<"are counter clockwise\n\n";
	S.push(points[i]);
}

cout<<"\nConvex hull points..\n";
cout<<S.size()<<endl;
while (!S.empty())
{
	pair<ll,ll>p = S.top();
	cout << p.first << " " << p.second<< endl;
	S.pop();
}
}

int main()
{
    cout<<"How many points? ";
	ll n; cin>>n;
	vector<pair<ll,ll>>points;
	ofstream file;
	file.open("C:\\Users\\HP\\Desktop\\New folder\\convex_input.txt");
	file<<n<<endl;
	cout<<"The Points\n";
	for(ll i=0;i<n;i++){
        ll x,y;
        x=rand(); y=rand();
        cout<<x<<" "<<y<<endl;
        points.push_back({x,y});
        file<<x<<" "<<y<<"\n";
	}
	file.close();
	clock_t time=clock();
	convexHull(points, n);
	time=clock()-time;
	cout<<"\nIt took "<<(float)time/CLOCKS_PER_SEC<<" seconds";
	return 0;
}

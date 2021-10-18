#include<iostream.h>
#include<conio.h>
#include<timer.h>
class BFS
{
			int n, a[10][10],s[10],source;
		public: void read();
				void print();
				void bfs();
};

void BFS :: read()
{
	int i,j;
	cout<<"enter number of nodes:";
	cin>>n;
	cout<<"enter adjacency matrix:"<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	cout<<"enter source node:";
	cin>>source;
}

void BFS ::bfs()
{
	int i,v,u,f,r,q[10];
	for(i=0;i<n;i++)
		s[i]=0;
	f=r=0;
	q[r]=source;
	s[source]=1;
	while(f<=r)
	{
		u=q[f++];
			for(v=1;v<=n;v++)
			{
				if(a[u][v]==1&&s[v]==0)
				{
					s[v]=1;
					q[++r]=v;
				}
			}
	}

}

void BFS::print()
{
	for(int i=0;i<n;i++)
	{
		if(s[i]==0)
			cout<<"vertex - "<<i<<"  not reachable"<<endl;
		else
			cout<<"vertex - "<<i<<"  is reachable"<<endl;
	}
}


int main()
{
	BFS b;
	b.read();
	Timer t;
	t.start();
	b.bfs();
	t.stop();
	b.print();
	cout<<"time taken is "<<t.time()<<"sec"<<endl;
	return 0;
	getch();
}

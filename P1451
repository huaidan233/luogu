#include<cstdio>
using namespace std;
int a[107][107];
int count=0;
int m,n;
int dx[4]={0,-1,1,0};
int dy[4]={-1,0,0,1};
void dfs(int x,int y)
{
	if(x<0||y<0||x>m||y>n||a[x][y]==0)return;
	a[x][y]=0;
	for(int z=0;z<4;z++)if(a[x+dx[z]][y+dy[z]])dfs(x+dx[z],y+dy[z]);
}
int main()
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%1d",&a[i][j]);
			
			
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			if(a[i][j])
			{
				count++;
				dfs(i,j);
				
			}
		}
	printf("%d",count);		
 } 

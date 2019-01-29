#include<cstdio>
#include<algorithm>
using namespace std;
int n,l,r;
int ans;
struct num{
    int x,y;
}a[20003];
int cmp(num u,num v)
{
    return u.x<v.x;
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&a[i].x,&a[i].y);
    }
    sort(a+1,a+n+1,cmp);
    ans+=a[1].y-a[1].x;
    l=a[1].x;
    r=a[1].y;
    for(int i=2;i<=n;i++)
    {
    	if(a[i].x<=r) 
        {
        if(a[i].y<r)continue;
        else {
            l=r;
            r=a[i].y;
            ans+=r-l;
        	}
   		 }
        if(a[i].x>r)
        {
            l=a[i].x;
            r=a[i].y;
            ans+=r-l;
        }
       // printf("%d",ans);
    }
    printf("%d",ans);
    return 0;
}

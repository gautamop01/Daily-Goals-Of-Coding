const int N=1e5+50;

class Solution {
public:

    int par[N],rnk[N];   // for size based union make rnk=siz

    void build_DSU()
    {
        for(int i=0;i<N;i++) rnk[i]=0,par[i]=i;
    }

    int get(int v)
    {
        if(par[v]!=v) par[v]=get(par[v]);
        return par[v];
    }

    void uni(int a,int b)
    {
        a=get(a);
        b=get(b);
        if(a!=b)
        {
            if(rnk[a]<rnk[b]) swap(a,b);
            par[b]=a;
            if(rnk[a]==rnk[b]) rnk[a]++;    // siz[a]+=siz[b];
        }
    }



    vector<bool> distanceLimitedPathsExist(int nn, vector<vector<int>>& a, vector<vector<int>>& qq) 
    {
        vector<vector<int>> q;
        for(int i=0;i<qq.size();i++)
            q.push_back({qq[i][0],qq[i][1],qq[i][2],i});
        
        sort(a.begin(),a.end(),[](const vector<int> &a,const vector<int> &b){
           return a[2]<b[2]; 
        });
        sort(q.begin(),q.end(),[](const vector<int> &a,const vector<int> &b){
           return a[2]<b[2]; 
        });
        
        build_DSU();
        
        int n=a.size(),i=0;
        vector<bool> ans(qq.size(),0);
        for(int j=0;j<q.size();j++)
        {
            while(i<n && a[i][2]<q[j][2])
                uni(a[i][0],a[i][1]),i++;
            ans[q[j][3]]=(get(q[j][0])==get(q[j][1]));
        }
        return ans;
    }
};

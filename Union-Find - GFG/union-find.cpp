//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    
    int find(int v, int par[]){
        if(par[v]==v)  // ami je basic implementaion ta korci techDose theke oi khane parent e sob -1 cilo initially but acance sob nij nij value insert korce parent e
        return v;
        
        return par[v]=find(par[v],par);
        
        
    }
    //Function to merge two nodes a and b.
    void union_( int a, int b, int par[], int rank[]) 
    {
      a=find(a,par);
      b=find(b,par);
      
      if(rank[a]>rank[b]) //rank a is higher
       par[b]=a;
       
       else if(rank[a]<rank[b])  //rank b is higher
       par[a]=b;
       
       //both are same rank
       else {
           par[a]=b;
           rank[b]++;
       }
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank[])
    {
        x=find(x,par);
        y=find(y, par);
        if(x==y)
        return true;
        
        else return false;
    }
}; 

//{ Driver Code Starts.

int main() {
    //taking number of testcases
    int t;
    cin>>t;
    while(t--) {
        
        //taking number of elements
        int n;
        cin>>n;
        
        
        int par[n+1];
        int rank1[n+1];

        //initializing the parent and
        //the rank array
        for(int i=1; i<=n; i++) {
            par[i] = i;
            rank1[i] = 1;
    }
    
    //taking number of queries
    Solution obj;
    int q;
    cin>>q;
    while(q--) {    
        int a,b;
        char c;
        cin>>c>>a>>b;
        
        //if query type is 'U'
        //then calling union_ method
        if(c=='U')
        {
            obj.union_(a,b, par, rank1);
        }
        else//else calling isConnected() method
        cout<<obj.isConnected(a,b, par, rank1)<<endl;
    }
    }
    return 0;
}

// } Driver Code Ends
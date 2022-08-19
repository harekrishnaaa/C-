#include <iostream>
#include <vector>
#include <set>
using namespace std;
int countIdenticalRows(vector< vector <int> > mat)  
{  
    int count = 0;  
  
    for (int i = 0; i < mat.size(); i++)  
    {
        set<int> hs;  
        for (int j = 0; j < mat[i].size(); j++)  
        {  
            hs.insert(mat[i][j]);  
        }  
        if (hs.size()<mat[i].size())  
            count++;  
    }  
    return count;  
} 
int countIdenticalColumns(vector< vector <int> > m)  
{  
    int count = 0;  
  
    for (int i = 0; i < m.size(); i++)  
    {
        set<int> hs;  
        for (int j = 0; j < m[i].size(); j++)  
        {  
            hs.insert(m[j][i]);  
        }  
        if (hs.size()<m[i].size())  
            count++;  
    }  
    return count;  
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a=1;
    for(int i=0;i<n;++i){
        int r;
        cin>>r;
        vector<vector<int>> matrix(r,vector<int>(r));
        for(int j=0;j<r;++j){
            for(int k=0;k<r;++k){
                cin>>matrix[j][k];
            }
        }
        int trace=0;
        for(int l=0;l<r;++l){
            trace+=matrix[l][l];
        }
        int row=countIdenticalRows(matrix);
        int columns=countIdenticalColumns(matrix);
        cout<<"Case #"<<a<<": "<<trace<<" "<<row<<" "<<columns<<endl;
        a++;
    }
}

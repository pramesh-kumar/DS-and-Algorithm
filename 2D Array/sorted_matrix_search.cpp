#include<bits/stdc++.h>
using namespace std;



int main()
{
        int n,m;
        cin>>n>>m;
        int key;
        int a[n][m];
        cin>>key;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            cin>>a[i][j];
            }
        }    

        int r=0,c=m-1;
        bool found=false;
        while(r<n&&c>=0){
            if(a[r][c]==key){
                found=true;
            }
            if(a[r][c]>key){
                c--;
            }
            else{
                r++;
            }
        }
        if(found){
            cout<<"Element is found"<<endl;
        }
        else{
            cout<<"Element is not found"<<endl;
        }

return 0;
}
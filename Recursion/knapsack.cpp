// #include<bits/stdc++.h>
// using namespace std;


// int knapsack(int value[],int wt[] ,int n, int W){

//     if(n==0||W==0){
//         return 0;
//     }
//     if(wt[n-1]>W){
//        return knapsack(value,wt,n-1,W);
//     }
//     return(max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W)));
// }
// int main()
// {
//     int wt[]={10,20,30};
//     int value[]={100,50,150};
//     int W=50;
//     cout<<knapsack(value,wt,3,W)<<endl;
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int n,int w){

    if(w==0||n==0){
        return 0;
    }
    if(w<wt[n-1]){
        return knapsack(wt,val,n-1,w);
    }
    return max(knapsack(wt,val,n-1,w),(knapsack(wt,val,n-1,w-wt[n-1])+val[n-1]));
}
int main(){
    int wt[]={10,20,30};
    int val[]={100,50,150};
    int w=50;
    cout<<knapsack(wt,val,4,w)<<endl;
return 0;
}
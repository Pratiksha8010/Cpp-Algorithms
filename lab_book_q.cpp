#include<bits/stdc++.h>
using namespace std;
void union1( int amit[] , int tiksha[]  , int m , int n){

    for(int i=0;i<m ;i++){
        for(int j =0;j<n;j++){
              if(tiksha[j] == amit[i]){
                cout<<tiksha[i]<<" ";
              }
              break;
        }
        if(amit[i]!=tiksha[i] && i<n){
            cout<<amit[i]<<" "<<tiksha[i]<<" ";
            continue;
        }else if(amit[i]!=tiksha[i]){
            cout<<amit[i]<<" ";
        }
    }
        cout<<endl;
}
void intersection (int amit[] , int tiksha[] ,  int m , int n){
   for (int i = 0; i < m; i++)
   {
     for(int j =0;j<n;j++){
        if(amit[i]==tiksha[j]){
            cout<<tiksha[j]<<" ";
            break;  
        }
     }
   }
   cout<<endl;
   
}
int main(){

int amit[]= {1, 2, 20, 4 , 5, 6, 7};
int tiksha[]= {3, 2, 20, 12};
 int m =sizeof(amit)/sizeof(amit[0]);
 int n = sizeof(tiksha)/sizeof(tiksha[0]);
for (int i = 0; i < m; i++)
{
    cout<<amit[i]<<" ";
}
cout<<endl;
for (int i = 0; i < n; i++)
{
    cout<<tiksha[i]<<" ";
}
cout<<endl;
  cout<<" union of two arrays"<<endl;
  union1(amit , tiksha , m ,n );
  cout<<"intersection of two arrays"<<endl;
  intersection(amit , tiksha , m ,n );
return 0;
}
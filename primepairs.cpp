
#include <iostream>

using namespace std;

int main()
{
    int i,j,k=0,n,m,temp[20];
    int f=0;
    cout<<"Enter numbers range : ";
    cin>>m>>n;
    cout<<"Prime numbers are : ";
    for(i=m;i<=n;i++){
       int f=0;
        for(j=2;j<i;j++){
        if((i%j) == 0)
        {
            f=1;
            break;
        }
        }
    
      if(f==0){
          
      cout<<" "<<i;
      temp[k] = i;
      k++;
      }
    }
    
    for(int p=0;p<k;p++){
        for(int q=p+1 ; q<k ;q++){
            if((temp[q]-temp[p]) == 6)
            cout<<"\n"<<"("<<temp[p]<<","<<temp[q]<<")"<<" ";
        }
    }
    return 0;
}

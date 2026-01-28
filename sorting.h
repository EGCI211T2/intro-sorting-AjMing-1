#include <iomanip>
void swap(int &a,int &b);
void sort(int *a,int N);
void display(int *a,int N);

void swap(int &a,int &b){
    int t;
    t=a;
    a=b;
    b=t;
}

void display(int a[],int n){
    int i;
    for (i=0; i<n; i++){
            cout<<setw(3)<<a[i];//<<endl;
         
        }
    cout<<endl;
}

void sort(int *a,int N){
   int i,j;//
  for(j=0;j<N-1;j++){
    for(i=0;i<N-1-j;i++){
                /*For ascending order*/
                if(a[i]> a[i+1] ) //0 1 -> 1 2 -> 2 3 -> 3 4  --> n-2 n-1
                    swap(a[i],a[i+1]);
    }
    display(a,N);
   }


}
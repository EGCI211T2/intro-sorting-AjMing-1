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
            cout<<" "<<a[i];//<<endl;
         
        }
    cout<<endl;
}

void bubblesort(int *a,int N){
   int i,j;//
   int sorted;
  for(j=N-1;j>0;j--){
    sorted=0;
    for(i=0;i<j;i++){
                /*For ascending order*/
                if(a[i]> a[i+1] ){ 
                    swap(a[i],a[i+1]);
                    sorted=1;
                }
    }
    display(a,N);
    if(sorted==0) break;
   }


}

void selectionsort(int *a,int N){
    int i,mi,min,j;

   for(j=0;j<N-1;j++){
        min=a[j];
            mi=j;
        for(i=j+1;i<N;i++){
            if(min >a[i]){
                min = a[i];
                mi= i;
            }
        }
        swap(a[j],a[mi]);// a[0] <->a[7]
   }
}
#include<stdio.h>
#include<conio.h>
using namespace std;
void Nhap(int a[],int N){
   int i;
   for (i=0;i<N;i++){
      
      cin>>a[i];
   }
}
void Xuat(int a[],int N){
   int i;
  for (i=0;i<N;i++)
   cout<<a[i]<<endl;
    //  printf("%d ",a[i]);
   //printf("\n");
}
void Sapxep(int a[],int N){
   int i,j,t;
   for (i=0;i<N-1;i++)
      for (j=i+1;j<N;j++)
         if (a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
         }
}
void Xoatrung(int a[],int *N){
   int i,j,k;
   for (i=0;i<(*N)-1;i++){
    j=i+1;
    while (j<*N)
      if (a[i]==a[j]){
         for (k=j;k<(*N)-1;k++) a[k]=a[k+1];
         *N=(*N)-1;
      }
      else j=j+1;
   }
}
int main(){
   int a[50], N;
   
   //scanf("%d",&N);
   cin>>N;
   Nhap(a,N);
 //  printf("Mang vua nhap:\n");
  // Xuat(a,N);
   Xoatrung(a,&N);
//   printf("Mang sau khi xoa phan tu trung nhau:\n");
  // Xuat(a,N);
   Sapxep(a,N);
  // printf("Mang sau khi sap xep\n");
   Xuat(a,N);
   getch();
}

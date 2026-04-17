//halaman 210

#include<iostream.h> 
#include<stdio.h> 
FILE *fp; 
void main(void) 
{ 
 int i=0,k; 
 //Menyimpan data ke file 
 fp=fopen("d:\\kampus\\program\\c++\\FileIO1\\data1.dat","w"); 
 if(fp==NULL)cout<<"Error membuka berkas"<<endl; 
 else 
 { 
  for(i=0;i<=10;i++)fprintf(fp,"%d ",i); 
  fclose(fp); 
 } 
 //Membaca data dari file 
 fp=fopen("d:\\kampus\\program\\c++\\FileIO1\\data1.dat","r");
 if(fp==NULL)cout<<"Error membuka berkas"<<endl; 
else 
{ 
while(!feof(fp)) 
{ 
} 
fscanf(fp,"%d ",&k);cout<<k<<" "; 
cout<<endl; 
fclose(fp); 
} 
}
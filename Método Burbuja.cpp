#include<iostream>
using namespace std ;
int main(){
	int n=0,V[n],aux,opc;
	cout<<"Ingrese la cantidad de calificaciones :";
 	cin>>n;

 	for(int i=0;i<n;i++){
 		system("cls");
  		cout<<"\n calificación del alumno "<<i+1<<" = ";
  		cin>>V[i];
 	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
	   		if(V[j]<V[i]){
	    	aux=V[i];
	    	V[i]=V[j];
	    	V[j]=aux;
			}
	  	}
	}
	
	system("cls");
		cout<<"Estas son las calificaciones de menor a mayor:"<<endl;
		for(int i=0;i<n;i++){
			cout<<V[i]<<endl;
		}
	
	
			cout<<"=============================\n"<<endl;
			cout<<"Estas son las calificaciones de mayor a menor:"<<endl;
		for(int i=n;i>0;i--){
			cout<<V[i-1]<<endl;
		}
	
	return 0;
}

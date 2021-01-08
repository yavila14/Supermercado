#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int productos[1000],suma,i,v,op,j,total,desc,desc1,aux,desc2,desc3,desc4;
	v=0;
	suma=0;
	aux=0;
	cout<<"Digite los valores de los productos del cliente \n";
	for(i=1;j<=1;i=i+1){
		cout<<"Digite valor producto ";
		cin>>v;
		productos[i]=v;
		suma=suma+v;
		cout<<"\nDesea ingresar otro producto si=1 / no=0 ";
		cin >>op;
	switch(op){
		case 0:j=2;
		break;
		case 1:j=1;
		break;
		default:j=3;
		cout <<"Opcion incorrecta ";
		
	}
		total=suma*1.19;
		aux=i;	
	}	
    	cout <<"\nEl valor total de su factura es "<<total <<"\n";
    if((total>100000)&&(aux>10))
    {	desc2=total*0.95;
		desc3=(total*1)/100;
		desc4=desc2-desc3;   
		cout <<"\n***FELICITACIONES SE ACABA DE GANAR UN DESCUENTO DEL %5 y UNO DEL 1% *** \n";
    	cout <<"\nSu nuevo valor Total a pagar es --> "<<desc4;
	}
	else if(total>100000){
    	desc=total*0.95;
    	cout <<"\n***FELICITACIONES SE ACABA DE GANAR UN DESCUENTO DEL %5 *** \n";
		cout <<"\nSu nuevo valor Total a pagar es --> "<<desc;	
		cout <<"\n" <<aux;
	}else if(aux>10){
		desc1=total*0.99;
		cout <<"\n***FELICITACIONES SE ACABA DE GANAR UN DESCUENTO ADICIONAL DEL %1 *** \n";
		cout <<"\nSu nuevo valor Total a pagar es --> "<<desc1;		
	}
		
	return 0;
}

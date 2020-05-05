include<conio.h>
#include<stdio.h>>
#include<iostream>
#include<string.h>
#include<windows.h>
#include<Math.h>

using namespace std;
char alf[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

void euclides_extendido(int a,int b, int *q1, int *q2, int *q3){
    int d,x,y,x1,x2,y1,y2,q,r;
    if(b==0){
        d=a;
        x=1;
        y=0;
        //return(d);
    }
    x1=0;
    x2=1;
    y1=1;
    y2=0;
    while(b>0){
        q=a/b;
        r=a-(q*b);
        x=x2-(q*x1);
        y=y2-(q*y1);
        a=b;
        b=r;
        x2=x1;
        x1=x;
        y2=y1;
        y1=y;
    }
    d=a;
    x=x2;
    y=y2;
    *q1=d;
    *q2=x;
    *q3=y;
}
void cifrado_cesar(){
	char m[100];
	fflush(stdin);
	cout<<"Ingrese mensaje a cifrar:";
	cin.getline(m,100);
	for(int i=0; i<strlen(m);i++){
		if(m[i]!= 32){
			for(int j=0;j<strlen(alf);j++){
				if(m[i]==alf[j]){
					int aux=(j+10)%26;
					m[i]=alf[aux];
					break;
				}
			}
		}
	}
	cout<<"El mensaje cifrado es: "<<m<<endl<<endl;
}
main(){
	int opc,opc2;
	do{
		cout<<"Menu:"<<endl;
		cout<<"1.- Cifrado :"<<endl;
		cout<<"2.- Salir"<<endl;
		cout<<"Ingrese Opcion:";
		cin>>opc;

		switch(opc){
			case 1: system("cls");
					do{
						cout<<"Menu"<<endl;
						cout<<"1.- Cifrar"<<endl;
						cout<<"2.- Salir"<<endl;
						cout<<"Ingrese Opcion:";
						cin>>opc2;
						switch(opc2){
							case 1: cifrado_cesar(); break;
						}
					}while(opc2!=2);
					system("cls");
					break;


}

}while(opc!=2);

return 0;

}

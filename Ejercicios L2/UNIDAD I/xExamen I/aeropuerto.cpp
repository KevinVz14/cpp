#include<iostream>
using namespace std;

// DECLRACION DE VARIABLES GLOBALES
int des = 1, contadorPasajeros = 1,numBoleto = 0, edad = 0, contDis = 0, contadorMenor = 0, contadorAdulto = 0, contadorMayor = 0, contadorM = 0, contadorF = 0,contadorD = 0, contadorE = 0;
char sexo, discapacidad, embarazo,tipoBoleto;
float precioBoleto = 0, pF = 0,suma = 0, promedio = 0;

    //FUNCION PARA CALCULAR LOS PRECIOS FINALES 
    float precioFinal(){
        //CONDICION MENOR DE 12 AﾑOS
        if (edad<12){
            pF = precioBoleto - (precioBoleto*0.10);
        } 
            //CONDICION MENOR DE 12 Aﾃ前S CON DISCAPACIDAD
            if(edad<12 and discapacidad == 'S'){
                 pF = precioBoleto - ((precioBoleto*0.10) + precioBoleto*0.15);
            }
                //CONDICION MAYORES A 60 Aﾃ前S
                if (edad>=60){
                    pF = precioBoleto - (precioBoleto*0.30);
                }
                    //CONDICION MAYORES A 60 Aﾃ前S CON DISCAPACIDAD
                    if (edad>= 60 and discapacidad == 'S'){
                        pF = precioBoleto - ((precioBoleto*0.30) + precioBoleto*0.15);
                    }
                        //CONDICION MUJERES EMBARAZADAS
                        if(embarazo == 'S'){

                            pF = precioBoleto - (precioBoleto*0.10);
                        }
                            //CONDICION MUJERES EMBARAZADAS CON DISCAPACIDAD
                            if(embarazo == 'S' and discapacidad == 'S'){

                                pF = precioBoleto - ((precioBoleto*0.10) + precioBoleto*0.15) ;
                            }
                                //CONDICION PARA PERSONAS ADULTAS CON DISCAPACIDAD
                                if(edad > 12 and edad < 60 and discapacidad == 'S'){

                                    pF = precioBoleto -(precioBoleto*0.15);
                                }
                                    //CONDICION PARA PERSONAS MAYORES DE 12 Aﾃ前S Y MENORES DE 60, SIN DISCAPACIDAD Y SIN EMBARAZO
                                    if (edad > 12 and edad < 60 and discapacidad == 'N' and embarazo == 'N' ){

                                    pF = precioBoleto;
                                }
        }                    
    //FUNCION QUE MUESTRA LA PUERTA DE ABORDAJE
    void mensajeBoleto(){
        if(tipoBoleto == 'A'){
            cout<<" Abordaje por la puerta A "<<endl; 
        }
            if(tipoBoleto == 'B'){
                cout<<" Abordaje por la puerta B "<<endl; 
            }
    }

int main(){

while(des == 1){
    //CAPTURA DE DATOS
    cout<<"PROGRAMA AEROPUERTO"<<endl;
    cout<<endl; cout<<endl;
    cout<<"Pasajero #"<<contadorPasajeros<<endl;
    cout<<"Ingrese su numero de boleto: "; cin>>numBoleto;
    cout<<"Ingrese su edad: "; cin>>edad;
    cout<<"Ingrese el sexo del pasajero (M = Masculino / F = Femenino): "; cin>>sexo;
    cout<<"Presenta alguna discapacidad?  (S = Si / N = No): "; cin>>discapacidad;
    cout<<"Esta embarazada?  (S = Si / N = No): "; cin>>embarazo;
    cout<<"Ingrese el precio del boleto: "; cin>>precioBoleto;
    cout<<"Ingrese el tipo de boleto (A = Primera clase / B = Clase economica): "; cin>>tipoBoleto;
    cout<<endl;  cout<<endl;
    precioFinal();
    cout<<"El precio final es: "<<pF<<endl; 

    mensajeBoleto();
    cout<<endl; cout<<endl;

    if(edad < 12){
    contadorMenor++;
}
    if(edad > 12 and edad < 60 ){
        contadorAdulto++;
    }

        if(edad >  60 ){
            contadorMayor++;
        }

            if(sexo == 'M' ){
                contadorM++;
            }
                if(sexo == 'F' ){
                    contadorF++;
                }

                    if(discapacidad == 'S' ){
                        contadorD++;
                    }
                         if(embarazo == 'S' ){
                            contadorE++;
                        }

    suma = suma + edad;
    promedio = suma / contadorPasajeros;                    
    contadorPasajeros++;
    cout<<"Desea agregar a otro pasajero?  (1 = Si / 0 = No): "; cin>>des;
    }
    cout<<endl;  cout<<endl;
    //SALIDAS
    cout<<" *********************** RESUMEN *********************** "<<endl;
    cout<<"Promedio de edades : _____________________ "<<promedio<<endl; 
    cout<<"Menores de edad : ________________________ "<<contadorMenor<<endl; 
    cout<<"Personas adultas :________________________ "<<contadorAdulto<<endl; 
    cout<<"Personas de la tercer edad :______________ "<<contadorMayor<<endl;
    cout<<"Cantidad de personas masculinas :_________ "<<contadorM<<endl; 
    cout<<"Cantidad de personas femeninas :__________ "<<contadorF<<endl;
    cout<<"Cantidad de personas discapacitadas :_____ "<<contadorD<<endl; 
    cout<<"Cantidad de personas embarazadas :________ "<<contadorE<<endl; 
    //FIN DEL PROGRAMA
    return 0;
}

#include <iostream>
#include <cstdlib>   // srand(), rand()
#include <ctime>     // time()
 
using namespace std;
 
int main()
{
	int validacion=0;
   
    while(validacion==0)
    {
    	cout << "Programa para adivinar el numero\n";
	    cout << "Por favor escriba un numero entero de 0 a 100\n";
	 
	    srand(static_cast<unsigned>(time(NULL)));
	    int num_maquina = rand() % 101;
	 
	    int ingresado;
	    int intentos=1;
    	while (cin >> ingresado)
	    {
	    	//printf("numero maq: %d",num_maquina);
	        if (num_maquina == ingresado)
	        {
	            printf("Muy bien has adivinado el numero\n");
	            printf("La cantidad de intentos fueron: %d",intentos);
	            printf("\n El numero ingresado y el aleatorio era: %d",num_maquina);
	            printf("\n Desea jugar de nuevo? (0 para si, cualquier otro número para no): ");
	            scanf("%i", &validacion);
	            if(validacion!=0){
	            	validacion=1;
	            	break;
				}
	            break;
	        }
	        else if (num_maquina > ingresado)
	        {
	            printf("El numero es mayor\n");
	            intentos++;
	            
	        }
	        else if (num_maquina < ingresado)
	        {
	            printf("El numero es menor\n");
	            intentos++;
	        }
	    }	
	}
    
 
    return 0;
}


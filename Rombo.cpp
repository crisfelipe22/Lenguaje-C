# include <iostream>
using namespace std ;

int main ()
{
    int n ;
    
    int validacion=0;
   
    while(validacion==0)
    {
	    printf(" Por favor ingrese un numero entre 3 y 21 e impar: ");    
	    scanf("%i", &n);
	    if (n>2&&n<24)
	    {
	    	if(n%2==1)
	    	{
	    		for (int j = 0; j < n ; ++j) {
		        for (int i = 0; i < n-j-1; ++i)
		            printf(" ");
		        for (int i = 0; i < 2*j+1; ++i)
		             printf("*");
		        cout << endl ;
	    	}
	
			    for (int j=n-2; j>=0; --j) {
			        for (int i=0; i<n-j-1; ++i)
			            cout << " " ;
			        for (int i=0; i<2*j+1; ++i)
			            printf("*");
			        	printf("\n");
			    	}
			    printf("\n Desea digitar otro numero? (0 para si, cualquier otro número para no): ");
		    	scanf("%i", &validacion);
	            if(validacion!=0){
	            	validacion=1;
	            	break;
				}
			}
			else{
				printf(" El numero es par, por favor digitelo de nuevo : ");
			}	    	
		}   
	}
	return 0;
}

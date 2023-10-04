// (i) el código de barra del producto; (ii) el código del
//almacén. El código de barra del producto corresponde a una cadena
//alfanumérica de 10 dígitos. El código del almacén corresponde a una
//cadena alfanumérica de 5 dígitos, empezando por el prefijo 20.

#include <stdio.h>
#include <string.h>

int main() {
    char Product_Bar[11]; //Se usan condicionales
    char Store_Bar[6];
    
    // Codigo del producto
    while (1) {
        printf("Por favor, ingrese el codigo de barras del producto: \n");
        scanf("%s", Product_Bar); // Leemos una cadena de caracteres
        
        if (strlen(Product_Bar) == 10) {	//Mediante el strlen se comprueba la longitud
		printf("Correcto.\n");
		
			if (strcmp(Product_Bar == 8949899430) == 0);	
            printf("Su producto tiene 20 porciento de descuento\n");
            
            if (Product_Bar == 7653512593);
            printf("Su producto tiene 20 porciento de descuento\n");
			break;
			
			if (Product_Bar == 9383867373);
            printf("Su producto tiene 20 porciento de descuento\n");
			break;
			
			if (Product_Bar == 88392904209);
            printf("Su producto tiene 20 porciento de descuento\n");
			break;
        }
        
        else
            printf("El codigo de barras del producto debe tener exactamente 10 digitos.\n");
            break;
        }
    }
    
    // Codigo de la tienda
    printf("Por favor, ingrese el codigo de barras del almacen: \n");
    scanf("%c", Store_Bar); 

    if (strlen(Store_Bar) != 5 || strncmp(Store_Bar, "20", 2) != 0) { 							//strlen(Store_Bar) != 5: Esto calcula la longitud de la cadena de caracteres 
        printf("El codigo de barras del almacen debe tener 5 digitos y comenzar con '20'.\n");	//strncmp(Store_Bar, "20", 2) != 0 verifica que los primeros 2 caracteres de Store_Bar no sean "20".
    } else {
        // Si llegamos aquí, ambas cadenas son válidas
        printf("Codigos de barras validos: Producto: %s, Almacen: %s\n", Product_Bar, Store_Bar);
    }

    return 0;
}

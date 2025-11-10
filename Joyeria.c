#include <stdio.h>

#define Rolex 500000
#define Patek Philippe 20000
#define Jacob 150000
#define MontBlack 100000 
#define Michael Kors 50000
#define Cartier 750000

#define Pandora 2500
#define Werxüs 4000
#define Monte Carlo 6000
#define Loalba 8000

#define Cartier 5000
#define Tiffany 4000
#define Piaget 2000
#define Hermes 7000

int main(){
    int numProductos,cant,produc;
    float total = 0,pago,cambio;
    char nomb[20];
    int producDif = 0;
    
    printf("-*-*-*-*-*-*-*-*-*-* La Joyeria de Don Pepe *-*-*-*-*-*-*-*-*-*-\n");
    printf("\n");
    printf("Bienvenid@, Buen Dia\n\n");
    printf("Ingreso Epico del Cliente a la Tienda  :O\n");
    printf("----    o\n");
    printf("----- '-|-'\n");
    printf("------ /| \n\n");
    
    printf("*-*-*-*-*-*-*-*-*-* Lista de Productos *-*-*-*-*-*-*-*-*-*\n");
    printf("========= Relojes =========")
    printf("1. Rolex --------------- $500,000\n");
    printf("2. Patek Philippe --------------- $20,000\n");
    printf("3. Jacob --------------- $150,000\n");
    printf("4. MontBlack --------------- $100,000\n");
    printf("5. Michael Kors --------------- $50,000\n\n");
    printf("6. Cartier --------------- $750,000\n\n");
    
    printf("Ingrese su nombre: ");
    scanf("%s",nomb);
    
    printf("¿Cuantos productos distintos va a llevar? ");
    scanf("%d",&numProductos);
    
    printf("\n*-*-*-*-*-*-*-*-*-* TICKET *-*-*-*-*-*-*-*-*-*\n");
    printf("Cliente: %s\n",nomb);
    printf("Productos:\n");
    

    if(numProductos>= 1){
        printf("\nProducto 1:\n");
        printf("Seleccione el producto (1-5): ");
        scanf("%d",&produc);
        printf("Cantidad: ");
        scanf("%d",&cant);
        
        float precio= 0;
        
        switch(produc){
            case 1:
                precio= Aceite;
                printf("Aceite - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 2:
                precio= Azucar;
                printf("Azucar - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 3:
                precio= Barritas;
                printf("Barritas - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 4:
                precio= Coca;
                printf("Coca 2.5L - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 5:
                precio= Gansito;
                printf("Gansito - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            default:
                printf("Producto no valido\n");
                precio = 0;
        }
        
        total+= cant * precio;
        producDif++;
    }
    
    if(numProductos>= 2){
        printf("\nProducto 2:\n");
        printf("Seleccione el producto (1-5): ");
        scanf("%d",&produc);
        printf("Cantidad: ");
        scanf("%d",&cant);
        
        float precio= 0;
        
        switch(produc){
            case 1:
                precio= Aceite;
                printf("Aceite - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 2:
                precio= Azucar;
                printf("Azucar - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 3:
                precio= Barritas;
                printf("Barritas - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 4:
                precio= Coca;
                printf("Coca 2.5L - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 5:
                precio= Gansito;
                printf("Gansito - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            default:
                printf("Producto no valido\n");
                precio = 0;
        }
        
        total+= cant * precio;
        producDif++;
    }
    
    if(numProductos>= 3){
        printf("\nProducto 3:\n");
        printf("Seleccione el producto (1-5): ");
        scanf("%d",&produc);
        printf("Cantidad: ");
        scanf("%d",&cant);
        
        float precio= 0;
        
        switch(produc){
            case 1:
                precio= Aceite;
                printf("Aceite - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 2:
                precio= Azucar;
                printf("Azucar - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 3:
                precio= Barritas;
                printf("Barritas - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 4:
                precio= Coca;
                printf("Coca 2.5L - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 5:
                precio= Gansito;
                printf("Gansito - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            default:
                printf("Producto no valido\n");
                precio = 0;
        }
        
        total+= cant * precio;
        producDif++;
    }
    
    if(numProductos>= 4){
        printf("\nProducto 4:\n");
        printf("Seleccione el producto (1-5): ");
        scanf("%d",&produc);
        printf("Cantidad: ");
        scanf("%d",&cant);
        
        float precio= 0;
        
        switch(produc){
            case 1:
                precio= Aceite;
                printf("Aceite - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 2:
                precio= Azucar;
                printf("Azucar - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 3:
                precio= Barritas;
                printf("Barritas - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 4:
                precio= Coca;
                printf("Coca 2.5L - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 5:
                precio= Gansito;
                printf("Gansito - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            default:
                printf("Producto no valido\n");
                precio = 0;
        }
        
        total+= cant * precio;
        producDif++;
    }
    
    if(numProductos>= 5){
        printf("\nProducto 5:\n");
        printf("Seleccione el producto (1-5): ");
        scanf("%d",&produc);
        printf("Cantidad: ");
        scanf("%d",&cant);
        
        float precio= 0;
        
        switch(produc){
            case 1:
                precio= Aceite;
                printf("Aceite - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 2:
                precio= Azucar;
                printf("Azucar - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 3:
                precio= Barritas;
                printf("Barritas - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 4:
                precio= Coca;
                printf("Coca 2.5L - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            case 5:
                precio= Gansito;
                printf("Gansito - Cantidad: %d - Precio: $%.2f\n",cant, cant * precio);
                break;
            default:
                printf("Producto no valido\n");
                precio = 0;
        }
        
        total+= cant * precio;
        producDif++;
    }
    
    // Regla de los 5 Furiosos (Los 5 Productos): 10% de descuento en la compra de más de 5 productos
    float desc = 0;
    if(numProductos > 5){
        desc = total * 0.10;
        printf("\n--------------------------------------------\n");
        printf("SUBTOTAL: $%.2f\n",total);
        printf("Descuento (10%): -$%.2f\n",desc);
        total = total - desc;
        printf("TOTAL CON DESCUENTO: $%.2f\n",total);
    } else{
        printf("\n--------------------------------------------\n");
        printf("TOTAL: $%.2f\n",total);
    }
    
    printf("     ------\n");
    printf("    |  | |  |\n");
    printf("    | '   ' |\n");
    printf("    |  '-'  |\n");
    printf("     ------\n");
    
    }
    
    // Hora de Pagaaaar:)
    printf("\n¿Como desea pagar?\n");
    printf("1. Efectivo\n");
    
    // Regla del VIP: Joaquín solo puede pagar con tarjeta
    int Joaquin = 0;
    if(nomb[0] == 'J' || nomb[0] == 'j' ){
        printf("2. Tarjeta (solo para Joaquín)\n");
        Joaquin= 1;
    }
    
    int metodoPago;
    printf("Seleccione metodo de pago: ");
    scanf("%d", &metodoPago);
    
    if(metodoPago == 1 || (metodoPago == 2 && Joaquin)){
        if(metodoPago == 1){
            printf("Ingrese la cantidad con la que paga: $");
            scanf("%f", &pago);
            
            if(pago>= total){
                cambio= pago - total;
                printf("Cambio: $%.2f\n",cambio);
                printf("¡Gracias por su compra!\n");
            } else {
                printf("No tiene suficiente dinero.\n");
                printf("'No hay problema, le fio y Lo Anoto en la Death Note'\n");
                printf("Puede regresar más tarde a pagar pero regrese sino pamba. Total a pagar: $%.2f\n",total);
            }
        } else{
            printf("Pago con tarjeta aceptado.\n");
            printf("¡Gracias por su compra, Joaquín!\n");
        }
    } else{
        printf("Metodo de pago no disponible para usted.\n");
        printf("Por favor, pague en efectivo no se haga guaje que usted no es Joaquin :/\n");
        printf("Don Ernesto: 'Si no tiene efectivo, le fio y Lo Anoto en la Death Note.'\n");
        printf("Puede regresar más tarde a pagar pero regrese sino pamba. Total a pagar: $%.2f\n",total);
    }
    
    printf("\nQue le vaya bien! :)\n");
    
    return 0;
}

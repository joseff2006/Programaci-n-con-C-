// comentario uni lineal

/* 
comentarios 
multilineales 
de Ismael

*/

//importo la libreri nativa "iostream "*obligatorio 
// me permite interactuar con un programa desde 0 
#include <iostream>


// defino la funcion  principal * obligatorioque se llame main 

int main() {
    
    // Write C++ code here
    std::cout << "ismael " << std::endl;
    std::cout << " 4 " << std::endl;
     std::cout << (10 > 4 ) << std::endl;
     
     // numero entero 
      std::cout <<  5  << std::endl;
      
      // numero decimil 
      
       std::cout << 4.6 << std::endl;
       
       // boleanos:
       //se  representa con  1 si es verdadero y con 0 si es falso 
      std::cout << (5 < 4 ) << std::endl;
      std::cout << (10 == 4 ) << std::endl;
      std::cout << (10 > 4 ) << std::endl;
      std::cout << true  << std::endl;
      std::cout << false << std::endl;
       
        //para controlar el flujo de nuestra logica 
        //permiten comparr valores 
        // controlan que bloque de codigo se va a ejecutar dependiendo de la veracidad del resultado de la comparacion.
        
        
        //declaramos una variabl llamada edad , y le asigno un valor numerico de tipo entero. 
        
         int edad = 18;
         
        // estructura de datos con if 
        if (edad <= 1 && edad >= 17 ){
        std::cout << "eres menor de edad" << std::endl;
        } else if(edad <= 18 && edad >= 59) {
            std::cout << "eres mayor de edad " << std::endl;
        } else {
            std::cout << "eres viejo " << std::endl;
        }
       //simpre al  fina de  la funcion se debe colocar esta linea de codigo que indica que el programa si llega a esta linea , esto es por que se a ejecutado 
       

    return 0;
}

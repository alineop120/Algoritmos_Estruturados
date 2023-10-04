algoritmo "média de 10 notas"
// Função :
// Autor :
// Data : 19/09/2023
// Seção de Declarações 
var
   nota, soma_notas, media_final  : real
   cont                           : inteiro
inicio
// Seção de Comandos 
    soma_notas <- 0
    cont <- 1
    enquanto (cont <= 10) faca
    
         escreval ("Entre com a", cont, "ª nota:")
         leia (nota)
         
         soma_notas <- soma_notas + nota
         
         cont <- cont + 1
    fimenquanto
    
    media_final <- soma_notas / 10
    
    escreval ("A média final é: ", media_final)
fimalgoritmo

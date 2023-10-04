algoritmo "IMC"
// Função :
// Autor :
// Data : 01/09/2023
// Seção de Declarações 
var
    imc, altura         : real
    peso                : inteiro
inicio
// Entrada de dados
   escreval ("Entre com seu peso: ")
   leia (peso)
   escreval ("Entre com sua altura: ")
   leia (altura)
   
   // processamento e possíveis saídas
   imc <- peso / altura^2
   se (imc < 18) entao
        escreval ("Você está abaixo do seu peso ideal")
   senao
        se ((imc >= 18) e (imc < 25)) entao
             escreval ("Você está dentro do seu peso ideal")
        senao
             se ((imc >= 25) e (imc < 30)) entao
                  escreval ("Você está com sobrepeso")
             senao
                  escreval ("Você está obeso")
             fimse
        fimse
   fimse
fimalgoritmo




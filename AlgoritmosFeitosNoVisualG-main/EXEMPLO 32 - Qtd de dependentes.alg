algoritmo "quantidade de dependentes"
// Função :
// Autor :
// Data : 20/09/2023
// Seção de Declarações 
var
      matricula, nome                          : caracter
      dependentes, contador_funcionario        : inteiro
      salario                                  : real
inicio
// Seção de Comandos 
   contador_funcionario <- 0
   
   escreval ("Entre com a matrícula do funcionário (0 encerra):")
   leia (matricula)

   enquanto (matricula <> "0") faca

         escreval ("Informe o nome: ")
         leia (nome)
         escreval ("Informe a quantidade de dependentes: ")
         leia (dependentes)
         escreval ("Informe o salário: ")
         leia (salario)

         se (dependentes > 5) entao
              contador_funcionario <- contador_funcionario + 1
         fimse

         escreval ("Entre com a matrícula do funcionário (0 encerra):")
         leia (matricula)
         
   fimenquanto

   escreval (contador_funcionario, "funcionários possuem mais de 5 dependentes")
fimalgoritmo

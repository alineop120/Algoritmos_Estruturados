algoritmo "reajuste salarial"
// Função :
// Autor :
// Data : 16/08/2023
// Seção de Declarações 
var
   salario, salario_novo    : real
inicio
// Seção de Comandos 

   // entrada de dados - fornecimento do salário do funcionário
   escreval ("Informe o salário do funcionário: ")
   leia (salario)
   
   // processamento - cálculo do salario reajustado
   salario_novo <- salario + (salario * 10 / 100)
   
   // saída - apresentação do novo salário
   escreval ("O salario reajustado é ", salario_novo)
fimalgoritmo

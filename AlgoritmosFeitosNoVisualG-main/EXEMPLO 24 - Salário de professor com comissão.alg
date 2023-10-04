algoritmo "salário de professor"
// Função :
// Autor :
// Data : 08/09/2023
// Seção de Declarações 
var
     horas_trabalhadas                                 : inteiro
     hora_aula, salario, salario_com_comissao          : real

inicio
// Entrada dos dados - horas trabalhadas e valor da hora-aula
       escreval ("Entre com a quantidade de horas trabalhadas: ")
       leia (horas_trabalhadas)
       escreval ("Entre com o valor da hora-aula: ")
       leia (hora_aula)
       
// processamento
// calcular o salário do professor
       salario <- hora_aula * horas_trabalhadas
       
//calcular a comissão em função do valor do salário calculado acima
       se (salario <= 53000) entao
             salario_com_comissao <- salario + (salario * 8 / 100)
       senao
            se ( (salario > 53000) e (salario <= 120000) ) entao
                    salario_com_comissao <- salario + (salario * 9 / 100)
            senao
                    salario_com_comissao <- salario + (salario * 10 / 100)
            fimse
       fimse
       
// saída de dados - exibir na tela o salário com a comissão
       escreval ("O salário com a comissão será de ", salario_com_comissao)
fimalgoritmo

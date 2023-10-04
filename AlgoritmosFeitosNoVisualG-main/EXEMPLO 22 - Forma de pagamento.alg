algoritmo "forma de pagamento"
// Função :
// Autor :
// Data : 06/09/2023
// Seção de Declarações 
var
     preco_produto, preco_a_pagar   : real
     opcao_pagamento                : caracter
inicio
// Entrada de dados - solicitação dos dois números e do operador
      escreval ("Digite preço do produto: ")
      leia (preco_produto)

      escreval ("Escolha a opção de pagamento: ")
      escreval ("A para pagamento a vista")
      escreval ("B para pagamento com cartão de crédito")
      escreval ("C para pagamento em duas vezes")
      escreval ("D para pagamento em três ou mais vezes")
      leia (opcao_pagamento)

// processamento - escolha e execução da operação em função do operador
      escolha (opcao_pagamento)
           caso "a"
                preco_a_pagar <- preco_produto - (preco_produto * 10/100)
           caso "b"
                preco_a_pagar <- preco_produto - (preco_produto * 15/100)
           caso "c"
                preco_a_pagar <- preco_produto
           caso "d"
                preco_a_pagar <- preco_produto + (preco_produto * 10/100)
      fimescolha

      escreval ("O valor final a ser pago é ", preco_a_pagar)
fimalgoritmo

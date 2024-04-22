### Princípio da Responsabilidade Única - Single Responsability principle

O princípio da Responsabilidade Única diz respeito a evitar o uso de funções que possuem mais de uma função.

No código 'PRUerrado' o princípio é ferido quando a minha função 'calculaAprovacao' faz a função de calcular a taxa de aprovação e tambem a função de imprimir essa taxa de aprovação.

Já em 'PRUcerto', eu separo a função do outro código em duas, assim cada função agora tem apenas uma responsabilidade. No caso do exemplo eu também criei uma classe apenas para a interação do console com o usuário, mas isso vai depender de cada código.
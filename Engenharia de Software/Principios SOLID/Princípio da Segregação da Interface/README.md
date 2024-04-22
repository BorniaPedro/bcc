### Princípio da Segregação da interface - interface Segregation principle 

Esse princípio visa evitar a criação de clientes que não utilizam todas as funções da classe, dessa forma, segregando esses clientes em classes menores.

Em 'PSIerrado' o princípio é ferido quando crio uma classe 'Automovel' que recebe uma função que satisfaz todos os automóveis, que é 'ligarMotor' mas tambem algumas funções que não satisfazem todos os tipos de automóveis, como as funções 'abrirPorta' e 'empinar'.

Esses erros são corrigidos em 'PSIcerto', aonde eu segrego as classes, criando uma classe 'Moto', que estende a classe 'Automovel' e herda a função padrão e recebe a função 'empinar', já que somente motos podem empinar. E a mesma coisa acontece na classe 'Carro', que recebe a função 'abrirPorta'.
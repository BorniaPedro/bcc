### Princípio Aberto/Fechado - Open/Closed principle 

Esse princípio visa melhorar a manutenção dos softwares, de modo que classes devem estar abertas a extensão mas fechadas para modificação.

No código 'PAFerrado' o princípio é ferido na função 'makeSound' porque para todo novo animal que eu quiser adicionar ao meu código, eu terei que modificar a função e a classe 'mãe' do meu código, o que em códigos mais complexos pode se tornar uma dor de cabeça enorme.

Já no código de 'PAFcerto', esse problema é resolvido, uma vez que dessa vez eu crio a classe 'Animal' junto com a função 'makeSound', e agora não mexo mais na classe principal, e ao invés disso, crio subclasses para os outros animais eu quero usar no meu código, estendendo a classe principal.
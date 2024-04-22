### Prefira Composição a Herança

Esse princípo visa diminuir o uso "forçado" de Herança e ao invés disso, utilizar Composição quando tratamos de uma classe fazer parte de outra.

No código 'PCHerrado' vemos exatamente o princípio sendo ferido com o uso forçado de Herança quando coloco que a classe 'Turma' estende a classe 'Aluno', deixando a entender que 'Turma' é uma subclasse de 'Aluno'.

O que é corrigido em 'PCHcerto', onde ao invés de estender a calsse 'Aluno', eu apenas crio um Array de alunos dentro da classe 'Turma' de forma que eu não preciso mexer na classe 'Alunos' mais.
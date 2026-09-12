#Casos de teste-Task Manager

##CT-001-Criar tarefa válida

Requisito:
RF-001-Criar tarefa

Pré-condição:
O sistema deve estar iniciado.

Passos:
1.Selecionar a opção "Criar tarefa".
2.Informar "Estudar C++".
3.Confirmar o cadastro.

Resultado esperado:
A tarefa "Estudar C++" deve ser criada e aparecer na lista de tarefas.

Resultado obtido:
A tarefa informada foi exibida corretamente.
Status:PASSOU

##CT-002-Criar tarefa sem nome

Requisito:
RNF-001-Validação

Pré condição:
O sistema deve estar iniciado.

Passos:
1.Selecionar a opção "criar tarefa".
2.Não informar nenhum nome.
3.Confirmar o cadastro.

Resultado esperado:
O sistema deve impedir o cadastro e informar que o nome da tarefa
é obrigatório.

Resultado obtido:
O sistema permitiu continuar sem informar um nome.

Status:
FALHOU

##Observação 
-Durante os testes,foi observado que o sistema
permite cadastro de números.
-Atualmente não existe um requisito definido quais caracteres são 
permitidos.
-Portanto esse comportamento não foi classificado como bug.
-É necessário definir com o responsável pelo sistema se nomes contendo
numeros devem ser permitidos.

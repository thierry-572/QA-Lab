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


##CT-003-Listagem de tarefas

Requisito:
RF-002-Listar tarefas

Pré condição:
Existir ao menos uma ou mais tarefas.

Passos:
1.iniciar o sistema.
2.cadastrar uma tarefa.
3.Selecionar a opção "Lista de tarefas".

Resultado esperado:
O sistema deve exibir todas as tarefas cadastradas apresentando
seus respectivos nomes de forma organizada.

Resultado obtido:
As tarefas foram exibidas corretamente.
Status
PASSOU

##CT-004-Excluir tarefa

Requisito:
RF-004-Excluir tarefa

Pré condição:
Existir ao menos uma tarefa cadastrada. 

Passos:
1.iniciar o sistema.
2.cadastrar uma tarefa.
3.selecionar o opção excluir tarefa.
4.digitar o nome da tarefa que deseja excluir.

Resultado esperado:
O sistema excluir a tarefa já cadastrada.

Resultado obtido:
A tarefa foi excluida corretamente.

STATUS
PASSOU

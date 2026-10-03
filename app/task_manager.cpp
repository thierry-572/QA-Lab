#include<iostream>
#include<vector>
#include<string>
using namespace std;

void cadastrar(vector<string>&Tarefas){
string nome;
cout<<"Digite o nome da sua tarefa:";
cin.ignore();
getline(cin,nome);
if(nome.empty()){
cout<<"Error:sua tarefa não pode estar vazia\n";
}

Tarefas.push_back(nome);
}
void listar(vector<string>&Tarefas){
for(int i=0;i<Tarefas.size();i++){
cout<<Tarefas[i]<<"\n"<<endl;
}
}
void excluir(vector<string>&Tarefas,string nomeTarefa){

cout<<"digite o nome da tarefa que deseja excluir:";
cin.ignore();
getline(cin,nomeTarefa);
for(int i=0;i<Tarefas.size();i++){
if(Tarefas[i]==nomeTarefa){
Tarefas.erase(Tarefas.begin()+i);
break;
 }
 }
}
int main(){
int escolha;string nomeTarefa;
vector<string>Tarefas;
do{

cout<<"1-Cadastrar\n";
cout<<"2-Listar\n";
cout<<"3-Excluir\n";
cout<<"4-Sair\n";
cin>>escolha;

switch(escolha){
case 1:
cadastrar(Tarefas);
break;

case 2:
listar(Tarefas);
break;

case 3:
excluir(Tarefas,nomeTarefa);
break;

default:
return 0;
}

}while(escolha!=4);





return 0;
}

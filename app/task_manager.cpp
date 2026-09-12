#include<iostream>
#include<string>
using namespace std;

bool nomeValido(const string& nome){
if(nome.empty()){
return false;
}

for(char c:nome){
if(!isalpha(c) && c !=' '){
return false;
 }
}
return true;
}

int main(){
string tarefa;

cout<<"===TASK MANAGER===\n";

do{
cout<<"digite o nome da tarefa:";
getline(cin,tarefa);

if(!nomeValido(tarefa)){
cout<<"ERRO:ultilize apenas letras:\n";
}

}while(!nomeValido(tarefa));

cout<<"Tarefa cadastrada:"<<tarefa<<endl;
return 0;
}

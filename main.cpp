#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
/*
void execve1(){
    char *args=(char *) malloc(sizeof(char)*20);
    cin>>args;
    char *args1[] ={args, NULL};
    cout<<"aaaaaaa"<<endl;
    if(execve("/bin/ls", args1, NULL) == -1) {
        perror ("file to execve");
        exit(EXIT_FAILURE);
    }
    cout<<"这句是打印不出来的！！！！！！"<<endl;
}*/
int main(int argc, char** argv) {
   /* int a;
    cin>>a;
    cout<<a<<endl;*/
  /*  char *args[] = {"ls","-al", NULL};

    if(execve ("/bin/ls", args, NULL) == -1) {
        perror ("execve");
        exit(EXIT_FAILURE);
    }
    cout<<"这句是打印不出来的！！！！！！"<<endl;
    return 0;*/
    pid_t pid;
    int a=1;
    pid=fork();
    if(pid<0){
        perror("fail to fork");

    printf("aaaaaaaaaaaaa\n");}
    if(pid==0){
        cout<<"hhhhhh"<<endl;
        char *args = (char *) malloc(sizeof(char) * 20);
        //char *args2=(char*) malloc(sizeof(char )*20);
        cin >> args;
        char *args1[] = {args, NULL};
        cout<<"aaaaaaa"<<endl;
        if(execve("/bin/ls", args1, NULL) == -1) {
            perror ("file to execve");
            exit(EXIT_FAILURE);
        }
        if(execve("/bin/pwd", args1, NULL) == -1){
            perror ("file to execve");
            exit(EXIT_FAILURE);
        }
    }
    else{
        while (true){}
    }
    return 0;
}

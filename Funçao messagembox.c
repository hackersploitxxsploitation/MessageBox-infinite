#include  <Windows.h>
#include  <stdio.h>
#include <stdlib.h>
int MessageBox (HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType);
void main (){
int i=1;
while (i>0){
MessageBox(hWnd,"olá mundo","minha primeira caixa de mensagem",MB_OK);
}
}
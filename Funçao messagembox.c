#include  <windows.h>
#define True 1
// int MessageBox (HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType);
int main (){
  while (True){
    MessageBox(NULL,"olá mundo","minha primeira caixa de mensagem",MB_OK);
  }
}

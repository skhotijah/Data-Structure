#include <iostream>
using namespace std;
int stack[4], n=4, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow/Sudah full sesuai 1..IndMAx"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow/ masih ada space kosong"<<endl;
   else {
      cout<<"Elemen stack yg di amil/ dihapus (pop) adalah "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Elemen Stacknya adalah:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty / kosong";
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Masukan Pilihan anda: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Masukan Nila yg akan di push:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Pilihan tidak valid"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}

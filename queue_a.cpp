#include <iostream>
using namespace std;
struct node {
   int info;
   struct node *next;
};
struct node* depan = NULL;
struct node* belakang = NULL;
struct node* temp;
void Insert() {
   int val;
   cout<<"Masukan elemen di queue : "<<endl;
   cin>>val;
   if (belakang == NULL) {
      belakang = (struct node *)malloc(sizeof(struct node));
      belakang->next = NULL;
      belakang->info = val;
      depan = belakang;
   } else {
      temp=(struct node *)malloc(sizeof(struct node));
      belakang->next = temp;
      temp->info = val;
      temp->next = NULL;
      belakang = temp;
   }
}
void Delete() {
   temp = depan;
   if (depan == NULL) {
      cout<<"Underflow/stack kosong"<<endl;
      return;
   }
   else
   if (temp->next != NULL) {
      temp = temp->next;
      cout<<"Elemen yg di hapus dari queue adalah: "<<depan->info<<endl;
      free(depan);
      depan = temp;
   } else {
      cout<<"Elemen yg di hapus dari queue adalah : "<<depan->info<<endl;
      free(depan);
      depan = NULL;
      belakang = NULL;
   }
}
void Display() {
   temp = depan;
   if ((depan == NULL) && (belakang == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Elemen Queue nya adalah: ";
   while (temp != NULL) {
      cout<<temp->info<<" ";
      temp = temp->next;
   }
   cout<<endl;
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Masukan pilihan anda : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Pilihan tidak valid"<<endl;
      }
   } while(ch!=4);
   return 0;
}
